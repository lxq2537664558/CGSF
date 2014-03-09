// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FPSPacket.proto

#ifndef PROTOBUF_FPSPacket_2eproto__INCLUDED
#define PROTOBUF_FPSPacket_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace FPSPacket {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_FPSPacket_2eproto();
void protobuf_AssignDesc_FPSPacket_2eproto();
void protobuf_ShutdownFile_FPSPacket_2eproto();

class MSG_PLAYER_MOVE_UPDATE;
class MSG_PLAYER_LOOK_UPDATE;
class MSG_PLAYER_HEALTH;
class MSG_PLAYER_SCORE;
class MSG_PLAYER_WEAPON_CHANGE;
class MSG_PLAYER_WEAPON_CHANGING;
class MSG_SPAWN_PLAYER;

// ===================================================================

class MSG_PLAYER_MOVE_UPDATE : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_MOVE_UPDATE();
  virtual ~MSG_PLAYER_MOVE_UPDATE();

  MSG_PLAYER_MOVE_UPDATE(const MSG_PLAYER_MOVE_UPDATE& from);

  inline MSG_PLAYER_MOVE_UPDATE& operator=(const MSG_PLAYER_MOVE_UPDATE& from) {
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
  static const MSG_PLAYER_MOVE_UPDATE& default_instance();

  void Swap(MSG_PLAYER_MOVE_UPDATE* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_MOVE_UPDATE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_MOVE_UPDATE& from);
  void MergeFrom(const MSG_PLAYER_MOVE_UPDATE& from);
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

  // required bytes moveupdate = 1;
  inline bool has_moveupdate() const;
  inline void clear_moveupdate();
  static const int kMoveupdateFieldNumber = 1;
  inline const ::std::string& moveupdate() const;
  inline void set_moveupdate(const ::std::string& value);
  inline void set_moveupdate(const char* value);
  inline void set_moveupdate(const void* value, size_t size);
  inline ::std::string* mutable_moveupdate();
  inline ::std::string* release_moveupdate();
  inline void set_allocated_moveupdate(::std::string* moveupdate);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_MOVE_UPDATE)
 private:
  inline void set_has_moveupdate();
  inline void clear_has_moveupdate();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* moveupdate_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_MOVE_UPDATE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_PLAYER_LOOK_UPDATE : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_LOOK_UPDATE();
  virtual ~MSG_PLAYER_LOOK_UPDATE();

  MSG_PLAYER_LOOK_UPDATE(const MSG_PLAYER_LOOK_UPDATE& from);

  inline MSG_PLAYER_LOOK_UPDATE& operator=(const MSG_PLAYER_LOOK_UPDATE& from) {
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
  static const MSG_PLAYER_LOOK_UPDATE& default_instance();

  void Swap(MSG_PLAYER_LOOK_UPDATE* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_LOOK_UPDATE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_LOOK_UPDATE& from);
  void MergeFrom(const MSG_PLAYER_LOOK_UPDATE& from);
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

  // required bytes lookupdate = 1;
  inline bool has_lookupdate() const;
  inline void clear_lookupdate();
  static const int kLookupdateFieldNumber = 1;
  inline const ::std::string& lookupdate() const;
  inline void set_lookupdate(const ::std::string& value);
  inline void set_lookupdate(const char* value);
  inline void set_lookupdate(const void* value, size_t size);
  inline ::std::string* mutable_lookupdate();
  inline ::std::string* release_lookupdate();
  inline void set_allocated_lookupdate(::std::string* lookupdate);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_LOOK_UPDATE)
 private:
  inline void set_has_lookupdate();
  inline void clear_has_lookupdate();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* lookupdate_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_LOOK_UPDATE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_PLAYER_HEALTH : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_HEALTH();
  virtual ~MSG_PLAYER_HEALTH();

  MSG_PLAYER_HEALTH(const MSG_PLAYER_HEALTH& from);

  inline MSG_PLAYER_HEALTH& operator=(const MSG_PLAYER_HEALTH& from) {
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
  static const MSG_PLAYER_HEALTH& default_instance();

  void Swap(MSG_PLAYER_HEALTH* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_HEALTH* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_HEALTH& from);
  void MergeFrom(const MSG_PLAYER_HEALTH& from);
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

  // required bytes playerhealth = 1;
  inline bool has_playerhealth() const;
  inline void clear_playerhealth();
  static const int kPlayerhealthFieldNumber = 1;
  inline const ::std::string& playerhealth() const;
  inline void set_playerhealth(const ::std::string& value);
  inline void set_playerhealth(const char* value);
  inline void set_playerhealth(const void* value, size_t size);
  inline ::std::string* mutable_playerhealth();
  inline ::std::string* release_playerhealth();
  inline void set_allocated_playerhealth(::std::string* playerhealth);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_HEALTH)
 private:
  inline void set_has_playerhealth();
  inline void clear_has_playerhealth();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* playerhealth_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_HEALTH* default_instance_;
};
// -------------------------------------------------------------------

