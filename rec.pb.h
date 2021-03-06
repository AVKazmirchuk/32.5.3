// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rec.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rec_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rec_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rec_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rec_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rec_2eproto;
class Rec;
struct RecDefaultTypeInternal;
extern RecDefaultTypeInternal _Rec_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Rec* Arena::CreateMaybeMessage<::Rec>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Rec final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Rec) */ {
 public:
  inline Rec() : Rec(nullptr) {}
  ~Rec() override;
  explicit constexpr Rec(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Rec(const Rec& from);
  Rec(Rec&& from) noexcept
    : Rec() {
    *this = ::std::move(from);
  }

  inline Rec& operator=(const Rec& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rec& operator=(Rec&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Rec& default_instance() {
    return *internal_default_instance();
  }
  static inline const Rec* internal_default_instance() {
    return reinterpret_cast<const Rec*>(
               &_Rec_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Rec& a, Rec& b) {
    a.Swap(&b);
  }
  inline void Swap(Rec* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Rec* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rec* New() const final {
    return new Rec();
  }

  Rec* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rec>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Rec& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Rec& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rec* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Rec";
  }
  protected:
  explicit Rec(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kTitleFieldNumber = 3,
    kTypeOfActivityFieldNumber = 4,
    kYearOfFoundationFieldNumber = 1,
    kForeignEconomicFieldNumber = 5,
  };
  // required string legalAddress = 2;
  bool has_legaladdress() const;
  private:
  bool _internal_has_legaladdress() const;
  public:
  void clear_legaladdress();
  const std::string& legaladdress() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_legaladdress(ArgT0&& arg0, ArgT... args);
  std::string* mutable_legaladdress();
  PROTOBUF_MUST_USE_RESULT std::string* release_legaladdress();
  void set_allocated_legaladdress(std::string* legaladdress);
  private:
  const std::string& _internal_legaladdress() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legaladdress(const std::string& value);
  std::string* _internal_mutable_legaladdress();
  public:

  // required string title = 3;
  bool has_title() const;
  private:
  bool _internal_has_title() const;
  public:
  void clear_title();
  const std::string& title() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_title(ArgT0&& arg0, ArgT... args);
  std::string* mutable_title();
  PROTOBUF_MUST_USE_RESULT std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // optional string typeOfActivity = 4;
  bool has_typeofactivity() const;
  private:
  bool _internal_has_typeofactivity() const;
  public:
  void clear_typeofactivity();
  const std::string& typeofactivity() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_typeofactivity(ArgT0&& arg0, ArgT... args);
  std::string* mutable_typeofactivity();
  PROTOBUF_MUST_USE_RESULT std::string* release_typeofactivity();
  void set_allocated_typeofactivity(std::string* typeofactivity);
  private:
  const std::string& _internal_typeofactivity() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_typeofactivity(const std::string& value);
  std::string* _internal_mutable_typeofactivity();
  public:

  // required int32 yearOfFoundation = 1;
  bool has_yearoffoundation() const;
  private:
  bool _internal_has_yearoffoundation() const;
  public:
  void clear_yearoffoundation();
  ::PROTOBUF_NAMESPACE_ID::int32 yearoffoundation() const;
  void set_yearoffoundation(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_yearoffoundation() const;
  void _internal_set_yearoffoundation(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool foreignEconomic = 5;
  bool has_foreigneconomic() const;
  private:
  bool _internal_has_foreigneconomic() const;
  public:
  void clear_foreigneconomic();
  bool foreigneconomic() const;
  void set_foreigneconomic(bool value);
  private:
  bool _internal_foreigneconomic() const;
  void _internal_set_foreigneconomic(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Rec)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr legaladdress_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr typeofactivity_;
  ::PROTOBUF_NAMESPACE_ID::int32 yearoffoundation_;
  bool foreigneconomic_;
  friend struct ::TableStruct_rec_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rec

// required int32 yearOfFoundation = 1;
inline bool Rec::_internal_has_yearoffoundation() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Rec::has_yearoffoundation() const {
  return _internal_has_yearoffoundation();
}
inline void Rec::clear_yearoffoundation() {
  yearoffoundation_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rec::_internal_yearoffoundation() const {
  return yearoffoundation_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rec::yearoffoundation() const {
  // @@protoc_insertion_point(field_get:Rec.yearOfFoundation)
  return _internal_yearoffoundation();
}
inline void Rec::_internal_set_yearoffoundation(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  yearoffoundation_ = value;
}
inline void Rec::set_yearoffoundation(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_yearoffoundation(value);
  // @@protoc_insertion_point(field_set:Rec.yearOfFoundation)
}

// required string legalAddress = 2;
inline bool Rec::_internal_has_legaladdress() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Rec::has_legaladdress() const {
  return _internal_has_legaladdress();
}
inline void Rec::clear_legaladdress() {
  legaladdress_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Rec::legaladdress() const {
  // @@protoc_insertion_point(field_get:Rec.legalAddress)
  return _internal_legaladdress();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Rec::set_legaladdress(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 legaladdress_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Rec.legalAddress)
}
inline std::string* Rec::mutable_legaladdress() {
  std::string* _s = _internal_mutable_legaladdress();
  // @@protoc_insertion_point(field_mutable:Rec.legalAddress)
  return _s;
}
inline const std::string& Rec::_internal_legaladdress() const {
  return legaladdress_.Get();
}
inline void Rec::_internal_set_legaladdress(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  legaladdress_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Rec::_internal_mutable_legaladdress() {
  _has_bits_[0] |= 0x00000001u;
  return legaladdress_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Rec::release_legaladdress() {
  // @@protoc_insertion_point(field_release:Rec.legalAddress)
  if (!_internal_has_legaladdress()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return legaladdress_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Rec::set_allocated_legaladdress(std::string* legaladdress) {
  if (legaladdress != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  legaladdress_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), legaladdress,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Rec.legalAddress)
}

// required string title = 3;
inline bool Rec::_internal_has_title() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Rec::has_title() const {
  return _internal_has_title();
}
inline void Rec::clear_title() {
  title_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Rec::title() const {
  // @@protoc_insertion_point(field_get:Rec.title)
  return _internal_title();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Rec::set_title(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 title_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Rec.title)
}
inline std::string* Rec::mutable_title() {
  std::string* _s = _internal_mutable_title();
  // @@protoc_insertion_point(field_mutable:Rec.title)
  return _s;
}
inline const std::string& Rec::_internal_title() const {
  return title_.Get();
}
inline void Rec::_internal_set_title(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  title_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Rec::_internal_mutable_title() {
  _has_bits_[0] |= 0x00000002u;
  return title_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Rec::release_title() {
  // @@protoc_insertion_point(field_release:Rec.title)
  if (!_internal_has_title()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return title_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Rec::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  title_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), title,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Rec.title)
}

// optional string typeOfActivity = 4;
inline bool Rec::_internal_has_typeofactivity() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Rec::has_typeofactivity() const {
  return _internal_has_typeofactivity();
}
inline void Rec::clear_typeofactivity() {
  typeofactivity_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Rec::typeofactivity() const {
  // @@protoc_insertion_point(field_get:Rec.typeOfActivity)
  return _internal_typeofactivity();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Rec::set_typeofactivity(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 typeofactivity_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Rec.typeOfActivity)
}
inline std::string* Rec::mutable_typeofactivity() {
  std::string* _s = _internal_mutable_typeofactivity();
  // @@protoc_insertion_point(field_mutable:Rec.typeOfActivity)
  return _s;
}
inline const std::string& Rec::_internal_typeofactivity() const {
  return typeofactivity_.Get();
}
inline void Rec::_internal_set_typeofactivity(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  typeofactivity_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Rec::_internal_mutable_typeofactivity() {
  _has_bits_[0] |= 0x00000004u;
  return typeofactivity_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Rec::release_typeofactivity() {
  // @@protoc_insertion_point(field_release:Rec.typeOfActivity)
  if (!_internal_has_typeofactivity()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return typeofactivity_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Rec::set_allocated_typeofactivity(std::string* typeofactivity) {
  if (typeofactivity != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  typeofactivity_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), typeofactivity,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Rec.typeOfActivity)
}

// optional bool foreignEconomic = 5;
inline bool Rec::_internal_has_foreigneconomic() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Rec::has_foreigneconomic() const {
  return _internal_has_foreigneconomic();
}
inline void Rec::clear_foreigneconomic() {
  foreigneconomic_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Rec::_internal_foreigneconomic() const {
  return foreigneconomic_;
}
inline bool Rec::foreigneconomic() const {
  // @@protoc_insertion_point(field_get:Rec.foreignEconomic)
  return _internal_foreigneconomic();
}
inline void Rec::_internal_set_foreigneconomic(bool value) {
  _has_bits_[0] |= 0x00000010u;
  foreigneconomic_ = value;
}
inline void Rec::set_foreigneconomic(bool value) {
  _internal_set_foreigneconomic(value);
  // @@protoc_insertion_point(field_set:Rec.foreignEconomic)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rec_2eproto
