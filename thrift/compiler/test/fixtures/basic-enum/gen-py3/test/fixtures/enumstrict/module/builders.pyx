#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_enumstrict_module_types.MyStruct

    def __iter__(self):
        yield "myEnum", self.myEnum
        yield "myBigEnum", self.myBigEnum

