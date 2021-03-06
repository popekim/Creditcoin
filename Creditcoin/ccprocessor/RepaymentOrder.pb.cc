// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RepaymentOrder.proto

#include "RepaymentOrder.pb.h"

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
class RepaymentOrderDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RepaymentOrder>
      _instance;
} _RepaymentOrder_default_instance_;
namespace protobuf_RepaymentOrder_2eproto {
void InitDefaultsRepaymentOrderImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_RepaymentOrder_default_instance_;
    new (ptr) ::RepaymentOrder();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RepaymentOrder::InitAsDefaultInstance();
}

void InitDefaultsRepaymentOrder() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRepaymentOrderImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, blockchain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, src_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, dst_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, expiration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, block_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, deal_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, previous_owner_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, transfer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RepaymentOrder, sighash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::RepaymentOrder)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_RepaymentOrder_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "RepaymentOrder.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\024RepaymentOrder.proto\"\312\001\n\016RepaymentOrde"
      "r\022\022\n\nblockchain\030\001 \001(\t\022\023\n\013src_address\030\002 \001"
      "(\t\022\023\n\013dst_address\030\003 \001(\t\022\016\n\006amount\030\004 \001(\t\022"
      "\022\n\nexpiration\030\005 \001(\004\022\r\n\005block\030\006 \001(\t\022\014\n\004de"
      "al\030\007 \001(\t\022\026\n\016previous_owner\030\010 \001(\t\022\020\n\010tran"
      "sfer\030\t \001(\t\022\017\n\007sighash\030\n \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RepaymentOrder.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_RepaymentOrder_2eproto

// ===================================================================

void RepaymentOrder::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RepaymentOrder::kBlockchainFieldNumber;
const int RepaymentOrder::kSrcAddressFieldNumber;
const int RepaymentOrder::kDstAddressFieldNumber;
const int RepaymentOrder::kAmountFieldNumber;
const int RepaymentOrder::kExpirationFieldNumber;
const int RepaymentOrder::kBlockFieldNumber;
const int RepaymentOrder::kDealFieldNumber;
const int RepaymentOrder::kPreviousOwnerFieldNumber;
const int RepaymentOrder::kTransferFieldNumber;
const int RepaymentOrder::kSighashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RepaymentOrder::RepaymentOrder()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_RepaymentOrder_2eproto::InitDefaultsRepaymentOrder();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:RepaymentOrder)
}
RepaymentOrder::RepaymentOrder(const RepaymentOrder& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.blockchain().size() > 0) {
    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  src_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.src_address().size() > 0) {
    src_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_address_);
  }
  dst_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.dst_address().size() > 0) {
    dst_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dst_address_);
  }
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.amount().size() > 0) {
    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.block().size() > 0) {
    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  deal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.deal().size() > 0) {
    deal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deal_);
  }
  previous_owner_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.previous_owner().size() > 0) {
    previous_owner_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.previous_owner_);
  }
  transfer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.transfer().size() > 0) {
    transfer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transfer_);
  }
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  expiration_ = from.expiration_;
  // @@protoc_insertion_point(copy_constructor:RepaymentOrder)
}

