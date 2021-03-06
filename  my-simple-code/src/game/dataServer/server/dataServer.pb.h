// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dataServer.proto

#ifndef PROTOBUF_dataServer_2eproto__INCLUDED
#define PROTOBUF_dataServer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace dataserver {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dataServer_2eproto();
void protobuf_AssignDesc_dataServer_2eproto();
void protobuf_ShutdownFile_dataServer_2eproto();

class Select;
class Insert;
class Delete;
class Update;

// ===================================================================

class Select : public ::google::protobuf::Message {
 public:
  Select();
  virtual ~Select();
  
  Select(const Select& from);
  
  inline Select& operator=(const Select& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Select& default_instance();
  
  void Swap(Select* other);
  
  // implements Message ----------------------------------------------
  
  Select* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Select& from);
  void MergeFrom(const Select& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline ::google::protobuf::int32 key() const;
  inline void set_key(::google::protobuf::int32 value);
  
  // required string messageName = 2;
  inline bool has_messagename() const;
  inline void clear_messagename();
  static const int kMessageNameFieldNumber = 2;
  inline const ::std::string& messagename() const;
  inline void set_messagename(const ::std::string& value);
  inline void set_messagename(const char* value);
  inline void set_messagename(const char* value, size_t size);
  inline ::std::string* mutable_messagename();
  inline ::std::string* release_messagename();
  
  // @@protoc_insertion_point(class_scope:dataserver.Select)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_messagename();
  inline void clear_has_messagename();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* messagename_;
  ::google::protobuf::int32 key_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_dataServer_2eproto();
  friend void protobuf_AssignDesc_dataServer_2eproto();
  friend void protobuf_ShutdownFile_dataServer_2eproto();
  
  void InitAsDefaultInstance();
  static Select* default_instance_;
};
// -------------------------------------------------------------------

class Insert : public ::google::protobuf::Message {
 public:
  Insert();
  virtual ~Insert();
  
  Insert(const Insert& from);
  
  inline Insert& operator=(const Insert& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Insert& default_instance();
  
  void Swap(Insert* other);
  
  // implements Message ----------------------------------------------
  
  Insert* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Insert& from);
  void MergeFrom(const Insert& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline ::google::protobuf::int32 key() const;
  inline void set_key(::google::protobuf::int32 value);
  
  // required string messageName = 2;
  inline bool has_messagename() const;
  inline void clear_messagename();
  static const int kMessageNameFieldNumber = 2;
  inline const ::std::string& messagename() const;
  inline void set_messagename(const ::std::string& value);
  inline void set_messagename(const char* value);
  inline void set_messagename(const char* value, size_t size);
  inline ::std::string* mutable_messagename();
  inline ::std::string* release_messagename();
  
  // @@protoc_insertion_point(class_scope:dataserver.Insert)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_messagename();
  inline void clear_has_messagename();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* messagename_;
  ::google::protobuf::int32 key_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_dataServer_2eproto();
  friend void protobuf_AssignDesc_dataServer_2eproto();
  friend void protobuf_ShutdownFile_dataServer_2eproto();
  
  void InitAsDefaultInstance();
  static Insert* default_instance_;
};
// -------------------------------------------------------------------

class Delete : public ::google::protobuf::Message {
 public:
  Delete();
  virtual ~Delete();
  
  Delete(const Delete& from);
  
  inline Delete& operator=(const Delete& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Delete& default_instance();
  
  void Swap(Delete* other);
  
  // implements Message ----------------------------------------------
  
  Delete* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Delete& from);
  void MergeFrom(const Delete& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline ::google::protobuf::int32 key() const;
  inline void set_key(::google::protobuf::int32 value);
  
  // required string messageName = 2;
  inline bool has_messagename() const;
  inline void clear_messagename();
  static const int kMessageNameFieldNumber = 2;
  inline const ::std::string& messagename() const;
  inline void set_messagename(const ::std::string& value);
  inline void set_messagename(const char* value);
  inline void set_messagename(const char* value, size_t size);
  inline ::std::string* mutable_messagename();
  inline ::std::string* release_messagename();
  
  // @@protoc_insertion_point(class_scope:dataserver.Delete)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_messagename();
  inline void clear_has_messagename();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* messagename_;
  ::google::protobuf::int32 key_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_dataServer_2eproto();
  friend void protobuf_AssignDesc_dataServer_2eproto();
  friend void protobuf_ShutdownFile_dataServer_2eproto();
  
  void InitAsDefaultInstance();
  static Delete* default_instance_;
};
// -------------------------------------------------------------------

class Update : public ::google::protobuf::Message {
 public:
  Update();
  virtual ~Update();
  
  Update(const Update& from);
  
