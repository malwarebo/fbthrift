# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# distutils: language=c++
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyObject, PyTypeObject, Py_LT, Py_EQ
from folly.iobuf cimport cIOBuf, IOBuf
from folly.range cimport StringPiece as cStringPiece, Range as cRange
from libc.stdint cimport uint32_t
from libcpp.string cimport string
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.pair cimport pair
from collections.abc import Iterable

from thrift.py3.std_libcpp cimport string_view, optional, sv_to_str
from thrift.py3.common cimport Protocol

cdef extern from *:
    """
    static CYTHON_INLINE void SetMetaClass(PyTypeObject* t, PyTypeObject* m)
    {
        Py_TYPE(t) = m;
        PyType_Modified(t);
    }
    """
    void SetMetaClass(PyTypeObject* t, PyTypeObject* m)

cdef extern from "thrift/lib/py3/types.h" namespace "::thrift::py3" nogil:
    shared_ptr[T] constant_shared_ptr[T](T)
    const T& default_inst[T]()

ctypedef PyObject* PyObjectPtr
ctypedef optional[int] cOptionalInt

cdef extern from "thrift/lib/py3/enums.h" namespace "::thrift::py3" nogil:
    cdef cppclass cEnumData "::thrift::py3::EnumData":
        pair[PyObjectPtr, cOptionalInt] tryGetByName(string_view name) except +
        pair[PyObjectPtr, string_view] tryGetByValue(int value) except +
        PyObject* tryAddToCache(int value, PyObject* obj) except +
        size_t size()
        string_view getPyName(string_view name)
        cRange[const cStringPiece*] getNames()
    cdef cppclass cEnumFlagsData "::thrift::py3::EnumFlagsData"(cEnumData):
        PyObject* tryAddToFlagValuesCache(int value, PyObject* obj) except +
        string getNameForDerivedValue(int value) except +
        int getInvertValue(int value) except +
        int convertNegativeValue(int value) except +
    cEnumData* createEnumData[T]() except +
    cEnumFlagsData* createEnumFlagsData[T]() except +
    cEnumData* createEnumDataForUnionType[T]() except +


cdef class EnumData:
    cdef unique_ptr[cEnumData] _cpp_obj
    cdef type _py_type
    cdef get_by_name(self, str name)
    cdef get_by_value(self, int value)
    cdef PyObject* _add_to_cache(self, str name, int value) except *
    cdef int size(self)
    cdef void _value_error(self, int value) except *
    @staticmethod
    cdef EnumData create(cEnumData* ptr, py_type)

cdef class EnumFlagsData(EnumData):
    cdef get_invert(self, uint32_t value)
    @staticmethod
    cdef EnumFlagsData create(cEnumFlagsData* ptr, py_type)

cdef class UnionTypeEnumData(EnumData):
    cdef object __empty
    @staticmethod
    cdef UnionTypeEnumData create(cEnumData* ptr, py_type)

cdef class EnumMeta(type):
    pass


cdef class __NotSet:
    pass

cdef __NotSet NOTSET


cdef class Struct:
    cdef IOBuf _serialize(self, Protocol proto)
    cdef uint32_t _deserialize(self, const cIOBuf* buf, Protocol proto) except? 0
    cdef object __fbthrift_isset(self)


cdef class Union(Struct):
    pass


cdef class Container:
    cdef object __hash
    cdef object __weakref__


cdef class CompiledEnum:
    cdef object __weakref__
    cdef readonly int value
    cdef readonly str name
    cdef object __hash
    cdef object __str
    cdef object __repr
    cdef get_by_name(self, str name)


cdef class Flag(CompiledEnum):
    pass

cdef class BadEnum:
    cdef object _enum
    cdef readonly int value
    cdef readonly str name


cdef translate_cpp_enum_to_python(object EnumClass, int value)


# For cpp.type'd binary values we need a "string" that cython doesn't think
# is a string (so it doesn't generate all the string stuff)
cdef extern from "<string>" namespace "std" nogil:
    cdef cppclass bstring "std::basic_string<char>":
        bstring(string&) except +
        const char* data()
        size_t size()
        size_t length()


cdef extern from "<utility>" namespace "std" nogil:
    cdef string move(string)


cdef inline object list_compare(object first, object second, int op):
    """ Take either Py_EQ or Py_LT, everything else is derived """
    if not (isinstance(first, Iterable) and isinstance(second, Iterable)):
        if op == Py_EQ:
            return False
        else:
            return NotImplemented

    if op == Py_EQ:
        if len(first) != len(second):
            return False

    for x, y in zip(first, second):
        if x != y:
            if op == Py_LT:
                return x < y
            else:
                return False

    if op == Py_LT:
        return len(first) < len(second)
    return True


cdef inline string bytes_to_string(bytes b) except*:
    cdef Py_ssize_t length
    cdef char* data
    PyBytes_AsStringAndSize(b, &data, &length)
    return move(string(data, length))  # there is a temp because string can raise



cdef extern from "thrift/lib/cpp2/FieldRef.h" namespace "apache::thrift" nogil:
    cdef cppclass field_ref[T]:
        void assign "operator="(T)
        T value()
        # Cython doesn't handle references very well, so use a different name
        # for value in the contexts where references actually work.
        T& ref "value" ()
        # Cython doesn't handle references very well, so use a different name
        # for value_unchecked in the contexts where references actually work.
        T& ref_unchecked "value_unchecked" ()
        bint has_value()

    cdef cppclass optional_field_ref[T]:
        void assign "operator="(T)
        T value()
        T value_unchecked()
        # Cython doesn't handle references very well, so use a different name
        # for value in the contexts where references actually work.
        T& ref "value" ()
        # Cython doesn't handle references very well, so use a different name
        # for value_unchecked in the contexts where references actually work.
        T& ref_unchecked "value_unchecked" ()
        void reset()
        bint has_value()
