#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET as __NOTSET
from thrift.py3.types cimport translate_cpp_enum_to_python, SetMetaClass as __SetMetaClass
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer import Protocol as __Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections import Sequence, Set, Mapping, Iterable
import warnings
import builtins as _builtins



cdef class Banal(thrift.py3.exceptions.Error):

    def __init__(
        Banal self
    ):
        self._cpp_obj = move(Banal._make_instance(
          NULL,
        ))
        _builtins.Exception.__init__(self, )


    @staticmethod
    cdef unique_ptr[cBanal] _make_instance(
        cBanal* base_instance
    ) except *:
        cdef unique_ptr[cBanal] c_inst
        if base_instance:
            c_inst = make_unique[cBanal](deref(base_instance))
        else:
            c_inst = make_unique[cBanal]()

        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        return iter(())

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cBanal] cpp_obj):
        inst = <Banal>Banal.__new__(Banal, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        inst._cpp_obj = cpp_obj
        _builtins.Exception.__init__(inst, )
        return inst


    def __hash__(Banal self):
        return super().__hash__()

    def __repr__(Banal self):
        return f'Banal()'
    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(self, other))
        if not (
                isinstance(self, Banal) and
                isinstance(other, Banal)):
            if cop == 2:  # different types are never equal
                return False
            else:         # different types are always notequal
                return True

        cdef cBanal cself = deref((<Banal>self)._cpp_obj)
        cdef cBanal cother = deref((<Banal>other)._cpp_obj)
        cdef cbool cmp = cself == cother
        if cop == 2:
            return cmp
        return not cmp



cdef class Fiery(thrift.py3.exceptions.Error):

    def __init__(
        Fiery self,
        str message=None
    ):
        if message is None:
            raise TypeError("__init__() needs required argument 'message'")
        self._cpp_obj = move(Fiery._make_instance(
          NULL,
          message,
        ))
        _builtins.Exception.__init__(self, self.message)


    @staticmethod
    cdef unique_ptr[cFiery] _make_instance(
        cFiery* base_instance,
        object message
    ) except *:
        cdef unique_ptr[cFiery] c_inst
        if base_instance:
            c_inst = make_unique[cFiery](deref(base_instance))
        else:
            c_inst = make_unique[cFiery]()

        if message is not None:
            deref(c_inst).message = message.encode('UTF-8')
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __iter__(self):
        yield 'message', self.message

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cFiery] cpp_obj):
        inst = <Fiery>Fiery.__new__(Fiery, (<bytes>deref(cpp_obj).what()).decode('utf-8'))
        inst._cpp_obj = cpp_obj
        _builtins.Exception.__init__(inst, inst.message)
        return inst

    @property
    def message(self):

        return (<bytes>self._cpp_obj.get().message).decode('UTF-8')


    def __hash__(Fiery self):
        return super().__hash__()

    def __repr__(Fiery self):
        return f'Fiery(message={repr(self.message)})'
    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(self, other))
        if not (
                isinstance(self, Fiery) and
                isinstance(other, Fiery)):
            if cop == 2:  # different types are never equal
                return False
            else:         # different types are always notequal
                return True

        cdef cFiery cself = deref((<Fiery>self)._cpp_obj)
        cdef cFiery cother = deref((<Fiery>other)._cpp_obj)
        cdef cbool cmp = cself == cother
        if cop == 2:
            return cmp
        return not cmp



