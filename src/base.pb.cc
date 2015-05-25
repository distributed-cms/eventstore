// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "base.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace common {

namespace {

const ::google::protobuf::Descriptor* Uuid_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Uuid_reflection_ = NULL;
const ::google::protobuf::Descriptor* Event_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Event_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Format_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Level_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_base_2eproto() {
  protobuf_AddDesc_base_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "base.proto");
  GOOGLE_CHECK(file != NULL);
  Uuid_descriptor_ = file->message_type(0);
  static const int Uuid_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Uuid, least_significant_bits_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Uuid, most_significant_bits_),
  };
  Uuid_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Uuid_descriptor_,
      Uuid::default_instance_,
      Uuid_offsets_,
      -1,
      -1,
      -1,
      sizeof(Uuid),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Uuid, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Uuid, _is_default_instance_));
  Event_descriptor_ = file->message_type(1);
  static const int Event_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, aggregate_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, serialized_data_),
  };
  Event_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Event_descriptor_,
      Event::default_instance_,
      Event_offsets_,
      -1,
      -1,
      -1,
      sizeof(Event),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event, _is_default_instance_));
  Format_descriptor_ = file->enum_type(0);
  Level_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_base_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Uuid_descriptor_, &Uuid::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Event_descriptor_, &Event::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_base_2eproto() {
  delete Uuid::default_instance_;
  delete Uuid_reflection_;
  delete Event::default_instance_;
  delete Event_reflection_;
}

void protobuf_AddDesc_base_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nbase.proto\022\006common\"E\n\004Uuid\022\036\n\026least_si"
    "gnificant_bits\030\001 \001(\022\022\035\n\025most_significant"
    "_bits\030\002 \001(\022\"D\n\005Event\022\"\n\014aggregate_id\030\001 \001"
    "(\0132\014.common.Uuid\022\027\n\017serialized_data\030\002 \001("
    "\t*\?\n\006Format\022\010\n\004HTML\020\000\022\006\n\002MD\020\001\022\007\n\003RST\020\002\022\007"
    "\n\003SRC\020\003\022\007\n\003IMG\020\004\022\010\n\004GIST\020\005*1\n\005Level\022\t\n\005D"
    "EBUG\020\000\022\010\n\004INFO\020\001\022\010\n\004WARN\020\002\022\t\n\005ERROR\020\003B\003\370"
    "\001\001b\006proto3", 290);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "base.proto", &protobuf_RegisterTypes);
  Uuid::default_instance_ = new Uuid();
  Event::default_instance_ = new Event();
  Uuid::default_instance_->InitAsDefaultInstance();
  Event::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_base_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_base_2eproto {
  StaticDescriptorInitializer_base_2eproto() {
    protobuf_AddDesc_base_2eproto();
  }
} static_descriptor_initializer_base_2eproto_;
const ::google::protobuf::EnumDescriptor* Format_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Format_descriptor_;
}
bool Format_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Level_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Level_descriptor_;
}
bool Level_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Uuid::kLeastSignificantBitsFieldNumber;
const int Uuid::kMostSignificantBitsFieldNumber;
#endif  // !_MSC_VER

Uuid::Uuid()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.Uuid)
}

Uuid::Uuid(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:common.Uuid)
}

void Uuid::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Uuid::Uuid(const Uuid& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:common.Uuid)
}

void Uuid::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  least_significant_bits_ = GOOGLE_LONGLONG(0);
  most_significant_bits_ = GOOGLE_LONGLONG(0);
}

Uuid::~Uuid() {
  // @@protoc_insertion_point(destructor:common.Uuid)
  SharedDtor();
}

void Uuid::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void Uuid::ArenaDtor(void* object) {
  Uuid* _this = reinterpret_cast< Uuid* >(object);
  (void)_this;
}
void Uuid::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Uuid::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Uuid::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Uuid_descriptor_;
}

const Uuid& Uuid::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_base_2eproto();
  return *default_instance_;
}

Uuid* Uuid::default_instance_ = NULL;

Uuid* Uuid::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Uuid>(arena);
}

void Uuid::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Uuid*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(least_significant_bits_, most_significant_bits_);

#undef OFFSET_OF_FIELD_
#undef ZR_

}

bool Uuid::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.Uuid)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint64 least_significant_bits = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &least_significant_bits_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_most_significant_bits;
        break;
      }

      // optional sint64 most_significant_bits = 2;
      case 2: {
        if (tag == 16) {
         parse_most_significant_bits:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &most_significant_bits_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.Uuid)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.Uuid)
  return false;
#undef DO_
}

void Uuid::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.Uuid)
  // optional sint64 least_significant_bits = 1;
  if (this->least_significant_bits() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(1, this->least_significant_bits(), output);
  }

  // optional sint64 most_significant_bits = 2;
  if (this->most_significant_bits() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(2, this->most_significant_bits(), output);
  }

  // @@protoc_insertion_point(serialize_end:common.Uuid)
}