class MSG_PLAYER_SCORE : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_SCORE();
  virtual ~MSG_PLAYER_SCORE();

  MSG_PLAYER_SCORE(const MSG_PLAYER_SCORE& from);

  inline MSG_PLAYER_SCORE& operator=(const MSG_PLAYER_SCORE& from) {
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
  static const MSG_PLAYER_SCORE& default_instance();

  void Swap(MSG_PLAYER_SCORE* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_SCORE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_SCORE& from);
  void MergeFrom(const MSG_PLAYER_SCORE& from);
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

  // required bytes PlayerScore = 1;
  inline bool has_playerscore() const;
  inline void clear_playerscore();
  static const int kPlayerScoreFieldNumber = 1;
  inline const ::std::string& playerscore() const;
  inline void set_playerscore(const ::std::string& value);
  inline void set_playerscore(const char* value);
  inline void set_playerscore(const void* value, size_t size);
  inline ::std::string* mutable_playerscore();
  inline ::std::string* release_playerscore();
  inline void set_allocated_playerscore(::std::string* playerscore);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_SCORE)
 private:
  inline void set_has_playerscore();
  inline void clear_has_playerscore();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* playerscore_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_SCORE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_PLAYER_WEAPON_CHANGE : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_WEAPON_CHANGE();
  virtual ~MSG_PLAYER_WEAPON_CHANGE();

  MSG_PLAYER_WEAPON_CHANGE(const MSG_PLAYER_WEAPON_CHANGE& from);

  inline MSG_PLAYER_WEAPON_CHANGE& operator=(const MSG_PLAYER_WEAPON_CHANGE& from) {
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
  static const MSG_PLAYER_WEAPON_CHANGE& default_instance();

  void Swap(MSG_PLAYER_WEAPON_CHANGE* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_WEAPON_CHANGE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_WEAPON_CHANGE& from);
  void MergeFrom(const MSG_PLAYER_WEAPON_CHANGE& from);
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

  // required bytes WeaponChange = 1;
  inline bool has_weaponchange() const;
  inline void clear_weaponchange();
  static const int kWeaponChangeFieldNumber = 1;
  inline const ::std::string& weaponchange() const;
  inline void set_weaponchange(const ::std::string& value);
  inline void set_weaponchange(const char* value);
  inline void set_weaponchange(const void* value, size_t size);
  inline ::std::string* mutable_weaponchange();
  inline ::std::string* release_weaponchange();
  inline void set_allocated_weaponchange(::std::string* weaponchange);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_WEAPON_CHANGE)
 private:
  inline void set_has_weaponchange();
  inline void clear_has_weaponchange();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* weaponchange_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_WEAPON_CHANGE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_PLAYER_WEAPON_CHANGING : public ::google::protobuf::Message {
 public:
  MSG_PLAYER_WEAPON_CHANGING();
  virtual ~MSG_PLAYER_WEAPON_CHANGING();

  MSG_PLAYER_WEAPON_CHANGING(const MSG_PLAYER_WEAPON_CHANGING& from);

  inline MSG_PLAYER_WEAPON_CHANGING& operator=(const MSG_PLAYER_WEAPON_CHANGING& from) {
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
  static const MSG_PLAYER_WEAPON_CHANGING& default_instance();

  void Swap(MSG_PLAYER_WEAPON_CHANGING* other);

  // implements Message ----------------------------------------------

  MSG_PLAYER_WEAPON_CHANGING* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_PLAYER_WEAPON_CHANGING& from);
  void MergeFrom(const MSG_PLAYER_WEAPON_CHANGING& from);
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

  // required bytes WeaponChanging = 1;
  inline bool has_weaponchanging() const;
  inline void clear_weaponchanging();
  static const int kWeaponChangingFieldNumber = 1;
  inline const ::std::string& weaponchanging() const;
  inline void set_weaponchanging(const ::std::string& value);
  inline void set_weaponchanging(const char* value);
  inline void set_weaponchanging(const void* value, size_t size);
  inline ::std::string* mutable_weaponchanging();
  inline ::std::string* release_weaponchanging();
  inline void set_allocated_weaponchanging(::std::string* weaponchanging);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_PLAYER_WEAPON_CHANGING)
 private:
  inline void set_has_weaponchanging();
  inline void clear_has_weaponchanging();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* weaponchanging_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_PLAYER_WEAPON_CHANGING* default_instance_;
};
// -------------------------------------------------------------------

