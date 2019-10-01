/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace accessor {
#ifndef APACHE_THRIFT_ACCESSOR_weeks
#define APACHE_THRIFT_ACCESSOR_weeks
APACHE_THRIFT_DEFINE_ACCESSOR(weeks);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_title
#define APACHE_THRIFT_ACCESSOR_title
APACHE_THRIFT_DEFINE_ACCESSOR(title);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_employer
#define APACHE_THRIFT_ACCESSOR_employer
APACHE_THRIFT_DEFINE_ACCESSOR(employer);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_city
#define APACHE_THRIFT_ACCESSOR_city
APACHE_THRIFT_DEFINE_ACCESSOR(city);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_min
#define APACHE_THRIFT_ACCESSOR_min
APACHE_THRIFT_DEFINE_ACCESSOR(min);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_max
#define APACHE_THRIFT_ACCESSOR_max
APACHE_THRIFT_DEFINE_ACCESSOR(max);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_a
#define APACHE_THRIFT_ACCESSOR_a
APACHE_THRIFT_DEFINE_ACCESSOR(a);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_b
#define APACHE_THRIFT_ACCESSOR_b
APACHE_THRIFT_DEFINE_ACCESSOR(b);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_a
#define APACHE_THRIFT_ACCESSOR_a
APACHE_THRIFT_DEFINE_ACCESSOR(a);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_b
#define APACHE_THRIFT_ACCESSOR_b
APACHE_THRIFT_DEFINE_ACCESSOR(b);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_c
#define APACHE_THRIFT_ACCESSOR_c
APACHE_THRIFT_DEFINE_ACCESSOR(c);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_d
#define APACHE_THRIFT_ACCESSOR_d
APACHE_THRIFT_DEFINE_ACCESSOR(d);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_a
#define APACHE_THRIFT_ACCESSOR_a
APACHE_THRIFT_DEFINE_ACCESSOR(a);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_b
#define APACHE_THRIFT_ACCESSOR_b
APACHE_THRIFT_DEFINE_ACCESSOR(b);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_c
#define APACHE_THRIFT_ACCESSOR_c
APACHE_THRIFT_DEFINE_ACCESSOR(c);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_i
#define APACHE_THRIFT_ACCESSOR_i
APACHE_THRIFT_DEFINE_ACCESSOR(i);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_d
#define APACHE_THRIFT_ACCESSOR_d
APACHE_THRIFT_DEFINE_ACCESSOR(d);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_i
#define APACHE_THRIFT_ACCESSOR_i
APACHE_THRIFT_DEFINE_ACCESSOR(i);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_d
#define APACHE_THRIFT_ACCESSOR_d
APACHE_THRIFT_DEFINE_ACCESSOR(d);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_s
#define APACHE_THRIFT_ACCESSOR_s
APACHE_THRIFT_DEFINE_ACCESSOR(s);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_u
#define APACHE_THRIFT_ACCESSOR_u
APACHE_THRIFT_DEFINE_ACCESSOR(u);
#endif
} // namespace accessor
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class EmptyEnum {};




enum class City {
  NYC = 0,
  MPK = 1,
  SEA = 2,
  LON = 3
};




enum class Company {
  FACEBOOK = 0,
  WHATSAPP = 1,
  OCULUS = 2,
  INSTAGRAM = 3
};




} // cpp2
namespace std {


template<> struct hash<typename ::cpp2::EmptyEnum> : public apache::thrift::detail::enum_hash<typename ::cpp2::EmptyEnum> {};
template<> struct equal_to<typename ::cpp2::EmptyEnum> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::EmptyEnum> {};


template<> struct hash<typename ::cpp2::City> : public apache::thrift::detail::enum_hash<typename ::cpp2::City> {};
template<> struct equal_to<typename ::cpp2::City> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::City> {};


template<> struct hash<typename ::cpp2::Company> : public apache::thrift::detail::enum_hash<typename ::cpp2::Company> {};
template<> struct equal_to<typename ::cpp2::Company> : public apache::thrift::detail::enum_equal_to<typename ::cpp2::Company> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::EmptyEnum>;

template <> struct TEnumTraits<::cpp2::EmptyEnum> {
  using type = ::cpp2::EmptyEnum;

  static constexpr std::size_t const size = 0;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

};


template <> struct TEnumDataStorage<::cpp2::City>;

template <> struct TEnumTraits<::cpp2::City> {
  using type = ::cpp2::City;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::NYC; }
  static constexpr type max() { return type::LON; }
};