::google::protobuf::uint8* Uuid::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.Uuid)
  // optional sint64 least_significant_bits = 1;
  if (this->least_significant_bits() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(1, this->least_significant_bits(), target);
  }

  // optional sint64 most_significant_bits = 2;
  if (this->most_significant_bits() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(2, this->most_significant_bits(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:common.Uuid)
  return target;
}

int Uuid::ByteSize() const {
  int total_size = 0;

  // optional sint64 least_significant_bits = 1;
  if (this->least_significant_bits() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::SInt64Size(
        this->least_significant_bits());
  }

  // optional sint64 most_significant_bits = 2;
  if (this->most_significant_bits() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::SInt64Size(
        this->most_significant_bits());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Uuid::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Uuid* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Uuid*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Uuid::MergeFrom(const Uuid& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.least_significant_bits() != 0) {
    set_least_significant_bits(from.least_significant_bits());
  }
  if (from.most_significant_bits() != 0) {
    set_most_significant_bits(from.most_significant_bits());
  }
}

void Uuid::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Uuid::CopyFrom(const Uuid& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Uuid::IsInitialized() const {

  return true;
}

void Uuid::Swap(Uuid* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Uuid temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Uuid::UnsafeArenaSwap(Uuid* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Uuid::InternalSwap(Uuid* other) {
  std::swap(least_significant_bits_, other->least_significant_bits_);
  std::swap(most_significant_bits_, other->most_significant_bits_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Uuid::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Uuid_descriptor_;
  metadata.reflection = Uuid_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Event::kAggregateIdFieldNumber;
const int Event::kSerializedDataFieldNumber;
#endif  // !_MSC_VER

Event::Event()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:common.Event)
}

Event::Event(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:common.Event)
}

void Event::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  aggregate_id_ = const_cast< ::common::Uuid*>(&::common::Uuid::default_instance());
}

Event::Event(const Event& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:common.Event)
}

void Event::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  aggregate_id_ = NULL;
  serialized_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Event::~Event() {
  // @@protoc_insertion_point(destructor:common.Event)
  SharedDtor();
}

void Event::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  serialized_data_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (this != default_instance_) {
    delete aggregate_id_;
  }
}

void Event::ArenaDtor(void* object) {
  Event* _this = reinterpret_cast< Event* >(object);
  (void)_this;
}
void Event::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Event::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_descriptor_;
}

const Event& Event::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_base_2eproto();
  return *default_instance_;
}

Event* Event::default_instance_ = NULL;

Event* Event::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Event>(arena);
}

void Event::Clear() {
  if (aggregate_id_ != NULL) delete aggregate_id_;
  aggregate_id_ = NULL;
  serialized_data_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool Event::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:common.Event)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .common.Uuid aggregate_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_aggregate_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_serialized_data;
        break;
      }

      // optional string serialized_data = 2;
      case 2: {
        if (tag == 18) {
         parse_serialized_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serialized_data()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->serialized_data().data(), this->serialized_data().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "common.Event.serialized_data");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:common.Event)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:common.Event)
  return false;
#undef DO_
}

void Event::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:common.Event)
  // optional .common.Uuid aggregate_id = 1;
  if (this->has_aggregate_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->aggregate_id_, output);
  }

  // optional string serialized_data = 2;
  if (this->serialized_data().size() > 0) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serialized_data().data(), this->serialized_data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "common.Event.serialized_data");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->serialized_data(), output);
  }

  // @@protoc_insertion_point(serialize_end:common.Event)
}

::google::protobuf::uint8* Event::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:common.Event)
  // optional .common.Uuid aggregate_id = 1;
  if (this->has_aggregate_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, *this->aggregate_id_, target);
  }

  // optional string serialized_data = 2;
  if (this->serialized_data().size() > 0) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serialized_data().data(), this->serialized_data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "common.Event.serialized_data");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->serialized_data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:common.Event)
  return target;
}

int Event::ByteSize() const {
  int total_size = 0;

  // optional .common.Uuid aggregate_id = 1;
  if (this->has_aggregate_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->aggregate_id_);
  }

  // optional string serialized_data = 2;
  if (this->serialized_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->serialized_data());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Event* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Event*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Event::MergeFrom(const Event& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.has_aggregate_id()) {
    mutable_aggregate_id()->::common::Uuid::MergeFrom(from.aggregate_id());
  }
  if (from.serialized_data().size() > 0) {
    set_serialized_data(from.serialized_data());
  }
}

void Event::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event::CopyFrom(const Event& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event::IsInitialized() const {

  return true;
}

void Event::Swap(Event* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Event temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Event::UnsafeArenaSwap(Event* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Event::InternalSwap(Event* other) {
  std::swap(aggregate_id_, other->aggregate_id_);
  serialized_data_.Swap(&other->serialized_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Event_descriptor_;
  metadata.reflection = Event_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace common

// @@protoc_insertion_point(global_scope)