void RepaymentOrder::SharedCtor() {
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_owner_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transfer_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expiration_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

RepaymentOrder::~RepaymentOrder() {
  // @@protoc_insertion_point(destructor:RepaymentOrder)
  SharedDtor();
}

void RepaymentOrder::SharedDtor() {
  blockchain_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deal_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_owner_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transfer_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RepaymentOrder::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RepaymentOrder::descriptor() {
  ::protobuf_RepaymentOrder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RepaymentOrder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RepaymentOrder& RepaymentOrder::default_instance() {
  ::protobuf_RepaymentOrder_2eproto::InitDefaultsRepaymentOrder();
  return *internal_default_instance();
}

RepaymentOrder* RepaymentOrder::New(::google::protobuf::Arena* arena) const {
  RepaymentOrder* n = new RepaymentOrder;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RepaymentOrder::Clear() {
// @@protoc_insertion_point(message_clear_start:RepaymentOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transfer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expiration_ = GOOGLE_ULONGLONG(0);
  _internal_metadata_.Clear();
}

bool RepaymentOrder::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RepaymentOrder)
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
            "RepaymentOrder.blockchain"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string src_address = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_src_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->src_address().data(), static_cast<int>(this->src_address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.src_address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string dst_address = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dst_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dst_address().data(), static_cast<int>(this->dst_address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.dst_address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string amount = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_amount()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->amount().data(), static_cast<int>(this->amount().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.amount"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 expiration = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &expiration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string block = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_block()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->block().data(), static_cast<int>(this->block().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.block"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string deal = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deal()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deal().data(), static_cast<int>(this->deal().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.deal"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string previous_owner = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_previous_owner()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->previous_owner().data(), static_cast<int>(this->previous_owner().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.previous_owner"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string transfer = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_transfer()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->transfer().data(), static_cast<int>(this->transfer().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.transfer"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sighash = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RepaymentOrder.sighash"));
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
  // @@protoc_insertion_point(parse_success:RepaymentOrder)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RepaymentOrder)
  return false;
#undef DO_
}

void RepaymentOrder::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RepaymentOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.blockchain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->blockchain(), output);
  }

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_address().data(), static_cast<int>(this->src_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.src_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->src_address(), output);
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dst_address().data(), static_cast<int>(this->dst_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.dst_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->dst_address(), output);
  }

  // string amount = 4;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.amount");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->amount(), output);
  }

  // uint64 expiration = 5;
  if (this->expiration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->expiration(), output);
  }

  // string block = 6;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.block");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->block(), output);
  }

  // string deal = 7;
  if (this->deal().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deal().data(), static_cast<int>(this->deal().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.deal");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->deal(), output);
  }

  // string previous_owner = 8;
  if (this->previous_owner().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->previous_owner().data(), static_cast<int>(this->previous_owner().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.previous_owner");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->previous_owner(), output);
  }

  // string transfer = 9;
  if (this->transfer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transfer().data(), static_cast<int>(this->transfer().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.transfer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->transfer(), output);
  }

  // string sighash = 10;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->sighash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RepaymentOrder)
}

::google::protobuf::uint8* RepaymentOrder::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RepaymentOrder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.blockchain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->blockchain(), target);
  }

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_address().data(), static_cast<int>(this->src_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.src_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->src_address(), target);
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dst_address().data(), static_cast<int>(this->dst_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.dst_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->dst_address(), target);
  }

  // string amount = 4;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.amount");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->amount(), target);
  }

  // uint64 expiration = 5;
  if (this->expiration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->expiration(), target);
  }

  // string block = 6;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.block");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->block(), target);
  }

  // string deal = 7;
  if (this->deal().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deal().data(), static_cast<int>(this->deal().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.deal");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->deal(), target);
  }

  // string previous_owner = 8;
  if (this->previous_owner().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->previous_owner().data(), static_cast<int>(this->previous_owner().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.previous_owner");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->previous_owner(), target);
  }

  // string transfer = 9;
  if (this->transfer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transfer().data(), static_cast<int>(this->transfer().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.transfer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->transfer(), target);
  }

  // string sighash = 10;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RepaymentOrder.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->sighash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RepaymentOrder)
  return target;
}

size_t RepaymentOrder::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RepaymentOrder)
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

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->src_address());
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dst_address());
  }

  // string amount = 4;
  if (this->amount().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->amount());
  }

  // string block = 6;
  if (this->block().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->block());
  }

  // string deal = 7;
  if (this->deal().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deal());
  }

  // string previous_owner = 8;
  if (this->previous_owner().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->previous_owner());
  }

  // string transfer = 9;
  if (this->transfer().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->transfer());
  }

  // string sighash = 10;
  if (this->sighash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sighash());
  }

  // uint64 expiration = 5;
  if (this->expiration() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->expiration());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RepaymentOrder::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RepaymentOrder)
  GOOGLE_DCHECK_NE(&from, this);
  const RepaymentOrder* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RepaymentOrder>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RepaymentOrder)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RepaymentOrder)
    MergeFrom(*source);
  }
}

void RepaymentOrder::MergeFrom(const RepaymentOrder& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RepaymentOrder)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.blockchain().size() > 0) {

    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  if (from.src_address().size() > 0) {

    src_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_address_);
  }
  if (from.dst_address().size() > 0) {

    dst_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dst_address_);
  }
  if (from.amount().size() > 0) {

    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  if (from.block().size() > 0) {

    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  if (from.deal().size() > 0) {

    deal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deal_);
  }
  if (from.previous_owner().size() > 0) {

    previous_owner_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.previous_owner_);
  }
  if (from.transfer().size() > 0) {

    transfer_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transfer_);
  }
  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  if (from.expiration() != 0) {
    set_expiration(from.expiration());
  }
}

void RepaymentOrder::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RepaymentOrder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RepaymentOrder::CopyFrom(const RepaymentOrder& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RepaymentOrder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RepaymentOrder::IsInitialized() const {
  return true;
}

void RepaymentOrder::Swap(RepaymentOrder* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RepaymentOrder::InternalSwap(RepaymentOrder* other) {
  using std::swap;
  blockchain_.Swap(&other->blockchain_);
  src_address_.Swap(&other->src_address_);
  dst_address_.Swap(&other->dst_address_);
  amount_.Swap(&other->amount_);
  block_.Swap(&other->block_);
  deal_.Swap(&other->deal_);
  previous_owner_.Swap(&other->previous_owner_);
  transfer_.Swap(&other->transfer_);
  sighash_.Swap(&other->sighash_);
  swap(expiration_, other->expiration_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RepaymentOrder::GetMetadata() const {
  protobuf_RepaymentOrder_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_RepaymentOrder_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