class MSG_SPAWN_PLAYER : public ::google::protobuf::Message {
 public:
  MSG_SPAWN_PLAYER();
  virtual ~MSG_SPAWN_PLAYER();

  MSG_SPAWN_PLAYER(const MSG_SPAWN_PLAYER& from);

  inline MSG_SPAWN_PLAYER& operator=(const MSG_SPAWN_PLAYER& from) {
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
  static const MSG_SPAWN_PLAYER& default_instance();

  void Swap(MSG_SPAWN_PLAYER* other);

  // implements Message ----------------------------------------------

  MSG_SPAWN_PLAYER* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_SPAWN_PLAYER& from);
  void MergeFrom(const MSG_SPAWN_PLAYER& from);
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

  // required bytes SpawnPlayer = 1;
  inline bool has_spawnplayer() const;
  inline void clear_spawnplayer();
  static const int kSpawnPlayerFieldNumber = 1;
  inline const ::std::string& spawnplayer() const;
  inline void set_spawnplayer(const ::std::string& value);
  inline void set_spawnplayer(const char* value);
  inline void set_spawnplayer(const void* value, size_t size);
  inline ::std::string* mutable_spawnplayer();
  inline ::std::string* release_spawnplayer();
  inline void set_allocated_spawnplayer(::std::string* spawnplayer);

  // @@protoc_insertion_point(class_scope:FPSPacket.MSG_SPAWN_PLAYER)
 private:
  inline void set_has_spawnplayer();
  inline void clear_has_spawnplayer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* spawnplayer_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_FPSPacket_2eproto();
  friend void protobuf_AssignDesc_FPSPacket_2eproto();
  friend void protobuf_ShutdownFile_FPSPacket_2eproto();

  void InitAsDefaultInstance();
  static MSG_SPAWN_PLAYER* default_instance_;
};
// ===================================================================


// ===================================================================

// MSG_PLAYER_MOVE_UPDATE

