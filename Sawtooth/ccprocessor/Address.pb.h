// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Address.proto

#ifndef PROTOBUF_Address_2eproto__INCLUDED
#define PROTOBUF_Address_2eproto__INCLUDED

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

namespace protobuf_Address_2eproto {
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
void InitDefaultsAddressImpl();
void InitDefaultsAddress();
inline void InitDefaults() {
  InitDefaultsAddress();
}
}  // namespace protobuf_Address_2eproto
class Address;
class AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;

// ===================================================================

class Address : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  Address();
  virtual ~Address();

  Address(const Address& from);

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(Address&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Address& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Address* other);
  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Address* New() const PROTOBUF_FINAL { return New(NULL); }

  Address* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Address& from);
  void MergeFrom(const Address& from);
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
  void InternalSwap(Address* other);
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

  // string blockchain = 1;
  void clear_blockchain();
  static const int kBlockchainFieldNumber = 1;
  const ::std::string& blockchain() const;
  void set_blockchain(const ::std::string& value);
  #if LANG_CXX11
  void set_blockchain(::std::string&& value);
  #endif
  void set_blockchain(const char* value);
  void set_blockchain(const char* value, size_t size);
  ::std::string* mutable_blockchain();
  ::std::string* release_blockchain();
  void set_allocated_blockchain(::std::string* blockchain);

  // string address = 2;
  void clear_address();
  static const int kAddressFieldNumber = 2;
  const ::std::string& address() const;
  void set_address(const ::std::string& value);
  #if LANG_CXX11
  void set_address(::std::string&& value);
  #endif
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  ::std::string* mutable_address();
  ::std::string* release_address();
  void set_allocated_address(::std::string* address);

  // string sighash = 3;
  void clear_sighash();
  static const int kSighashFieldNumber = 3;
  const ::std::string& sighash() const;
  void set_sighash(const ::std::string& value);
  #if LANG_CXX11
  void set_sighash(::std::string&& value);
  #endif
  void set_sighash(const char* value);
  void set_sighash(const char* value, size_t size);
  ::std::string* mutable_sighash();
  ::std::string* release_sighash();
  void set_allocated_sighash(::std::string* sighash);

  // @@protoc_insertion_point(class_scope:Address)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr blockchain_;
  ::google::protobuf::internal::ArenaStringPtr address_;
  ::google::protobuf::internal::ArenaStringPtr sighash_;
  mutable int _cached_size_;
  friend struct ::protobuf_Address_2eproto::TableStruct;
  friend void ::protobuf_Address_2eproto::InitDefaultsAddressImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Address

// string blockchain = 1;
inline void Address::clear_blockchain() {
  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Address::blockchain() const {
  // @@protoc_insertion_point(field_get:Address.blockchain)
  return blockchain_.GetNoArena();
}
inline void Address::set_blockchain(const ::std::string& value) {
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Address.blockchain)
}
#if LANG_CXX11
inline void Address::set_blockchain(::std::string&& value) {
  
  blockchain_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Address.blockchain)
}
#endif
inline void Address::set_blockchain(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Address.blockchain)
}
inline void Address::set_blockchain(const char* value, size_t size) {
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Address.blockchain)
}
inline ::std::string* Address::mutable_blockchain() {
  
  // @@protoc_insertion_point(field_mutable:Address.blockchain)
  return blockchain_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Address::release_blockchain() {
  // @@protoc_insertion_point(field_release:Address.blockchain)
  
  return blockchain_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Address::set_allocated_blockchain(::std::string* blockchain) {
  if (blockchain != NULL) {
    
  } else {
    
  }
  blockchain_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), blockchain);
  // @@protoc_insertion_point(field_set_allocated:Address.blockchain)
}

// string address = 2;
inline void Address::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Address::address() const {
  // @@protoc_insertion_point(field_get:Address.address)
  return address_.GetNoArena();
}
inline void Address::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Address.address)
}
#if LANG_CXX11
inline void Address::set_address(::std::string&& value) {
  
  address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Address.address)
}
#endif
inline void Address::set_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Address.address)
}
inline void Address::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Address.address)
}
inline ::std::string* Address::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:Address.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Address::release_address() {
  // @@protoc_insertion_point(field_release:Address.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Address::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:Address.address)
}

// string sighash = 3;
inline void Address::clear_sighash() {
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Address::sighash() const {
  // @@protoc_insertion_point(field_get:Address.sighash)
  return sighash_.GetNoArena();
}
inline void Address::set_sighash(const ::std::string& value) {
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Address.sighash)
}
#if LANG_CXX11
inline void Address::set_sighash(::std::string&& value) {
  
  sighash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Address.sighash)
}
#endif
inline void Address::set_sighash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Address.sighash)
}
inline void Address::set_sighash(const char* value, size_t size) {
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Address.sighash)
}
inline ::std::string* Address::mutable_sighash() {
  
  // @@protoc_insertion_point(field_mutable:Address.sighash)
  return sighash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Address::release_sighash() {
  // @@protoc_insertion_point(field_release:Address.sighash)
  
  return sighash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Address::set_allocated_sighash(::std::string* sighash) {
  if (sighash != NULL) {
    
  } else {
    
  }
  sighash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sighash);
  // @@protoc_insertion_point(field_set_allocated:Address.sighash)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Address_2eproto__INCLUDED