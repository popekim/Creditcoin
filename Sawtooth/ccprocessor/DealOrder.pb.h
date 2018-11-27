// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DealOrder.proto

#ifndef PROTOBUF_DealOrder_2eproto__INCLUDED
#define PROTOBUF_DealOrder_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_DealOrder_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsDealOrderImpl();
void InitDefaultsDealOrder();
inline void InitDefaults() {
  InitDefaultsDealOrder();
}
}  // namespace protobuf_DealOrder_2eproto
class DealOrder;
class DealOrderDefaultTypeInternal;
extern DealOrderDefaultTypeInternal _DealOrder_default_instance_;

// ===================================================================

class DealOrder : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DealOrder) */ {
 public:
  DealOrder();
  virtual ~DealOrder();

  DealOrder(const DealOrder& from);

  inline DealOrder& operator=(const DealOrder& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DealOrder(DealOrder&& from) noexcept
    : DealOrder() {
    *this = ::std::move(from);
  }

  inline DealOrder& operator=(DealOrder&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DealOrder& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DealOrder* internal_default_instance() {
    return reinterpret_cast<const DealOrder*>(
               &_DealOrder_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(DealOrder* other);
  friend void swap(DealOrder& a, DealOrder& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DealOrder* New() const PROTOBUF_FINAL { return New(NULL); }

  DealOrder* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DealOrder& from);
  void MergeFrom(const DealOrder& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DealOrder* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string ask_order_id = 1;
  void clear_ask_order_id();
  static const int kAskOrderIdFieldNumber = 1;
  const ::std::string& ask_order_id() const;
  void set_ask_order_id(const ::std::string& value);
  #if LANG_CXX11
  void set_ask_order_id(::std::string&& value);
  #endif
  void set_ask_order_id(const char* value);
  void set_ask_order_id(const char* value, size_t size);
  ::std::string* mutable_ask_order_id();
  ::std::string* release_ask_order_id();
  void set_allocated_ask_order_id(::std::string* ask_order_id);

  // string bid_order_id = 2;
  void clear_bid_order_id();
  static const int kBidOrderIdFieldNumber = 2;
  const ::std::string& bid_order_id() const;
  void set_bid_order_id(const ::std::string& value);
  #if LANG_CXX11
  void set_bid_order_id(::std::string&& value);
  #endif
  void set_bid_order_id(const char* value);
  void set_bid_order_id(const char* value, size_t size);
  ::std::string* mutable_bid_order_id();
  ::std::string* release_bid_order_id();
  void set_allocated_bid_order_id(::std::string* bid_order_id);

  // string collateral_transfer_id = 3;
  void clear_collateral_transfer_id();
  static const int kCollateralTransferIdFieldNumber = 3;
  const ::std::string& collateral_transfer_id() const;
  void set_collateral_transfer_id(const ::std::string& value);
  #if LANG_CXX11
  void set_collateral_transfer_id(::std::string&& value);
  #endif
  void set_collateral_transfer_id(const char* value);
  void set_collateral_transfer_id(const char* value, size_t size);
  ::std::string* mutable_collateral_transfer_id();
  ::std::string* release_collateral_transfer_id();
  void set_allocated_collateral_transfer_id(::std::string* collateral_transfer_id);

  // string unlock_funds_destination_address_id = 4;
  void clear_unlock_funds_destination_address_id();
  static const int kUnlockFundsDestinationAddressIdFieldNumber = 4;
  const ::std::string& unlock_funds_destination_address_id() const;
  void set_unlock_funds_destination_address_id(const ::std::string& value);
  #if LANG_CXX11
  void set_unlock_funds_destination_address_id(::std::string&& value);
  #endif
  void set_unlock_funds_destination_address_id(const char* value);
  void set_unlock_funds_destination_address_id(const char* value, size_t size);
  ::std::string* mutable_unlock_funds_destination_address_id();
  ::std::string* release_unlock_funds_destination_address_id();
  void set_allocated_unlock_funds_destination_address_id(::std::string* unlock_funds_destination_address_id);

  // string unlock_collateral_destination_address_id = 5;
  void clear_unlock_collateral_destination_address_id();
  static const int kUnlockCollateralDestinationAddressIdFieldNumber = 5;
  const ::std::string& unlock_collateral_destination_address_id() const;
  void set_unlock_collateral_destination_address_id(const ::std::string& value);
  #if LANG_CXX11
  void set_unlock_collateral_destination_address_id(::std::string&& value);
  #endif
  void set_unlock_collateral_destination_address_id(const char* value);
  void set_unlock_collateral_destination_address_id(const char* value, size_t size);
  ::std::string* mutable_unlock_collateral_destination_address_id();
  ::std::string* release_unlock_collateral_destination_address_id();
  void set_allocated_unlock_collateral_destination_address_id(::std::string* unlock_collateral_destination_address_id);

  // @@protoc_insertion_point(class_scope:DealOrder)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr ask_order_id_;
  ::google::protobuf::internal::ArenaStringPtr bid_order_id_;
  ::google::protobuf::internal::ArenaStringPtr collateral_transfer_id_;
  ::google::protobuf::internal::ArenaStringPtr unlock_funds_destination_address_id_;
  ::google::protobuf::internal::ArenaStringPtr unlock_collateral_destination_address_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_DealOrder_2eproto::TableStruct;
  friend void ::protobuf_DealOrder_2eproto::InitDefaultsDealOrderImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DealOrder

// string ask_order_id = 1;
inline void DealOrder::clear_ask_order_id() {
  ask_order_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DealOrder::ask_order_id() const {
  // @@protoc_insertion_point(field_get:DealOrder.ask_order_id)
  return ask_order_id_.GetNoArena();
}
inline void DealOrder::set_ask_order_id(const ::std::string& value) {
  
  ask_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DealOrder.ask_order_id)
}
#if LANG_CXX11
inline void DealOrder::set_ask_order_id(::std::string&& value) {
  
  ask_order_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DealOrder.ask_order_id)
}
#endif
inline void DealOrder::set_ask_order_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ask_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DealOrder.ask_order_id)
}
inline void DealOrder::set_ask_order_id(const char* value, size_t size) {
  
  ask_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DealOrder.ask_order_id)
}
inline ::std::string* DealOrder::mutable_ask_order_id() {
  
  // @@protoc_insertion_point(field_mutable:DealOrder.ask_order_id)
  return ask_order_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DealOrder::release_ask_order_id() {
  // @@protoc_insertion_point(field_release:DealOrder.ask_order_id)
  
  return ask_order_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DealOrder::set_allocated_ask_order_id(::std::string* ask_order_id) {
  if (ask_order_id != NULL) {
    
  } else {
    
  }
  ask_order_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ask_order_id);
  // @@protoc_insertion_point(field_set_allocated:DealOrder.ask_order_id)
}

// string bid_order_id = 2;
inline void DealOrder::clear_bid_order_id() {
  bid_order_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DealOrder::bid_order_id() const {
  // @@protoc_insertion_point(field_get:DealOrder.bid_order_id)
  return bid_order_id_.GetNoArena();
}
inline void DealOrder::set_bid_order_id(const ::std::string& value) {
  
  bid_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DealOrder.bid_order_id)
}
#if LANG_CXX11
inline void DealOrder::set_bid_order_id(::std::string&& value) {
  
  bid_order_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DealOrder.bid_order_id)
}
#endif
inline void DealOrder::set_bid_order_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  bid_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DealOrder.bid_order_id)
}
inline void DealOrder::set_bid_order_id(const char* value, size_t size) {
  
  bid_order_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DealOrder.bid_order_id)
}
inline ::std::string* DealOrder::mutable_bid_order_id() {
  
  // @@protoc_insertion_point(field_mutable:DealOrder.bid_order_id)
  return bid_order_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DealOrder::release_bid_order_id() {
  // @@protoc_insertion_point(field_release:DealOrder.bid_order_id)
  
  return bid_order_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DealOrder::set_allocated_bid_order_id(::std::string* bid_order_id) {
  if (bid_order_id != NULL) {
    
  } else {
    
  }
  bid_order_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bid_order_id);
  // @@protoc_insertion_point(field_set_allocated:DealOrder.bid_order_id)
}

// string collateral_transfer_id = 3;
inline void DealOrder::clear_collateral_transfer_id() {
  collateral_transfer_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DealOrder::collateral_transfer_id() const {
  // @@protoc_insertion_point(field_get:DealOrder.collateral_transfer_id)
  return collateral_transfer_id_.GetNoArena();
}
inline void DealOrder::set_collateral_transfer_id(const ::std::string& value) {
  
  collateral_transfer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DealOrder.collateral_transfer_id)
}
#if LANG_CXX11
inline void DealOrder::set_collateral_transfer_id(::std::string&& value) {
  
  collateral_transfer_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DealOrder.collateral_transfer_id)
}
#endif
inline void DealOrder::set_collateral_transfer_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  collateral_transfer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DealOrder.collateral_transfer_id)
}
inline void DealOrder::set_collateral_transfer_id(const char* value, size_t size) {
  
  collateral_transfer_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DealOrder.collateral_transfer_id)
}
inline ::std::string* DealOrder::mutable_collateral_transfer_id() {
  
  // @@protoc_insertion_point(field_mutable:DealOrder.collateral_transfer_id)
  return collateral_transfer_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DealOrder::release_collateral_transfer_id() {
  // @@protoc_insertion_point(field_release:DealOrder.collateral_transfer_id)
  
  return collateral_transfer_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DealOrder::set_allocated_collateral_transfer_id(::std::string* collateral_transfer_id) {
  if (collateral_transfer_id != NULL) {
    
  } else {
    
  }
  collateral_transfer_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), collateral_transfer_id);
  // @@protoc_insertion_point(field_set_allocated:DealOrder.collateral_transfer_id)
}

