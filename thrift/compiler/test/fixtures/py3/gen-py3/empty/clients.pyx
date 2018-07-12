#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
import thrift.py3.client
cimport thrift.py3.client
from thrift.py3.common cimport RpcOptions as __RpcOptions
from thrift.py3.common import RpcOptions as __RpcOptions

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport cython

import sys
import types as _py_types
import builtins as _builtins
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport empty.types as _empty_types
import empty.types as _empty_types

from empty.clients_wrapper cimport cNullServiceAsyncClient, cNullServiceClientWrapper



cdef object _NullService_annotations = _py_types.MappingProxyType({
})


cdef class NullService(thrift.py3.client.Client):
    annotations = _NullService_annotations

    def __cinit__(NullService self):
        loop = asyncio_get_event_loop()
        self._connect_future = loop.create_future()
        self._deferred_headers = {}

    cdef const type_info* _typeid(NullService self):
        return &typeid(cNullServiceAsyncClient)

    @staticmethod
    cdef _empty_NullService_set_client(NullService inst, shared_ptr[cNullServiceClientWrapper] c_obj):
        """So the class hierarchy talks to the correct pointer type"""
        inst._empty_NullService_client = c_obj

    cdef _empty_NullService_reset_client(NullService self):
        """So the class hierarchy resets the shared pointer up the chain"""
        self._empty_NullService_client.reset()

    def __dealloc__(NullService self):
        if self._connect_future.done() and not self._connect_future.exception():
            print(f'thrift-py3 client: {self!r} was not cleaned up, use the async context manager', file=sys.stderr)
            if self._empty_NullService_client:
                deref(self._empty_NullService_client).disconnect().get()
        self._empty_NullService_reset_client()

    cdef bind_client(NullService self, cRequestChannel_ptr&& channel):
        NullService._empty_NullService_set_client(
            self,
            makeClientWrapper[cNullServiceAsyncClient, cNullServiceClientWrapper](
                thrift.py3.client.move(channel)
            ),
        )

    async def __aenter__(NullService self):
        await asyncio_shield(self._connect_future)
        if self._context_entered:
            raise asyncio_InvalidStateError('Client context has been used already')
        self._context_entered = True
        for key, value in self._deferred_headers.items():
            self.set_persistent_header(key, value)
        self._deferred_headers = None
        return self

    def __aexit__(NullService self, *exc):
        self._check_connect_future()
        loop = asyncio_get_event_loop()
        future = loop.create_future()
        userdata = (self, future)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            deref(self._empty_NullService_client).disconnect(),
            closed_NullService_py3_client_callback,
            <PyObject *>userdata  # So we keep client alive until disconnect
        )
        # To break any future usage of this client
        # Also to prevent dealloc from trying to disconnect in a blocking way.
        badfuture = loop.create_future()
        badfuture.set_exception(asyncio_InvalidStateError('Client Out of Context'))
        badfuture.exception()
        self._connect_future = badfuture
        return asyncio_shield(future)

    def set_persistent_header(NullService self, str key, str value):
        if not self._empty_NullService_client:
            self._deferred_headers[key] = value
            return

        cdef string ckey = <bytes> key.encode('utf-8')
        cdef string cvalue = <bytes> value.encode('utf-8')
        deref(self._empty_NullService_client).setPersistentHeader(ckey, cvalue)



cdef void closed_NullService_py3_client_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata,
):
    client, pyfuture = <object> userdata 
    pyfuture.set_result(None)
