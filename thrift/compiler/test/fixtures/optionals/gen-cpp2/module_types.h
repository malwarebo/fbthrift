/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <folly/Optional.h>


namespace apache {
namespace thrift {
namespace accessor {
#ifndef APACHE_THRIFT_ACCESSOR_red
#define APACHE_THRIFT_ACCESSOR_red
APACHE_THRIFT_DEFINE_ACCESSOR(red);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_green
#define APACHE_THRIFT_ACCESSOR_green
APACHE_THRIFT_DEFINE_ACCESSOR(green);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_blue
#define APACHE_THRIFT_ACCESSOR_blue
APACHE_THRIFT_DEFINE_ACCESSOR(blue);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_alpha
#define APACHE_THRIFT_ACCESSOR_alpha
APACHE_THRIFT_DEFINE_ACCESSOR(alpha);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_color
#define APACHE_THRIFT_ACCESSOR_color
APACHE_THRIFT_DEFINE_ACCESSOR(color);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_licensePlate
#define APACHE_THRIFT_ACCESSOR_licensePlate
APACHE_THRIFT_DEFINE_ACCESSOR(licensePlate);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_description
#define APACHE_THRIFT_ACCESSOR_description
APACHE_THRIFT_DEFINE_ACCESSOR(description);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_hasAC
#define APACHE_THRIFT_ACCESSOR_hasAC
APACHE_THRIFT_DEFINE_ACCESSOR(hasAC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_age
#define APACHE_THRIFT_ACCESSOR_age
APACHE_THRIFT_DEFINE_ACCESSOR(age);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_address
#define APACHE_THRIFT_ACCESSOR_address
APACHE_THRIFT_DEFINE_ACCESSOR(address);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_favoriteColor
#define APACHE_THRIFT_ACCESSOR_favoriteColor
APACHE_THRIFT_DEFINE_ACCESSOR(favoriteColor);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_friends
#define APACHE_THRIFT_ACCESSOR_friends
APACHE_THRIFT_DEFINE_ACCESSOR(friends);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_bestFriend
#define APACHE_THRIFT_ACCESSOR_bestFriend
APACHE_THRIFT_DEFINE_ACCESSOR(bestFriend);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_petNames
#define APACHE_THRIFT_ACCESSOR_petNames
APACHE_THRIFT_DEFINE_ACCESSOR(petNames);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_afraidOfAnimal
#define APACHE_THRIFT_ACCESSOR_afraidOfAnimal
APACHE_THRIFT_DEFINE_ACCESSOR(afraidOfAnimal);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_vehicles
#define APACHE_THRIFT_ACCESSOR_vehicles
APACHE_THRIFT_DEFINE_ACCESSOR(vehicles);
#endif
} // namespace accessor
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::Animal> : public apache::thrift::detail::enum_hash<typename ::cpp2::Animal> {};
template<> struct equal_to<typename ::cpp2::Animal> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::Animal> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Animal>;

template <> struct TEnumTraits<::cpp2::Animal> {
  using type = ::cpp2::Animal;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::DOG; }
  static constexpr type max() { return type::TARANTULA; }
};


}} // apache::thrift

namespace cpp2 {

using _Animal_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Animal>;
extern const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;
extern const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Color;
class Vehicle;
class Person;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef int64_t PersonID;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Color final : private apache::thrift::detail::st::ComparisonOperators<Color> {
 public:

  Color() :
      red(0),
      green(0),
      blue(0),
      alpha(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg);

  Color(Color&&) = default;

  Color(const Color&) = default;

  Color& operator=(Color&&) = default;

  Color& operator=(const Color&) = default;
  void __clear();
  double red;
  double green;
  double blue;
  double alpha;
  bool operator==(const Color& rhs) const;
  bool operator<(const Color& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Color >;
};

void swap(Color& a, Color& b);

template <class Protocol_>
uint32_t Color::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Vehicle final : private apache::thrift::detail::st::ComparisonOperators<Vehicle> {
 public:

  Vehicle();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Vehicle(apache::thrift::FragileConstructor,  ::cpp2::Color color__arg, ::std::string licensePlate__arg, ::std::string description__arg, ::std::string name__arg, bool hasAC__arg);

  Vehicle(Vehicle&&) = default;

  Vehicle(const Vehicle&) = default;

  Vehicle& operator=(Vehicle&&) = default;

  Vehicle& operator=(const Vehicle&) = default;
  void __clear();

  ~Vehicle();

   ::cpp2::Color color;
  folly::Optional<::std::string> licensePlate;
  folly::Optional<::std::string> description;
  folly::Optional<::std::string> name;
  folly::Optional<bool> hasAC;
  bool operator==(const Vehicle& rhs) const;
  bool operator<(const Vehicle& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Vehicle >;
};

void swap(Vehicle& a, Vehicle& b);

template <class Protocol_>
uint32_t Vehicle::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Person final : private apache::thrift::detail::st::ComparisonOperators<Person> {
 public:

  Person();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Person(apache::thrift::FragileConstructor,  ::cpp2::PersonID id__arg, ::std::string name__arg, int16_t age__arg, ::std::string address__arg,  ::cpp2::Color favoriteColor__arg, ::std::set< ::cpp2::PersonID> friends__arg,  ::cpp2::PersonID bestFriend__arg, ::std::map< ::cpp2::Animal, ::std::string> petNames__arg,  ::cpp2::Animal afraidOfAnimal__arg, ::std::vector< ::cpp2::Vehicle> vehicles__arg);

  Person(Person&&) = default;

  Person(const Person&) = default;

  Person& operator=(Person&&) = default;

  Person& operator=(const Person&) = default;
  void __clear();

  ~Person();

   ::cpp2::PersonID id;
  ::std::string name;
  folly::Optional<int16_t> age;
  folly::Optional<::std::string> address;
  folly::Optional< ::cpp2::Color> favoriteColor;
  folly::Optional<::std::set< ::cpp2::PersonID>> friends;
  folly::Optional< ::cpp2::PersonID> bestFriend;
  folly::Optional<::std::map< ::cpp2::Animal, ::std::string>> petNames;
  folly::Optional< ::cpp2::Animal> afraidOfAnimal;
  folly::Optional<::std::vector< ::cpp2::Vehicle>> vehicles;
  bool operator==(const Person& rhs) const;
  bool operator<(const Person& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Person >;
};

void swap(Person& a, Person& b);

template <class Protocol_>
uint32_t Person::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
