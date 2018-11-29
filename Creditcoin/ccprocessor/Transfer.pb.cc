// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Transfer.proto

#include "Transfer.pb.h"

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
class TransferDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Transfer>
      _instance;
} _Transfer_default_instance_;
namespace protobuf_Transfer_2eproto {
void InitDefaultsTransferImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Transfer_default_instance_;
    new (ptr) ::Transfer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Transfer::InitAsDefaultInstance();
}

void InitDefaultsTransfer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTransferImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, blockchain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, fee_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, txid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, network_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, orderid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, sighash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Transfer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Transfer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Transfer.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n\016Transfer.proto\"|\n\010Transfer\022\022\n\nblockcha"
      "in\030\001 \001(\t\022\016\n\006amount\030\002 \001(\t\022\013\n\003fee\030\003 \001(\t\022\014\n"
      "\004txid\030\004 \001(\t\022\017\n\007network\030\005 \001(\t\022\017\n\007orderid\030"
      "\006 \001(\t\022\017\n\007sighash\030\007 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 150);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Transfer.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_Transfer_2eproto

// ===================================================================

void Transfer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transfer::kBlockchainFieldNumber;
const int Transfer::kAmountFieldNumber;
const int Transfer::kFeeFieldNumber;
const int Transfer::kTxidFieldNumber;
const int Transfer::kNetworkFieldNumber;
const int Transfer::kOrderidFieldNumber;
const int Transfer::kSighashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transfer::Transfer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Transfer_2eproto::InitDefaultsTransfer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Transfer)
}
Transfer::Transfer(const Transfer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.blockchain().size() > 0) {
    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.amount().size() > 0) {
    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  fee_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.fee().size() > 0) {
    fee_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fee_);
  }
  txid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.txid().size() > 0) {
    txid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txid_);
  }
  network_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.network().size() > 0) {
    network_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.network_);
  }
  orderid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.orderid().size() > 0) {
    orderid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.orderid_);
  }
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  // @@protoc_insertion_point(copy_constructor:Transfer)
}

void Transfer::SharedCtor() {
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  txid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  network_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  orderid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Transfer::~Transfer() {
  // @@protoc_insertion_point(destructor:Transfer)
  SharedDtor();
}

void Transfer::SharedDtor() {
  blockchain_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  txid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  network_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  orderid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Transfer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transfer::descriptor() {
  ::protobuf_Transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Transfer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Transfer& Transfer::default_instance() {
  ::protobuf_Transfer_2eproto::InitDefaultsTransfer();
  return *internal_default_instance();
}

Transfer* Transfer::New(::google::protobuf::Arena* arena) const {
  Transfer* n = new Transfer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transfer::Clear() {
// @@protoc_insertion_point(message_clear_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  fee_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  txid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  network_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  orderid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Transfer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Transfer)
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
            "Transfer.blockchain"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string amount = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_amount()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->amount().data(), static_cast<int>(this->amount().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.amount"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string fee = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fee()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fee().data(), static_cast<int>(this->fee().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.fee"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string txid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_txid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->txid().data(), static_cast<int>(this->txid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.txid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string network = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_network()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->network().data(), static_cast<int>(this->network().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.network"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string orderid = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_orderid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->orderid().data(), static_cast<int>(this->orderid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.orderid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sighash = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.sighash"));
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
  // @@protoc_insertion_point(parse_success:Transfer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Transfer)
  return false;
#undef DO_
}

void Transfer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.blockchain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->blockchain(), output);
  }

  // string amount = 2;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.amount");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->amount(), output);
  }

  // string fee = 3;
  if (this->fee().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fee().data(), static_cast<int>(this->fee().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.fee");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->fee(), output);
  }

  // string txid = 4;
  if (this->txid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->txid().data(), static_cast<int>(this->txid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.txid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->txid(), output);
  }

  // string network = 5;
  if (this->network().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->network().data(), static_cast<int>(this->network().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.network");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->network(), output);
  }

  // string orderid = 6;
  if (this->orderid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->orderid().data(), static_cast<int>(this->orderid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.orderid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->orderid(), output);
  }

  // string sighash = 7;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->sighash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Transfer)
}

::google::protobuf::uint8* Transfer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.blockchain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->blockchain(), target);
  }

  // string amount = 2;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.amount");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->amount(), target);
  }

  // string fee = 3;
  if (this->fee().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fee().data(), static_cast<int>(this->fee().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.fee");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->fee(), target);
  }

  // string txid = 4;
  if (this->txid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->txid().data(), static_cast<int>(this->txid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.txid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->txid(), target);
  }

  // string network = 5;
  if (this->network().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->network().data(), static_cast<int>(this->network().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.network");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->network(), target);
  }

  // string orderid = 6;
  if (this->orderid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->orderid().data(), static_cast<int>(this->orderid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.orderid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->orderid(), target);
  }

  // string sighash = 7;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->sighash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Transfer)
  return target;
}

size_t Transfer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Transfer)
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

  // string amount = 2;
  if (this->amount().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->amount());
  }

  // string fee = 3;
  if (this->fee().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fee());
  }

  // string txid = 4;
  if (this->txid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->txid());
  }

  // string network = 5;
  if (this->network().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->network());
  }

  // string orderid = 6;
  if (this->orderid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->orderid());
  }

  // string sighash = 7;
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

void Transfer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Transfer)
  GOOGLE_DCHECK_NE(&from, this);
  const Transfer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Transfer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Transfer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Transfer)
    MergeFrom(*source);
  }
}

void Transfer::MergeFrom(const Transfer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Transfer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.blockchain().size() > 0) {

    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  if (from.amount().size() > 0) {

    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  if (from.fee().size() > 0) {

    fee_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fee_);
  }
  if (from.txid().size() > 0) {

    txid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txid_);
  }
  if (from.network().size() > 0) {

    network_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.network_);
  }
  if (from.orderid().size() > 0) {

    orderid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.orderid_);
  }
  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
}

void Transfer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Transfer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transfer::CopyFrom(const Transfer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Transfer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transfer::IsInitialized() const {
  return true;
}

void Transfer::Swap(Transfer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transfer::InternalSwap(Transfer* other) {
  using std::swap;
  blockchain_.Swap(&other->blockchain_);
  amount_.Swap(&other->amount_);
  fee_.Swap(&other->fee_);
  txid_.Swap(&other->txid_);
  network_.Swap(&other->network_);
  orderid_.Swap(&other->orderid_);
  sighash_.Swap(&other->sighash_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transfer::GetMetadata() const {
  protobuf_Transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Transfer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)