  inline Update& operator=(const Update& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Update& default_instance();
  
  void Swap(Update* other);
  
  // implements Message ----------------------------------------------
  
  Update* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Update& from);
  void MergeFrom(const Update& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 key = 1;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 1;
  inline ::google::protobuf::int32 key() const;
  inline void set_key(::google::protobuf::int32 value);
  
  // required string messageName = 2;
  inline bool has_messagename() const;
  inline void clear_messagename();
  static const int kMessageNameFieldNumber = 2;
  inline const ::std::string& messagename() const;
  inline void set_messagename(const ::std::string& value);
  inline void set_messagename(const char* value);
  inline void set_messagename(const char* value, size_t size);
  inline ::std::string* mutable_messagename();
  inline ::std::string* release_messagename();
  
  // @@protoc_insertion_point(class_scope:dataserver.Update)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_messagename();
  inline void clear_has_messagename();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* messagename_;
  ::google::protobuf::int32 key_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_dataServer_2eproto();
  friend void protobuf_AssignDesc_dataServer_2eproto();
  friend void protobuf_ShutdownFile_dataServer_2eproto();
  
  void InitAsDefaultInstance();
  static Update* default_instance_;
};
// ===================================================================


// ===================================================================

// Select

// required int32 key = 1;
inline bool Select::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Select::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Select::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Select::clear_key() {
  key_ = 0;
  clear_has_key();
}
inline ::google::protobuf::int32 Select::key() const {
  return key_;
}
inline void Select::set_key(::google::protobuf::int32 value) {
  set_has_key();
  key_ = value;
}

// required string messageName = 2;
inline bool Select::has_messagename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Select::set_has_messagename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Select::clear_has_messagename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Select::clear_messagename() {
  if (messagename_ != &::google::protobuf::internal::kEmptyString) {
    messagename_->clear();
  }
  clear_has_messagename();
}
inline const ::std::string& Select::messagename() const {
  return *messagename_;
}
inline void Select::set_messagename(const ::std::string& value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Select::set_messagename(const char* value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Select::set_messagename(const char* value, size_t size) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Select::mutable_messagename() {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  return messagename_;
}
inline ::std::string* Select::release_messagename() {
  clear_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = messagename_;
    messagename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Insert

// required int32 key = 1;
inline bool Insert::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Insert::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Insert::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Insert::clear_key() {
  key_ = 0;
  clear_has_key();
}
inline ::google::protobuf::int32 Insert::key() const {
  return key_;
}
inline void Insert::set_key(::google::protobuf::int32 value) {
  set_has_key();
  key_ = value;
}

// required string messageName = 2;
inline bool Insert::has_messagename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Insert::set_has_messagename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Insert::clear_has_messagename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Insert::clear_messagename() {
  if (messagename_ != &::google::protobuf::internal::kEmptyString) {
    messagename_->clear();
  }
  clear_has_messagename();
}
inline const ::std::string& Insert::messagename() const {
  return *messagename_;
}
inline void Insert::set_messagename(const ::std::string& value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Insert::set_messagename(const char* value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Insert::set_messagename(const char* value, size_t size) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Insert::mutable_messagename() {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  return messagename_;
}
inline ::std::string* Insert::release_messagename() {
  clear_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = messagename_;
    messagename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Delete

// required int32 key = 1;
inline bool Delete::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Delete::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Delete::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Delete::clear_key() {
  key_ = 0;
  clear_has_key();
}
inline ::google::protobuf::int32 Delete::key() const {
  return key_;
}
inline void Delete::set_key(::google::protobuf::int32 value) {
  set_has_key();
  key_ = value;
}

// required string messageName = 2;
inline bool Delete::has_messagename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Delete::set_has_messagename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Delete::clear_has_messagename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Delete::clear_messagename() {
  if (messagename_ != &::google::protobuf::internal::kEmptyString) {
    messagename_->clear();
  }
  clear_has_messagename();
}
inline const ::std::string& Delete::messagename() const {
  return *messagename_;
}
inline void Delete::set_messagename(const ::std::string& value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Delete::set_messagename(const char* value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Delete::set_messagename(const char* value, size_t size) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Delete::mutable_messagename() {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  return messagename_;
}
inline ::std::string* Delete::release_messagename() {
  clear_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = messagename_;
    messagename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// Update

// required int32 key = 1;
inline bool Update::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Update::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Update::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Update::clear_key() {
  key_ = 0;
  clear_has_key();
}
inline ::google::protobuf::int32 Update::key() const {
  return key_;
}
inline void Update::set_key(::google::protobuf::int32 value) {
  set_has_key();
  key_ = value;
}

// required string messageName = 2;
inline bool Update::has_messagename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Update::set_has_messagename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Update::clear_has_messagename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Update::clear_messagename() {
  if (messagename_ != &::google::protobuf::internal::kEmptyString) {
    messagename_->clear();
  }
  clear_has_messagename();
}
inline const ::std::string& Update::messagename() const {
  return *messagename_;
}
inline void Update::set_messagename(const ::std::string& value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Update::set_messagename(const char* value) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(value);
}
inline void Update::set_messagename(const char* value, size_t size) {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  messagename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Update::mutable_messagename() {
  set_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    messagename_ = new ::std::string;
  }
  return messagename_;
}
inline ::std::string* Update::release_messagename() {
  clear_has_messagename();
  if (messagename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = messagename_;
    messagename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dataserver

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dataServer_2eproto__INCLUDED
