// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Address.proto

#include "Address.pb.h"

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
class AddressDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Address>
      _instance;
} _Address_default_instance_;
namespace protobuf_Address_2eproto {
void InitDefaultsAddressImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Address_default_instance_;
    new (ptr) ::Address();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Address::InitAsDefaultInstance();
}

void InitDefaultsAddress() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsAddressImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, blockchain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Address, sighash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Address)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Address_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Address.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\rAddress.proto\"\?\n\007Address\022\022\n\nblockchain"
      "\030\001 \001(\t\022\017\n\007address\030\002 \001(\t\022\017\n\007sighash\030\003 \001(\t"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 88);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Address.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Address_2eproto

// ===================================================================

void Address::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Address::kBlockchainFieldNumber;
const int Address::kAddressFieldNumber;
const int Address::kSighashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Address::Address()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Address_2eproto::InitDefaultsAddress();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Address)
}
Address::Address(const Address& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.blockchain().size() > 0) {
    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.address().size() > 0) {
    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  // @@protoc_insertion_point(copy_constructor:Address)
}

void Address::SharedCtor() {
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Address::~Address() {
  // @@protoc_insertion_point(destructor:Address)
  SharedDtor();
}

void Address::SharedDtor() {
  blockchain_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Address::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Address::descriptor() {
  ::protobuf_Address_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Address_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Address& Address::default_instance() {
  ::protobuf_Address_2eproto::InitDefaultsAddress();
  return *internal_default_instance();
}

Address* Address::New(::google::protobuf::Arena* arena) const {
  Address* n = new Address;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Address::Clear() {
// @@protoc_insertion_point(message_clear_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Address::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Address)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string blockchain = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_blockchain()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->blockchain().data(), static_cast<int>(this->blockchain().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Address.blockchain"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string address = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->address().data(), static_cast<int>(this->address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Address.address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sighash = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Address.sighash"));
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
  // @@protoc_insertion_point(parse_success:Address)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Address)
  return false;
#undef DO_
}

void Address::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.blockchain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->blockchain(), output);
  }

  // string address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->address(), output);
  }

  // string sighash = 3;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->sighash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Address)
}

::google::protobuf::uint8* Address::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Address)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.blockchain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->blockchain(), target);
  }

  // string address = 2;
  if (this->address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->address().data(), static_cast<int>(this->address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->address(), target);
  }

  // string sighash = 3;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Address.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->sighash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Address)
  return target;
}

size_t Address::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Address)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->blockchain());
  }

  // string address = 2;
  if (this->address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->address());
  }

  // string sighash = 3;
  if (this->sighash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sighash());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Address::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Address)
  GOOGLE_DCHECK_NE(&from, this);
  const Address* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Address>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Address)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Address)
    MergeFrom(*source);
  }
}

void Address::MergeFrom(const Address& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Address)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.blockchain().size() > 0) {

    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  if (from.address().size() > 0) {

    address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.address_);
  }
  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
}

void Address::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Address::CopyFrom(const Address& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Address::IsInitialized() const {
  return true;
}

void Address::Swap(Address* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Address::InternalSwap(Address* other) {
  using std::swap;
  blockchain_.Swap(&other->blockchain_);
  address_.Swap(&other->address_);
  sighash_.Swap(&other->sighash_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Address::GetMetadata() const {
  protobuf_Address_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Address_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)