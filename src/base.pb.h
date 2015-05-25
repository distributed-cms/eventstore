// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base.proto

#ifndef PROTOBUF_base_2eproto__INCLUDED
#define PROTOBUF_base_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace common {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_base_2eproto();
void protobuf_AssignDesc_base_2eproto();
void protobuf_ShutdownFile_base_2eproto();

class Uuid;
class Event;

enum Format {
  HTML = 0,
  MD = 1,
  RST = 2,
  SRC = 3,
  IMG = 4,
  GIST = 5,
  Format_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Format_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Format_IsValid(int value);
const Format Format_MIN = HTML;
const Format Format_MAX = GIST;
const int Format_ARRAYSIZE = Format_MAX + 1;

const ::google::protobuf::EnumDescriptor* Format_descriptor();
inline const ::std::string& Format_Name(Format value) {
  return ::google::protobuf::internal::NameOfEnum(
    Format_descriptor(), value);
}
inline bool Format_Parse(
    const ::std::string& name, Format* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Format>(
    Format_descriptor(), name, value);
}
enum Level {
  DEBUG = 0,
  INFO = 1,
  WARN = 2,
  ERROR = 3,
  Level_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Level_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Level_IsValid(int value);
const Level Level_MIN = DEBUG;
const Level Level_MAX = ERROR;
const int Level_ARRAYSIZE = Level_MAX + 1;

const ::google::protobuf::EnumDescriptor* Level_descriptor();
inline const ::std::string& Level_Name(Level value) {
  return ::google::protobuf::internal::NameOfEnum(
    Level_descriptor(), value);
}
inline bool Level_Parse(
    const ::std::string& name, Level* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Level>(
    Level_descriptor(), name, value);
}
// ===================================================================

class Uuid : public ::google::protobuf::Message {
 public:
  Uuid();
  virtual ~Uuid();

  Uuid(const Uuid& from);

  inline Uuid& operator=(const Uuid& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Uuid& default_instance();

  void UnsafeArenaSwap(Uuid* other);
  void Swap(Uuid* other);

  // implements Message ----------------------------------------------

  inline Uuid* New() const { return New(NULL); }

  Uuid* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Uuid& from);
  void MergeFrom(const Uuid& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Uuid* other);
  protected:
  explicit Uuid(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sint64 least_significant_bits = 1;
  inline void clear_least_significant_bits();
  static const int kLeastSignificantBitsFieldNumber = 1;
  inline ::google::protobuf::int64 least_significant_bits() const;
  inline void set_least_significant_bits(::google::protobuf::int64 value);

  // optional sint64 most_significant_bits = 2;
  inline void clear_most_significant_bits();
  static const int kMostSignificantBitsFieldNumber = 2;
  inline ::google::protobuf::int64 most_significant_bits() const;
  inline void set_most_significant_bits(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:common.Uuid)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::int64 least_significant_bits_;
  ::google::protobuf::int64 most_significant_bits_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_base_2eproto();
  friend void protobuf_AssignDesc_base_2eproto();
  friend void protobuf_ShutdownFile_base_2eproto();

  void InitAsDefaultInstance();
  static Uuid* default_instance_;
};
// -------------------------------------------------------------------

class Event : public ::google::protobuf::Message {
 public:
  Event();
  virtual ~Event();

  Event(const Event& from);