// required bytes moveupdate = 1;
inline bool MSG_PLAYER_MOVE_UPDATE::has_moveupdate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_MOVE_UPDATE::set_has_moveupdate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_MOVE_UPDATE::clear_has_moveupdate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_MOVE_UPDATE::clear_moveupdate() {
  if (moveupdate_ != &::google::protobuf::internal::kEmptyString) {
    moveupdate_->clear();
  }
  clear_has_moveupdate();
}
inline const ::std::string& MSG_PLAYER_MOVE_UPDATE::moveupdate() const {
  return *moveupdate_;
}
inline void MSG_PLAYER_MOVE_UPDATE::set_moveupdate(const ::std::string& value) {
  set_has_moveupdate();
  if (moveupdate_ == &::google::protobuf::internal::kEmptyString) {
    moveupdate_ = new ::std::string;
  }
  moveupdate_->assign(value);
}
inline void MSG_PLAYER_MOVE_UPDATE::set_moveupdate(const char* value) {
  set_has_moveupdate();
  if (moveupdate_ == &::google::protobuf::internal::kEmptyString) {
    moveupdate_ = new ::std::string;
  }
  moveupdate_->assign(value);
}
inline void MSG_PLAYER_MOVE_UPDATE::set_moveupdate(const void* value, size_t size) {
  set_has_moveupdate();
  if (moveupdate_ == &::google::protobuf::internal::kEmptyString) {
    moveupdate_ = new ::std::string;
  }
  moveupdate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_MOVE_UPDATE::mutable_moveupdate() {
  set_has_moveupdate();
  if (moveupdate_ == &::google::protobuf::internal::kEmptyString) {
    moveupdate_ = new ::std::string;
  }
  return moveupdate_;
}
inline ::std::string* MSG_PLAYER_MOVE_UPDATE::release_moveupdate() {
  clear_has_moveupdate();
  if (moveupdate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = moveupdate_;
    moveupdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_MOVE_UPDATE::set_allocated_moveupdate(::std::string* moveupdate) {
  if (moveupdate_ != &::google::protobuf::internal::kEmptyString) {
    delete moveupdate_;
  }
  if (moveupdate) {
    set_has_moveupdate();
    moveupdate_ = moveupdate;
  } else {
    clear_has_moveupdate();
    moveupdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_PLAYER_LOOK_UPDATE

// required bytes lookupdate = 1;
inline bool MSG_PLAYER_LOOK_UPDATE::has_lookupdate() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_LOOK_UPDATE::set_has_lookupdate() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_LOOK_UPDATE::clear_has_lookupdate() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_LOOK_UPDATE::clear_lookupdate() {
  if (lookupdate_ != &::google::protobuf::internal::kEmptyString) {
    lookupdate_->clear();
  }
  clear_has_lookupdate();
}
inline const ::std::string& MSG_PLAYER_LOOK_UPDATE::lookupdate() const {
  return *lookupdate_;
}
inline void MSG_PLAYER_LOOK_UPDATE::set_lookupdate(const ::std::string& value) {
  set_has_lookupdate();
  if (lookupdate_ == &::google::protobuf::internal::kEmptyString) {
    lookupdate_ = new ::std::string;
  }
  lookupdate_->assign(value);
}
inline void MSG_PLAYER_LOOK_UPDATE::set_lookupdate(const char* value) {
  set_has_lookupdate();
  if (lookupdate_ == &::google::protobuf::internal::kEmptyString) {
    lookupdate_ = new ::std::string;
  }
  lookupdate_->assign(value);
}
inline void MSG_PLAYER_LOOK_UPDATE::set_lookupdate(const void* value, size_t size) {
  set_has_lookupdate();
  if (lookupdate_ == &::google::protobuf::internal::kEmptyString) {
    lookupdate_ = new ::std::string;
  }
  lookupdate_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_LOOK_UPDATE::mutable_lookupdate() {
  set_has_lookupdate();
  if (lookupdate_ == &::google::protobuf::internal::kEmptyString) {
    lookupdate_ = new ::std::string;
  }
  return lookupdate_;
}
inline ::std::string* MSG_PLAYER_LOOK_UPDATE::release_lookupdate() {
  clear_has_lookupdate();
  if (lookupdate_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = lookupdate_;
    lookupdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_LOOK_UPDATE::set_allocated_lookupdate(::std::string* lookupdate) {
  if (lookupdate_ != &::google::protobuf::internal::kEmptyString) {
    delete lookupdate_;
  }
  if (lookupdate) {
    set_has_lookupdate();
    lookupdate_ = lookupdate;
  } else {
    clear_has_lookupdate();
    lookupdate_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_PLAYER_HEALTH

// required bytes playerhealth = 1;
inline bool MSG_PLAYER_HEALTH::has_playerhealth() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_HEALTH::set_has_playerhealth() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_HEALTH::clear_has_playerhealth() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_HEALTH::clear_playerhealth() {
  if (playerhealth_ != &::google::protobuf::internal::kEmptyString) {
    playerhealth_->clear();
  }
  clear_has_playerhealth();
}
inline const ::std::string& MSG_PLAYER_HEALTH::playerhealth() const {
  return *playerhealth_;
}
inline void MSG_PLAYER_HEALTH::set_playerhealth(const ::std::string& value) {
  set_has_playerhealth();
  if (playerhealth_ == &::google::protobuf::internal::kEmptyString) {
    playerhealth_ = new ::std::string;
  }
  playerhealth_->assign(value);
}
inline void MSG_PLAYER_HEALTH::set_playerhealth(const char* value) {
  set_has_playerhealth();
  if (playerhealth_ == &::google::protobuf::internal::kEmptyString) {
    playerhealth_ = new ::std::string;
  }
  playerhealth_->assign(value);
}
inline void MSG_PLAYER_HEALTH::set_playerhealth(const void* value, size_t size) {
  set_has_playerhealth();
  if (playerhealth_ == &::google::protobuf::internal::kEmptyString) {
    playerhealth_ = new ::std::string;
  }
  playerhealth_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_HEALTH::mutable_playerhealth() {
  set_has_playerhealth();
  if (playerhealth_ == &::google::protobuf::internal::kEmptyString) {
    playerhealth_ = new ::std::string;
  }
  return playerhealth_;
}
inline ::std::string* MSG_PLAYER_HEALTH::release_playerhealth() {
  clear_has_playerhealth();
  if (playerhealth_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = playerhealth_;
    playerhealth_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_HEALTH::set_allocated_playerhealth(::std::string* playerhealth) {
  if (playerhealth_ != &::google::protobuf::internal::kEmptyString) {
    delete playerhealth_;
  }
  if (playerhealth) {
    set_has_playerhealth();
    playerhealth_ = playerhealth;
  } else {
    clear_has_playerhealth();
    playerhealth_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_PLAYER_SCORE

// required bytes PlayerScore = 1;
inline bool MSG_PLAYER_SCORE::has_playerscore() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_SCORE::set_has_playerscore() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_SCORE::clear_has_playerscore() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_SCORE::clear_playerscore() {
  if (playerscore_ != &::google::protobuf::internal::kEmptyString) {
    playerscore_->clear();
  }
  clear_has_playerscore();
}
inline const ::std::string& MSG_PLAYER_SCORE::playerscore() const {
  return *playerscore_;
}
inline void MSG_PLAYER_SCORE::set_playerscore(const ::std::string& value) {
  set_has_playerscore();
  if (playerscore_ == &::google::protobuf::internal::kEmptyString) {
    playerscore_ = new ::std::string;
  }
  playerscore_->assign(value);
}
inline void MSG_PLAYER_SCORE::set_playerscore(const char* value) {
  set_has_playerscore();
  if (playerscore_ == &::google::protobuf::internal::kEmptyString) {
    playerscore_ = new ::std::string;
  }
  playerscore_->assign(value);
}
inline void MSG_PLAYER_SCORE::set_playerscore(const void* value, size_t size) {
  set_has_playerscore();
  if (playerscore_ == &::google::protobuf::internal::kEmptyString) {
    playerscore_ = new ::std::string;
  }
  playerscore_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_SCORE::mutable_playerscore() {
  set_has_playerscore();
  if (playerscore_ == &::google::protobuf::internal::kEmptyString) {
    playerscore_ = new ::std::string;
  }
  return playerscore_;
}
inline ::std::string* MSG_PLAYER_SCORE::release_playerscore() {
  clear_has_playerscore();
  if (playerscore_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = playerscore_;
    playerscore_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_SCORE::set_allocated_playerscore(::std::string* playerscore) {
  if (playerscore_ != &::google::protobuf::internal::kEmptyString) {
    delete playerscore_;
  }
  if (playerscore) {
    set_has_playerscore();
    playerscore_ = playerscore;
  } else {
    clear_has_playerscore();
    playerscore_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_PLAYER_WEAPON_CHANGE

// required bytes WeaponChange = 1;
inline bool MSG_PLAYER_WEAPON_CHANGE::has_weaponchange() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_WEAPON_CHANGE::set_has_weaponchange() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_WEAPON_CHANGE::clear_has_weaponchange() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_WEAPON_CHANGE::clear_weaponchange() {
  if (weaponchange_ != &::google::protobuf::internal::kEmptyString) {
    weaponchange_->clear();
  }
  clear_has_weaponchange();
}
inline const ::std::string& MSG_PLAYER_WEAPON_CHANGE::weaponchange() const {
  return *weaponchange_;
}
inline void MSG_PLAYER_WEAPON_CHANGE::set_weaponchange(const ::std::string& value) {
  set_has_weaponchange();
  if (weaponchange_ == &::google::protobuf::internal::kEmptyString) {
    weaponchange_ = new ::std::string;
  }
  weaponchange_->assign(value);
}
inline void MSG_PLAYER_WEAPON_CHANGE::set_weaponchange(const char* value) {
  set_has_weaponchange();
  if (weaponchange_ == &::google::protobuf::internal::kEmptyString) {
    weaponchange_ = new ::std::string;
  }
  weaponchange_->assign(value);
}
inline void MSG_PLAYER_WEAPON_CHANGE::set_weaponchange(const void* value, size_t size) {
  set_has_weaponchange();
  if (weaponchange_ == &::google::protobuf::internal::kEmptyString) {
    weaponchange_ = new ::std::string;
  }
  weaponchange_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_WEAPON_CHANGE::mutable_weaponchange() {
  set_has_weaponchange();
  if (weaponchange_ == &::google::protobuf::internal::kEmptyString) {
    weaponchange_ = new ::std::string;
  }
  return weaponchange_;
}
inline ::std::string* MSG_PLAYER_WEAPON_CHANGE::release_weaponchange() {
  clear_has_weaponchange();
  if (weaponchange_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = weaponchange_;
    weaponchange_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_WEAPON_CHANGE::set_allocated_weaponchange(::std::string* weaponchange) {
  if (weaponchange_ != &::google::protobuf::internal::kEmptyString) {
    delete weaponchange_;
  }
  if (weaponchange) {
    set_has_weaponchange();
    weaponchange_ = weaponchange;
  } else {
    clear_has_weaponchange();
    weaponchange_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_PLAYER_WEAPON_CHANGING

// required bytes WeaponChanging = 1;
inline bool MSG_PLAYER_WEAPON_CHANGING::has_weaponchanging() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_PLAYER_WEAPON_CHANGING::set_has_weaponchanging() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_PLAYER_WEAPON_CHANGING::clear_has_weaponchanging() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_PLAYER_WEAPON_CHANGING::clear_weaponchanging() {
  if (weaponchanging_ != &::google::protobuf::internal::kEmptyString) {
    weaponchanging_->clear();
  }
  clear_has_weaponchanging();
}
inline const ::std::string& MSG_PLAYER_WEAPON_CHANGING::weaponchanging() const {
  return *weaponchanging_;
}
inline void MSG_PLAYER_WEAPON_CHANGING::set_weaponchanging(const ::std::string& value) {
  set_has_weaponchanging();
  if (weaponchanging_ == &::google::protobuf::internal::kEmptyString) {
    weaponchanging_ = new ::std::string;
  }
  weaponchanging_->assign(value);
}
inline void MSG_PLAYER_WEAPON_CHANGING::set_weaponchanging(const char* value) {
  set_has_weaponchanging();
  if (weaponchanging_ == &::google::protobuf::internal::kEmptyString) {
    weaponchanging_ = new ::std::string;
  }
  weaponchanging_->assign(value);
}
inline void MSG_PLAYER_WEAPON_CHANGING::set_weaponchanging(const void* value, size_t size) {
  set_has_weaponchanging();
  if (weaponchanging_ == &::google::protobuf::internal::kEmptyString) {
    weaponchanging_ = new ::std::string;
  }
  weaponchanging_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_PLAYER_WEAPON_CHANGING::mutable_weaponchanging() {
  set_has_weaponchanging();
  if (weaponchanging_ == &::google::protobuf::internal::kEmptyString) {
    weaponchanging_ = new ::std::string;
  }
  return weaponchanging_;
}
inline ::std::string* MSG_PLAYER_WEAPON_CHANGING::release_weaponchanging() {
  clear_has_weaponchanging();
  if (weaponchanging_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = weaponchanging_;
    weaponchanging_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_PLAYER_WEAPON_CHANGING::set_allocated_weaponchanging(::std::string* weaponchanging) {
  if (weaponchanging_ != &::google::protobuf::internal::kEmptyString) {
    delete weaponchanging_;
  }
  if (weaponchanging) {
    set_has_weaponchanging();
    weaponchanging_ = weaponchanging;
  } else {
    clear_has_weaponchanging();
    weaponchanging_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// MSG_SPAWN_PLAYER

// required bytes SpawnPlayer = 1;
inline bool MSG_SPAWN_PLAYER::has_spawnplayer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_SPAWN_PLAYER::set_has_spawnplayer() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_SPAWN_PLAYER::clear_has_spawnplayer() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_SPAWN_PLAYER::clear_spawnplayer() {
  if (spawnplayer_ != &::google::protobuf::internal::kEmptyString) {
    spawnplayer_->clear();
  }
  clear_has_spawnplayer();
}
inline const ::std::string& MSG_SPAWN_PLAYER::spawnplayer() const {
  return *spawnplayer_;
}
inline void MSG_SPAWN_PLAYER::set_spawnplayer(const ::std::string& value) {
  set_has_spawnplayer();
  if (spawnplayer_ == &::google::protobuf::internal::kEmptyString) {
    spawnplayer_ = new ::std::string;
  }
  spawnplayer_->assign(value);
}
inline void MSG_SPAWN_PLAYER::set_spawnplayer(const char* value) {
  set_has_spawnplayer();
  if (spawnplayer_ == &::google::protobuf::internal::kEmptyString) {
    spawnplayer_ = new ::std::string;
  }
  spawnplayer_->assign(value);
}
inline void MSG_SPAWN_PLAYER::set_spawnplayer(const void* value, size_t size) {
  set_has_spawnplayer();
  if (spawnplayer_ == &::google::protobuf::internal::kEmptyString) {
    spawnplayer_ = new ::std::string;
  }
  spawnplayer_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MSG_SPAWN_PLAYER::mutable_spawnplayer() {
  set_has_spawnplayer();
  if (spawnplayer_ == &::google::protobuf::internal::kEmptyString) {
    spawnplayer_ = new ::std::string;
  }
  return spawnplayer_;
}
inline ::std::string* MSG_SPAWN_PLAYER::release_spawnplayer() {
  clear_has_spawnplayer();
  if (spawnplayer_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = spawnplayer_;
    spawnplayer_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MSG_SPAWN_PLAYER::set_allocated_spawnplayer(::std::string* spawnplayer) {
  if (spawnplayer_ != &::google::protobuf::internal::kEmptyString) {
    delete spawnplayer_;
  }
  if (spawnplayer) {
    set_has_spawnplayer();
    spawnplayer_ = spawnplayer;
  } else {
    clear_has_spawnplayer();
    spawnplayer_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace FPSPacket

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FPSPacket_2eproto__INCLUDED
