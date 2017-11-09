/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"

namespace some { namespace ns {

const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES = _EnumB_EnumMapFactory::makeValuesToNamesMap();
const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES = _EnumB_EnumMapFactory::makeNamesToValuesMap();

}} // some::ns
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::some::ns::EnumB>::size = 1;
template <> const folly::Range<const  ::some::ns::EnumB*> TEnumTraits< ::some::ns::EnumB>::values = folly::range( ::some::ns::_EnumBEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::some::ns::EnumB>::names = folly::range( ::some::ns::_EnumBEnumDataStorage::names);
template <> const char* TEnumTraits< ::some::ns::EnumB>::findName( ::some::ns::EnumB value) {
  static auto const map = folly::Indestructible< ::some::ns::_EnumB_EnumMapFactory::ValuesToNamesMapType>{ ::some::ns::_EnumB_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::some::ns::EnumB>::findValue(const char* name,  ::some::ns::EnumB* outValue) {
  static auto const map = folly::Indestructible< ::some::ns::_EnumB_EnumMapFactory::NamesToValuesMapType>{ ::some::ns::_EnumB_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace some { namespace ns {

void ModuleA::__isset::__clear() {
  i32Field = false;
  strField = false;
  listField = false;
  mapField = false;
  inclAField = false;
  inclBField = false;
}

ModuleA::
  ModuleA() :
      i32Field(0) {}

ModuleA::ModuleA(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg, std::vector<int16_t> listField__arg, std::map<std::string, int32_t> mapField__arg,  ::some::ns::IncludedA inclAField__arg,  ::some::ns::IncludedB inclBField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)),
    listField(std::move(listField__arg)),
    mapField(std::move(mapField__arg)),
    inclAField(std::move(inclAField__arg)),
    inclBField(std::move(inclBField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
  __isset.listField = true;
  __isset.mapField = true;
  __isset.inclAField = true;
  __isset.inclBField = true;
}

void ModuleA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  listField.clear();
  mapField.clear();
  ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::clear(&inclAField);
  ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::clear(&inclBField);
  __isset.__clear();
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((strField == rhs.strField))) {
    return false;
  }
  if (!((listField == rhs.listField))) {
    return false;
  }
  if (!((mapField == rhs.mapField))) {
    return false;
  }
  if (!((inclAField == rhs.inclAField))) {
    return false;
  }
  if (!((inclBField == rhs.inclBField))) {
    return false;
  }
  return true;
}

const std::vector<int16_t>& ModuleA::get_listField() const& {
  return listField;
}

std::vector<int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const std::map<std::string, int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

std::map<std::string, int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}

const  ::some::ns::IncludedA& ModuleA::get_inclAField() const& {
  return inclAField;
}

 ::some::ns::IncludedA ModuleA::get_inclAField() && {
  return std::move(inclAField);
}

const  ::some::ns::IncludedB& ModuleA::get_inclBField() const& {
  return inclBField;
}

 ::some::ns::IncludedB ModuleA::get_inclBField() && {
  return std::move(inclBField);
}

void ModuleA::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "strField") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "listField") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "mapField") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "inclAField") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "inclBField") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.listField, b.listField);
  swap(a.mapField, b.mapField);
  swap(a.inclAField, b.inclAField);
  swap(a.inclBField, b.inclBField);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleA::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace some { namespace ns {

ModuleB::ModuleB(apache::thrift::FragileConstructor, int32_t i32Field__arg,  ::some::ns::EnumB inclEnumB__arg) :
    i32Field(std::move(i32Field__arg)),
    inclEnumB(std::move(inclEnumB__arg)) {
  __isset.i32Field = true;
  __isset.inclEnumB = true;
}

void ModuleB::__clear() {
  // clear all fields
  i32Field = 0;
  inclEnumB = static_cast< ::some::ns::EnumB>(0);
  __isset.__clear();
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((inclEnumB == rhs.inclEnumB))) {
    return false;
  }
  return true;
}

void ModuleB::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "i32Field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "inclEnumB") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.inclEnumB, b.inclEnumB);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleB::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