  inline Event& operator=(const Event& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Event& default_instance();

  void UnsafeArenaSwap(Event* other);
  void Swap(Event* other);

  // implements Message ----------------------------------------------

  inline Event* New() const { return New(NULL); }

  Event* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Event& from);
  void MergeFrom(const Event& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Event* other);
  protected:
  explicit Event(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .common.Uuid aggregate_id = 1;
  inline bool has_aggregate_id() const;
  inline void clear_aggregate_id();
  static const int kAggregateIdFieldNumber = 1;
  inline const ::common::Uuid& aggregate_id() const;
  inline ::common::Uuid* mutable_aggregate_id();
  inline ::common::Uuid* release_aggregate_id();
  inline void set_allocated_aggregate_id(::common::Uuid* aggregate_id);
  inline ::common::Uuid* unsafe_arena_release_aggregate_id();
  inline void unsafe_arena_set_allocated_aggregate_id(
      ::common::Uuid* aggregate_id);

  // optional string serialized_data = 2;
  inline void clear_serialized_data();
  static const int kSerializedDataFieldNumber = 2;
  inline const ::std::string& serialized_data() const;
  inline void set_serialized_data(const ::std::string& value);
  inline void set_serialized_data(const char* value);
  inline void set_serialized_data(const char* value, size_t size);
  inline ::std::string* mutable_serialized_data();
  inline ::std::string* release_serialized_data();
  inline void set_allocated_serialized_data(::std::string* serialized_data);
  inline ::std::string* unsafe_arena_release_serialized_data();
  inline void unsafe_arena_set_allocated_serialized_data(
      ::std::string* serialized_data);

  // @@protoc_insertion_point(class_scope:common.Event)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::common::Uuid* aggregate_id_;
  ::google::protobuf::internal::ArenaStringPtr serialized_data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_base_2eproto();
  friend void protobuf_AssignDesc_base_2eproto();
  friend void protobuf_ShutdownFile_base_2eproto();

  void InitAsDefaultInstance();
  static Event* default_instance_;
};
// ===================================================================


// ===================================================================

// Uuid

// optional sint64 least_significant_bits = 1;
inline void Uuid::clear_least_significant_bits() {
  least_significant_bits_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Uuid::least_significant_bits() const {
  // @@protoc_insertion_point(field_get:common.Uuid.least_significant_bits)
  return least_significant_bits_;
}
inline void Uuid::set_least_significant_bits(::google::protobuf::int64 value) {
  
  least_significant_bits_ = value;
  // @@protoc_insertion_point(field_set:common.Uuid.least_significant_bits)
}

// optional sint64 most_significant_bits = 2;
inline void Uuid::clear_most_significant_bits() {
  most_significant_bits_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 Uuid::most_significant_bits() const {
  // @@protoc_insertion_point(field_get:common.Uuid.most_significant_bits)
  return most_significant_bits_;
}
inline void Uuid::set_most_significant_bits(::google::protobuf::int64 value) {
  
  most_significant_bits_ = value;
  // @@protoc_insertion_point(field_set:common.Uuid.most_significant_bits)
}

// -------------------------------------------------------------------

// Event

// optional .common.Uuid aggregate_id = 1;
inline bool Event::has_aggregate_id() const {
  return !_is_default_instance_ && aggregate_id_ != NULL;
}
inline void Event::clear_aggregate_id() {
  if (aggregate_id_ != NULL) delete aggregate_id_;
  aggregate_id_ = NULL;
}
inline const ::common::Uuid& Event::aggregate_id() const {
  // @@protoc_insertion_point(field_get:common.Event.aggregate_id)
  return aggregate_id_ != NULL ? *aggregate_id_ : *default_instance_->aggregate_id_;
}
inline ::common::Uuid* Event::mutable_aggregate_id() {
  
  if (aggregate_id_ == NULL) {
    aggregate_id_ = ::google::protobuf::Arena::CreateMessage< ::common::Uuid >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:common.Event.aggregate_id)
  return aggregate_id_;
}
inline ::common::Uuid* Event::release_aggregate_id() {
  
  if (GetArenaNoVirtual() != NULL) {
    if (aggregate_id_ == NULL) {
      return NULL;
    } else {
      ::common::Uuid* temp = new ::common::Uuid;
      temp->MergeFrom(*aggregate_id_);
      aggregate_id_ = NULL;
      return temp;
    }
  } else {
    ::common::Uuid* temp = aggregate_id_;
    aggregate_id_ = NULL;
    return temp;
  }
}
inline ::common::Uuid* Event::unsafe_arena_release_aggregate_id() {
  
  ::common::Uuid* temp = aggregate_id_;
  aggregate_id_ = NULL;
  return temp;
}
inline void Event::set_allocated_aggregate_id(::common::Uuid* aggregate_id) {
  if (GetArenaNoVirtual() == NULL) {
    delete aggregate_id_;
  }
  if (aggregate_id != NULL) {
    if (GetArenaNoVirtual() != NULL && 
        ::google::protobuf::Arena::GetArena(aggregate_id) == NULL) {
      GetArenaNoVirtual()->Own(aggregate_id);
    } else if (GetArenaNoVirtual() !=
               ::google::protobuf::Arena::GetArena(aggregate_id)) {
      ::common::Uuid* new_aggregate_id = 
            ::google::protobuf::Arena::CreateMessage< ::common::Uuid >(
            GetArenaNoVirtual());
      new_aggregate_id->CopyFrom(*aggregate_id);
      aggregate_id = new_aggregate_id;
    }
  }
  aggregate_id_ = aggregate_id;
  if (aggregate_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:common.Event.aggregate_id)
}
inline void Event::unsafe_arena_set_allocated_aggregate_id(
    ::common::Uuid* aggregate_id) {
  if (GetArenaNoVirtual() == NULL) {
    delete aggregate_id_;
  }
  aggregate_id_ = aggregate_id;
  if (aggregate_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:common.Event.aggregate_id)
}

// optional string serialized_data = 2;
inline void Event::clear_serialized_data() {
  serialized_data_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& Event::serialized_data() const {
  // @@protoc_insertion_point(field_get:common.Event.serialized_data)
  return serialized_data_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Event::set_serialized_data(const ::std::string& value) {
  
  serialized_data_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:common.Event.serialized_data)
}
inline void Event::set_serialized_data(const char* value) {
  
  serialized_data_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:common.Event.serialized_data)
}
inline void Event::set_serialized_data(const char* value,
    size_t size) {
  
  serialized_data_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:common.Event.serialized_data)
}
inline ::std::string* Event::mutable_serialized_data() {
  
  // @@protoc_insertion_point(field_mutable:common.Event.serialized_data)
  return serialized_data_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Event::release_serialized_data() {
  
  return serialized_data_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* Event::unsafe_arena_release_serialized_data() {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return serialized_data_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void Event::set_allocated_serialized_data(::std::string* serialized_data) {
  if (serialized_data != NULL) {
    
  } else {
    
  }
  serialized_data_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serialized_data,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:common.Event.serialized_data)
}
inline void Event::unsafe_arena_set_allocated_serialized_data(
    ::std::string* serialized_data) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (serialized_data != NULL) {
    
  } else {
    
  }
  
  serialized_data_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      serialized_data, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:common.Event.serialized_data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace common

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::common::Format> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::common::Format>() {
  return ::common::Format_descriptor();
}
template <> struct is_proto_enum< ::common::Level> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::common::Level>() {
  return ::common::Level_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2eproto__INCLUDED