// string unlock_funds_destination_address_id = 4;
inline void DealOrder::clear_unlock_funds_destination_address_id() {
  unlock_funds_destination_address_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DealOrder::unlock_funds_destination_address_id() const {
  // @@protoc_insertion_point(field_get:DealOrder.unlock_funds_destination_address_id)
  return unlock_funds_destination_address_id_.GetNoArena();
}
inline void DealOrder::set_unlock_funds_destination_address_id(const ::std::string& value) {
  
  unlock_funds_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DealOrder.unlock_funds_destination_address_id)
}
#if LANG_CXX11
inline void DealOrder::set_unlock_funds_destination_address_id(::std::string&& value) {
  
  unlock_funds_destination_address_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DealOrder.unlock_funds_destination_address_id)
}
#endif
inline void DealOrder::set_unlock_funds_destination_address_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  unlock_funds_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DealOrder.unlock_funds_destination_address_id)
}
inline void DealOrder::set_unlock_funds_destination_address_id(const char* value, size_t size) {
  
  unlock_funds_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DealOrder.unlock_funds_destination_address_id)
}
inline ::std::string* DealOrder::mutable_unlock_funds_destination_address_id() {
  
  // @@protoc_insertion_point(field_mutable:DealOrder.unlock_funds_destination_address_id)
  return unlock_funds_destination_address_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DealOrder::release_unlock_funds_destination_address_id() {
  // @@protoc_insertion_point(field_release:DealOrder.unlock_funds_destination_address_id)
  
  return unlock_funds_destination_address_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DealOrder::set_allocated_unlock_funds_destination_address_id(::std::string* unlock_funds_destination_address_id) {
  if (unlock_funds_destination_address_id != NULL) {
    
  } else {
    
  }
  unlock_funds_destination_address_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unlock_funds_destination_address_id);
  // @@protoc_insertion_point(field_set_allocated:DealOrder.unlock_funds_destination_address_id)
}

// string unlock_collateral_destination_address_id = 5;
inline void DealOrder::clear_unlock_collateral_destination_address_id() {
  unlock_collateral_destination_address_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DealOrder::unlock_collateral_destination_address_id() const {
  // @@protoc_insertion_point(field_get:DealOrder.unlock_collateral_destination_address_id)
  return unlock_collateral_destination_address_id_.GetNoArena();
}
inline void DealOrder::set_unlock_collateral_destination_address_id(const ::std::string& value) {
  
  unlock_collateral_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DealOrder.unlock_collateral_destination_address_id)
}
#if LANG_CXX11
inline void DealOrder::set_unlock_collateral_destination_address_id(::std::string&& value) {
  
  unlock_collateral_destination_address_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DealOrder.unlock_collateral_destination_address_id)
}
#endif
inline void DealOrder::set_unlock_collateral_destination_address_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  unlock_collateral_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DealOrder.unlock_collateral_destination_address_id)
}
inline void DealOrder::set_unlock_collateral_destination_address_id(const char* value, size_t size) {
  
  unlock_collateral_destination_address_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DealOrder.unlock_collateral_destination_address_id)
}
inline ::std::string* DealOrder::mutable_unlock_collateral_destination_address_id() {
  
  // @@protoc_insertion_point(field_mutable:DealOrder.unlock_collateral_destination_address_id)
  return unlock_collateral_destination_address_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DealOrder::release_unlock_collateral_destination_address_id() {
  // @@protoc_insertion_point(field_release:DealOrder.unlock_collateral_destination_address_id)
  
  return unlock_collateral_destination_address_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DealOrder::set_allocated_unlock_collateral_destination_address_id(::std::string* unlock_collateral_destination_address_id) {
  if (unlock_collateral_destination_address_id != NULL) {
    
  } else {
    
  }
  unlock_collateral_destination_address_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unlock_collateral_destination_address_id);
  // @@protoc_insertion_point(field_set_allocated:DealOrder.unlock_collateral_destination_address_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DealOrder_2eproto__INCLUDED