// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Fee.proto

#include "Fee.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class FeeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Fee>
      _instance;
} _Fee_default_instance_;
namespace protobuf_Fee_2eproto {
void InitDefaultsFeeImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Fee_default_instance_;
    new (ptr) ::Fee();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Fee::InitAsDefaultInstance();
}

void InitDefaultsFee() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsFeeImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Fee, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Fee, sighash_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Fee, block_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Fee)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Fee_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Fee.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tFee.proto\"%\n\003Fee\022\017\n\007sighash\030\001 \001(\t\022\r\n\005b"
      "lock\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 58);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Fee.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Fee_2eproto

// ===================================================================

void Fee::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Fee::kSighashFieldNumber;
const int Fee::kBlockFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Fee::Fee()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Fee_2eproto::InitDefaultsFee();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Fee)
}
Fee::Fee(const Fee& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.block().size() > 0) {
    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  // @@protoc_insertion_point(copy_constructor:Fee)
}

void Fee::SharedCtor() {
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Fee::~Fee() {
  // @@protoc_insertion_point(destructor:Fee)
  SharedDtor();
}

void Fee::SharedDtor() {
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Fee::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Fee::descriptor() {
  ::protobuf_Fee_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Fee_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Fee& Fee::default_instance() {
  ::protobuf_Fee_2eproto::InitDefaultsFee();
  return *internal_default_instance();
}

Fee* Fee::New(::google::protobuf::Arena* arena) const {
  Fee* n = new Fee;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Fee::Clear() {
// @@protoc_insertion_point(message_clear_start:Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Fee::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Fee)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string sighash = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Fee.sighash"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string block = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_block()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->block().data(), static_cast<int>(this->block().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Fee.block"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Fee)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Fee)
  return false;
#undef DO_
}

void Fee::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string sighash = 1;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Fee.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->sighash(), output);
  }

  // string block = 2;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Fee.block");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->block(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Fee)
}

::google::protobuf::uint8* Fee::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Fee)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string sighash = 1;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Fee.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->sighash(), target);
  }

  // string block = 2;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Fee.block");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->block(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Fee)
  return target;
}

size_t Fee::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Fee)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string sighash = 1;
  if (this->sighash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sighash());
  }

  // string block = 2;
  if (this->block().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->block());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Fee::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Fee)
  GOOGLE_DCHECK_NE(&from, this);
  const Fee* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Fee>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Fee)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Fee)
    MergeFrom(*source);
  }
}

void Fee::MergeFrom(const Fee& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Fee)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  if (from.block().size() > 0) {

    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
}

void Fee::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Fee)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fee::CopyFrom(const Fee& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Fee)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fee::IsInitialized() const {
  return true;
}

void Fee::Swap(Fee* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Fee::InternalSwap(Fee* other) {
  using std::swap;
  sighash_.Swap(&other->sighash_);
  block_.Swap(&other->block_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Fee::GetMetadata() const {
  protobuf_Fee_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Fee_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