template <> struct TEnumDataStorage<::cpp2::Company>;

template <> struct TEnumTraits<::cpp2::Company> {
  using type = ::cpp2::Company;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::FACEBOOK; }
  static constexpr type max() { return type::INSTAGRAM; }
};


}} // apache::thrift

namespace cpp2 {

using _EmptyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<EmptyEnum>;
extern const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES;
extern const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES;

using _City_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<City>;
extern const _City_EnumMapFactory::ValuesToNamesMapType _City_VALUES_TO_NAMES;
extern const _City_EnumMapFactory::NamesToValuesMapType _City_NAMES_TO_VALUES;

using _Company_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Company>;
extern const _Company_EnumMapFactory::ValuesToNamesMapType _Company_VALUES_TO_NAMES;
extern const _Company_EnumMapFactory::NamesToValuesMapType _Company_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Internship;
class UnEnumStruct;
class Range;
class struct1;
class struct2;
class struct3;
class union1;
class union2;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef  ::cpp2::Company MyCompany;
typedef ::std::string MyStringIdentifier;
typedef int32_t MyIntIdentifier;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Internship final : private apache::thrift::detail::st::ComparisonOperators<Internship> {
 public:

  Internship() :
      weeks(0),
      employer( ::cpp2::Company::FACEBOOK) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Internship(apache::thrift::FragileConstructor, int32_t weeks__arg, ::std::string title__arg,  ::cpp2::Company employer__arg);

  Internship(Internship&&) = default;

  Internship(const Internship&) = default;

  Internship& operator=(Internship&&) = default;

  Internship& operator=(const Internship&) = default;
  void __clear();
  int32_t weeks;
  ::std::string title;
   ::cpp2::Company employer;

  struct __isset {
    bool title;
    bool employer;
  } __isset = {};
  bool operator==(const Internship& rhs) const;
  bool operator<(const Internship& rhs) const;

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Company&> employer_ref() const& {
    return {employer, __isset.employer};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref<const  ::cpp2::Company&&> employer_ref() const&& {
    return {std::move(employer), __isset.employer};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Company&> employer_ref() & {
    return {employer, __isset.employer};
  }

  FOLLY_ERASE ::apache::thrift::optional_field_ref< ::cpp2::Company&&> employer_ref() && {
    return {std::move(employer), __isset.employer};
  }

  int32_t get_weeks() const {
    return weeks;
  }

  int32_t& set_weeks(int32_t weeks_) {
    weeks = weeks_;
    return weeks;
  }

  const ::std::string& get_title() const& {
    return title;
  }

  ::std::string get_title() && {
    return std::move(title);
  }

  template <typename T_Internship_title_struct_setter = ::std::string>
  ::std::string& set_title(T_Internship_title_struct_setter&& title_) {
    title = std::forward<T_Internship_title_struct_setter>(title_);
    __isset.title = true;
    return title;
  }

  const  ::cpp2::Company* get_employer() const& {
    return __isset.employer ? std::addressof(employer) : nullptr;
  }

   ::cpp2::Company* get_employer() & {
    return __isset.employer ? std::addressof(employer) : nullptr;
  }
   ::cpp2::Company* get_employer() && = delete;

   ::cpp2::Company& set_employer( ::cpp2::Company employer_) {
    employer = employer_;
    __isset.employer = true;
    return employer;
  }

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

  friend class ::apache::thrift::Cpp2Ops< Internship >;
};

void swap(Internship& a, Internship& b);

template <class Protocol_>
uint32_t Internship::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class UnEnumStruct final : private apache::thrift::detail::st::ComparisonOperators<UnEnumStruct> {
 public:

  UnEnumStruct() :
      city(static_cast< ::cpp2::City>(-1)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  UnEnumStruct(apache::thrift::FragileConstructor,  ::cpp2::City city__arg);

  UnEnumStruct(UnEnumStruct&&) = default;

  UnEnumStruct(const UnEnumStruct&) = default;

  UnEnumStruct& operator=(UnEnumStruct&&) = default;

  UnEnumStruct& operator=(const UnEnumStruct&) = default;
  void __clear();
   ::cpp2::City city;

  struct __isset {
    bool city;
  } __isset = {};
  bool operator==(const UnEnumStruct& rhs) const;
  bool operator<(const UnEnumStruct& rhs) const;

   ::cpp2::City get_city() const {
    return city;
  }

   ::cpp2::City& set_city( ::cpp2::City city_) {
    city = city_;
    __isset.city = true;
    return city;
  }

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

  friend class ::apache::thrift::Cpp2Ops< UnEnumStruct >;
};

void swap(UnEnumStruct& a, UnEnumStruct& b);

template <class Protocol_>
uint32_t UnEnumStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Range final : private apache::thrift::detail::st::ComparisonOperators<Range> {
 public:

  Range() :
      min(0),
      max(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Range(apache::thrift::FragileConstructor, int32_t min__arg, int32_t max__arg);

  Range(Range&&) = default;

  Range(const Range&) = default;

  Range& operator=(Range&&) = default;

  Range& operator=(const Range&) = default;
  void __clear();
  int32_t min;
  int32_t max;
  bool operator==(const Range& rhs) const;
  bool operator<(const Range& rhs) const;

  int32_t get_min() const {
    return min;
  }

  int32_t& set_min(int32_t min_) {
    min = min_;
    return min;
  }

  int32_t get_max() const {
    return max;
  }

  int32_t& set_max(int32_t max_) {
    max = max_;
    return max;
  }

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

  friend class ::apache::thrift::Cpp2Ops< Range >;
};

void swap(Range& a, Range& b);

template <class Protocol_>
uint32_t Range::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class struct1 final : private apache::thrift::detail::st::ComparisonOperators<struct1> {
 public:

  struct1() :
      a(1234567),
      b(apache::thrift::StringTraits< std::string>::fromStringLiteral("<uninitialized>")) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  struct1(apache::thrift::FragileConstructor, int32_t a__arg, ::std::string b__arg);

  struct1(struct1&&) = default;

  struct1(const struct1&) = default;

  struct1& operator=(struct1&&) = default;

  struct1& operator=(const struct1&) = default;
  void __clear();
  int32_t a;
  ::std::string b;

  struct __isset {
    bool a;
    bool b;
  } __isset = {};
  bool operator==(const struct1& rhs) const;
  bool operator<(const struct1& rhs) const;

  int32_t get_a() const {
    return a;
  }

  int32_t& set_a(int32_t a_) {
    a = a_;
    __isset.a = true;
    return a;
  }

  const ::std::string& get_b() const& {
    return b;
  }

  ::std::string get_b() && {
    return std::move(b);
  }

  template <typename T_struct1_b_struct_setter = ::std::string>
  ::std::string& set_b(T_struct1_b_struct_setter&& b_) {
    b = std::forward<T_struct1_b_struct_setter>(b_);
    __isset.b = true;
    return b;
  }

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

  friend class ::apache::thrift::Cpp2Ops< struct1 >;
};

void swap(struct1& a, struct1& b);

template <class Protocol_>
uint32_t struct1::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class struct2 final : private apache::thrift::detail::st::ComparisonOperators<struct2> {
 public:

  struct2() :
      a(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  struct2(apache::thrift::FragileConstructor, int32_t a__arg, ::std::string b__arg,  ::cpp2::struct1 c__arg, ::std::vector<int32_t> d__arg);

  struct2(struct2&&) = default;

  struct2(const struct2&) = default;

  struct2& operator=(struct2&&) = default;

  struct2& operator=(const struct2&) = default;
  void __clear();
  int32_t a;
  ::std::string b;
   ::cpp2::struct1 c;
  ::std::vector<int32_t> d;

  struct __isset {
    bool a;
    bool b;
    bool c;
    bool d;
  } __isset = {};
  bool operator==(const struct2& rhs) const;
  bool operator<(const struct2& rhs) const;

  int32_t get_a() const {
    return a;
  }

  int32_t& set_a(int32_t a_) {
    a = a_;
    __isset.a = true;
    return a;
  }

  const ::std::string& get_b() const& {
    return b;
  }

  ::std::string get_b() && {
    return std::move(b);
  }

  template <typename T_struct2_b_struct_setter = ::std::string>
  ::std::string& set_b(T_struct2_b_struct_setter&& b_) {
    b = std::forward<T_struct2_b_struct_setter>(b_);
    __isset.b = true;
    return b;
  }
  const  ::cpp2::struct1& get_c() const&;
   ::cpp2::struct1 get_c() &&;

  template <typename T_struct2_c_struct_setter =  ::cpp2::struct1>
   ::cpp2::struct1& set_c(T_struct2_c_struct_setter&& c_) {
    c = std::forward<T_struct2_c_struct_setter>(c_);
    __isset.c = true;
    return c;
  }
  const ::std::vector<int32_t>& get_d() const&;
  ::std::vector<int32_t> get_d() &&;

  template <typename T_struct2_d_struct_setter = ::std::vector<int32_t>>
  ::std::vector<int32_t>& set_d(T_struct2_d_struct_setter&& d_) {
    d = std::forward<T_struct2_d_struct_setter>(d_);
    __isset.d = true;
    return d;
  }

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

  friend class ::apache::thrift::Cpp2Ops< struct2 >;
};

void swap(struct2& a, struct2& b);

template <class Protocol_>
uint32_t struct2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class struct3 final : private apache::thrift::detail::st::ComparisonOperators<struct3> {
 public:

  struct3() :
      b(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  struct3(apache::thrift::FragileConstructor, ::std::string a__arg, int32_t b__arg,  ::cpp2::struct2 c__arg);

  struct3(struct3&&) = default;

  struct3(const struct3&) = default;

  struct3& operator=(struct3&&) = default;

  struct3& operator=(const struct3&) = default;
  void __clear();
  ::std::string a;
  int32_t b;
   ::cpp2::struct2 c;

  struct __isset {
    bool a;
    bool b;
    bool c;
  } __isset = {};
  bool operator==(const struct3& rhs) const;
  bool operator<(const struct3& rhs) const;

  const ::std::string& get_a() const& {
    return a;
  }

  ::std::string get_a() && {
    return std::move(a);
  }

  template <typename T_struct3_a_struct_setter = ::std::string>
  ::std::string& set_a(T_struct3_a_struct_setter&& a_) {
    a = std::forward<T_struct3_a_struct_setter>(a_);
    __isset.a = true;
    return a;
  }

  int32_t get_b() const {
    return b;
  }

  int32_t& set_b(int32_t b_) {
    b = b_;
    __isset.b = true;
    return b;
  }
  const  ::cpp2::struct2& get_c() const&;
   ::cpp2::struct2 get_c() &&;

  template <typename T_struct3_c_struct_setter =  ::cpp2::struct2>
   ::cpp2::struct2& set_c(T_struct3_c_struct_setter&& c_) {
    c = std::forward<T_struct3_c_struct_setter>(c_);
    __isset.c = true;
    return c;
  }

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

  friend class ::apache::thrift::Cpp2Ops< struct3 >;
};

void swap(struct3& a, struct3& b);

template <class Protocol_>
uint32_t struct3::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class union1 final : private apache::thrift::detail::st::ComparisonOperators<union1> {
 public:
  enum Type {
    __EMPTY__ = 0,
    i = 1,
    d = 2,
  } ;

  union1()
      : type_(Type::__EMPTY__) {}

  union1(union1&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d:
      {
        set_d(std::move(rhs.value_.d));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  union1(const union1& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d:
      {
        set_d(rhs.value_.d);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  union1& operator=(union1&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d:
      {
        set_d(std::move(rhs.value_.d));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  union1& operator=(const union1& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d:
      {
        set_d(rhs.value_.d);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~union1() {
    __clear();
  }
  union storage_type {
    int32_t i;
    double d;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const union1& rhs) const;
  bool operator<(const union1& rhs) const;

  int32_t& set_i(int32_t t = int32_t()) {
    __clear();
    type_ = Type::i;
    ::new (std::addressof(value_.i)) int32_t(t);
    return value_.i;
  }

  double& set_d(double t = double()) {
    __clear();
    type_ = Type::d;
    ::new (std::addressof(value_.d)) double(t);
    return value_.d;
  }

  int32_t const & get_i() const {
    assert(type_ == Type::i);
    return value_.i;
  }

  double const & get_d() const {
    assert(type_ == Type::d);
    return value_.d;
  }

  int32_t & mutable_i() {
    assert(type_ == Type::i);
    return value_.i;
  }

  double & mutable_d() {
    assert(type_ == Type::d);
    return value_.d;
  }

  int32_t move_i() {
    assert(type_ == Type::i);
    return std::move(value_.i);
  }

  double move_d() {
    assert(type_ == Type::d);
    return std::move(value_.d);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< union1 >;
};

void swap(union1& a, union1& b);

template <class Protocol_>
uint32_t union1::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class union2 final : private apache::thrift::detail::st::ComparisonOperators<union2> {
 public:
  enum Type {
    __EMPTY__ = 0,
    i = 1,
    d = 2,
    s = 3,
    u = 4,
  } ;

  union2()
      : type_(Type::__EMPTY__) {}

  union2(union2&& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d:
      {
        set_d(std::move(rhs.value_.d));
        break;
      }
      case Type::s:
      {
        set_s(std::move(rhs.value_.s));
        break;
      }
      case Type::u:
      {
        set_u(std::move(rhs.value_.u));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  union2(const union2& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d:
      {
        set_d(rhs.value_.d);
        break;
      }
      case Type::s:
      {
        set_s(rhs.value_.s);
        break;
      }
      case Type::u:
      {
        set_u(rhs.value_.u);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  union2& operator=(union2&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d:
      {
        set_d(std::move(rhs.value_.d));
        break;
      }
      case Type::s:
      {
        set_s(std::move(rhs.value_.s));
        break;
      }
      case Type::u:
      {
        set_u(std::move(rhs.value_.u));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  union2& operator=(const union2& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d:
      {
        set_d(rhs.value_.d);
        break;
      }
      case Type::s:
      {
        set_s(rhs.value_.s);
        break;
      }
      case Type::u:
      {
        set_u(rhs.value_.u);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~union2() {
    __clear();
  }
  union storage_type {
    int32_t i;
    double d;
     ::cpp2::struct1 s;
     ::cpp2::union1 u;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const union2& rhs) const;
  bool operator<(const union2& rhs) const;

  int32_t& set_i(int32_t t = int32_t()) {
    __clear();
    type_ = Type::i;
    ::new (std::addressof(value_.i)) int32_t(t);
    return value_.i;
  }

  double& set_d(double t = double()) {
    __clear();
    type_ = Type::d;
    ::new (std::addressof(value_.d)) double(t);
    return value_.d;
  }

   ::cpp2::struct1& set_s( ::cpp2::struct1 const &t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s))  ::cpp2::struct1(t);
    return value_.s;
  }

   ::cpp2::struct1& set_s( ::cpp2::struct1&& t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s))  ::cpp2::struct1(std::move(t));
    return value_.s;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t< ::cpp2::struct1, T...>>  ::cpp2::struct1& set_s(T&&... t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s))  ::cpp2::struct1(std::forward<T>(t)...);
    return value_.s;
  }

   ::cpp2::union1& set_u( ::cpp2::union1 const &t) {
    __clear();
    type_ = Type::u;
    ::new (std::addressof(value_.u))  ::cpp2::union1(t);
    return value_.u;
  }

   ::cpp2::union1& set_u( ::cpp2::union1&& t) {
    __clear();
    type_ = Type::u;
    ::new (std::addressof(value_.u))  ::cpp2::union1(std::move(t));
    return value_.u;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t< ::cpp2::union1, T...>>  ::cpp2::union1& set_u(T&&... t) {
    __clear();
    type_ = Type::u;
    ::new (std::addressof(value_.u))  ::cpp2::union1(std::forward<T>(t)...);
    return value_.u;
  }

  int32_t const & get_i() const {
    assert(type_ == Type::i);
    return value_.i;
  }

  double const & get_d() const {
    assert(type_ == Type::d);
    return value_.d;
  }

   ::cpp2::struct1 const & get_s() const {
    assert(type_ == Type::s);
    return value_.s;
  }

   ::cpp2::union1 const & get_u() const {
    assert(type_ == Type::u);
    return value_.u;
  }

  int32_t & mutable_i() {
    assert(type_ == Type::i);
    return value_.i;
  }

  double & mutable_d() {
    assert(type_ == Type::d);
    return value_.d;
  }

   ::cpp2::struct1 & mutable_s() {
    assert(type_ == Type::s);
    return value_.s;
  }

   ::cpp2::union1 & mutable_u() {
    assert(type_ == Type::u);
    return value_.u;
  }

  int32_t move_i() {
    assert(type_ == Type::i);
    return std::move(value_.i);
  }

  double move_d() {
    assert(type_ == Type::d);
    return std::move(value_.d);
  }

   ::cpp2::struct1 move_s() {
    assert(type_ == Type::s);
    return std::move(value_.s);
  }

   ::cpp2::union1 move_u() {
    assert(type_ == Type::u);
    return std::move(value_.u);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< union2 >;
};

void swap(union2& a, union2& b);

template <class Protocol_>
uint32_t union2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
