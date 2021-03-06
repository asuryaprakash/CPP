// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_DeliverToEsme_2eproto__INCLUDED
#define PROTOBUF_DeliverToEsme_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DeliverToEsme_2eproto();
void protobuf_AssignDesc_DeliverToEsme_2eproto();
void protobuf_ShutdownFile_DeliverToEsme_2eproto();

class DeliverToEsme;

// ===================================================================

class DeliverToEsme : public ::google::protobuf::Message {
 public:
  DeliverToEsme();
  virtual ~DeliverToEsme();
  
  DeliverToEsme(const DeliverToEsme& from);
  
  inline DeliverToEsme& operator=(const DeliverToEsme& from) {
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
  static const DeliverToEsme& default_instance();
  void Swap(DeliverToEsme* other);
  
  // implements Message ----------------------------------------------
  
  DeliverToEsme* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeliverToEsme& from);
  void MergeFrom(const DeliverToEsme& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 task_id = 1;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 1;
  inline ::google::protobuf::uint32 task_id() const;
  inline void set_task_id(::google::protobuf::uint32 value);
  
  // required uint32 msg_id = 2;
  inline bool has_msg_id() const;
  inline void clear_msg_id();
  static const int kMsgIdFieldNumber = 2;
  inline ::google::protobuf::uint32 msg_id() const;
  inline void set_msg_id(::google::protobuf::uint32 value);
  
  // required string oa = 3;
  inline bool has_oa() const;
  inline void clear_oa();
  static const int kOaFieldNumber = 3;
  inline const ::std::string& oa() const;
  inline void set_oa(const ::std::string& value);
  inline void set_oa(const char* value);
  inline void set_oa(const char* value, size_t size);
  inline ::std::string* mutable_oa();
  
  // required string da = 4;
  inline bool has_da() const;
  inline void clear_da();
  static const int kDaFieldNumber = 4;
  inline const ::std::string& da() const;
  inline void set_da(const ::std::string& value);
  inline void set_da(const char* value);
  inline void set_da(const char* value, size_t size);
  inline ::std::string* mutable_da();
  
  // required bytes msg = 5;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 5;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const void* value, size_t size);
  inline ::std::string* mutable_msg();
  
  // required int32 interface_id = 6;
  inline bool has_interface_id() const;
  inline void clear_interface_id();
  static const int kInterfaceIdFieldNumber = 6;
  inline ::google::protobuf::int32 interface_id() const;
  inline void set_interface_id(::google::protobuf::int32 value);
  
  // optional int32 reg_del = 7;
  inline bool has_reg_del() const;
  inline void clear_reg_del();
  static const int kRegDelFieldNumber = 7;
  inline ::google::protobuf::int32 reg_del() const;
  inline void set_reg_del(::google::protobuf::int32 value);
  
  // optional string udh = 8;
  inline bool has_udh() const;
  inline void clear_udh();
  static const int kUdhFieldNumber = 8;
  inline const ::std::string& udh() const;
  inline void set_udh(const ::std::string& value);
  inline void set_udh(const char* value);
  inline void set_udh(const char* value, size_t size);
  inline ::std::string* mutable_udh();
  
  // optional int32 circle_id = 9;
  inline bool has_circle_id() const;
  inline void clear_circle_id();
  static const int kCircleIdFieldNumber = 9;
  inline ::google::protobuf::int32 circle_id() const;
  inline void set_circle_id(::google::protobuf::int32 value);
  
  // optional int32 channel_id = 10;
  inline bool has_channel_id() const;
  inline void clear_channel_id();
  static const int kChannelIdFieldNumber = 10;
  inline ::google::protobuf::int32 channel_id() const;
  inline void set_channel_id(::google::protobuf::int32 value);
  
  // optional int32 expiry_time = 11;
  inline bool has_expiry_time() const;
  inline void clear_expiry_time();
  static const int kExpiryTimeFieldNumber = 11;
  inline ::google::protobuf::int32 expiry_time() const;
  inline void set_expiry_time(::google::protobuf::int32 value);
  
  // optional int32 pid = 12;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 12;
  inline ::google::protobuf::int32 pid() const;
  inline void set_pid(::google::protobuf::int32 value);
  
  // optional int32 dcs = 13;
  inline bool has_dcs() const;
  inline void clear_dcs();
  static const int kDcsFieldNumber = 13;
  inline ::google::protobuf::int32 dcs() const;
  inline void set_dcs(::google::protobuf::int32 value);
  
  // optional string wapdata = 14;
  inline bool has_wapdata() const;
  inline void clear_wapdata();
  static const int kWapdataFieldNumber = 14;
  inline const ::std::string& wapdata() const;
  inline void set_wapdata(const ::std::string& value);
  inline void set_wapdata(const char* value);
  inline void set_wapdata(const char* value, size_t size);
  inline ::std::string* mutable_wapdata();
  
  // optional string url = 15;
  inline bool has_url() const;
  inline void clear_url();
  static const int kUrlFieldNumber = 15;
  inline const ::std::string& url() const;
  inline void set_url(const ::std::string& value);
  inline void set_url(const char* value);
  inline void set_url(const char* value, size_t size);
  inline ::std::string* mutable_url();
  
  // optional int32 lang_id = 16 [default = 0];
  inline bool has_lang_id() const;
  inline void clear_lang_id();
  static const int kLangIdFieldNumber = 16;
  inline ::google::protobuf::int32 lang_id() const;
  inline void set_lang_id(::google::protobuf::int32 value);
  
  // optional string task_name = 17;
  inline bool has_task_name() const;
  inline void clear_task_name();
  static const int kTaskNameFieldNumber = 17;
  inline const ::std::string& task_name() const;
  inline void set_task_name(const ::std::string& value);
  inline void set_task_name(const char* value);
  inline void set_task_name(const char* value, size_t size);
  inline ::std::string* mutable_task_name();
  
  // optional int32 msg_type = 18;
  inline bool has_msg_type() const;
  inline void clear_msg_type();
  static const int kMsgTypeFieldNumber = 18;
  inline ::google::protobuf::int32 msg_type() const;
  inline void set_msg_type(::google::protobuf::int32 value);
  
  // optional string srv_code = 19;
  inline bool has_srv_code() const;
  inline void clear_srv_code();
  static const int kSrvCodeFieldNumber = 19;
  inline const ::std::string& srv_code() const;
  inline void set_srv_code(const ::std::string& value);
  inline void set_srv_code(const char* value);
  inline void set_srv_code(const char* value, size_t size);
  inline ::std::string* mutable_srv_code();
  
  // optional string username = 20;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 20;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  
  // optional int32 status = 21;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 21;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);
  
  // optional int32 submit_time = 22;
  inline bool has_submit_time() const;
  inline void clear_submit_time();
  static const int kSubmitTimeFieldNumber = 22;
  inline ::google::protobuf::int32 submit_time() const;
  inline void set_submit_time(::google::protobuf::int32 value);
  
  // optional int32 submit_msgid = 23;
  inline bool has_submit_msgid() const;
  inline void clear_submit_msgid();
  static const int kSubmitMsgidFieldNumber = 23;
  inline ::google::protobuf::int32 submit_msgid() const;
  inline void set_submit_msgid(::google::protobuf::int32 value);
  
  // optional int32 session_endtime = 24;
  inline bool has_session_endtime() const;
  inline void clear_session_endtime();
  static const int kSessionEndtimeFieldNumber = 24;
  inline ::google::protobuf::int32 session_endtime() const;
  inline void set_session_endtime(::google::protobuf::int32 value);
  
  // optional int32 sender_sessionid = 25;
  inline bool has_sender_sessionid() const;
  inline void clear_sender_sessionid();
  static const int kSenderSessionidFieldNumber = 25;
  inline ::google::protobuf::int32 sender_sessionid() const;
  inline void set_sender_sessionid(::google::protobuf::int32 value);
  
  // optional int32 receiver_sessionid = 26;
  inline bool has_receiver_sessionid() const;
  inline void clear_receiver_sessionid();
  static const int kReceiverSessionidFieldNumber = 26;
  inline ::google::protobuf::int32 receiver_sessionid() const;
  inline void set_receiver_sessionid(::google::protobuf::int32 value);
  
  // optional int32 charging_status = 27;
  inline bool has_charging_status() const;
  inline void clear_charging_status();
  static const int kChargingStatusFieldNumber = 27;
  inline ::google::protobuf::int32 charging_status() const;
  inline void set_charging_status(::google::protobuf::int32 value);
  
  // optional string service_url = 28;
  inline bool has_service_url() const;
  inline void clear_service_url();
  static const int kServiceUrlFieldNumber = 28;
  inline const ::std::string& service_url() const;
  inline void set_service_url(const ::std::string& value);
  inline void set_service_url(const char* value);
  inline void set_service_url(const char* value, size_t size);
  inline ::std::string* mutable_service_url();
  
  // optional string service_url_status = 29;
  inline bool has_service_url_status() const;
  inline void clear_service_url_status();
  static const int kServiceUrlStatusFieldNumber = 29;
  inline const ::std::string& service_url_status() const;
  inline void set_service_url_status(const ::std::string& value);
  inline void set_service_url_status(const char* value);
  inline void set_service_url_status(const char* value, size_t size);
  inline ::std::string* mutable_service_url_status();
  
  // optional int32 retry_count = 30 [default = 0];
  inline bool has_retry_count() const;
  inline void clear_retry_count();
  static const int kRetryCountFieldNumber = 30;
  inline ::google::protobuf::int32 retry_count() const;
  inline void set_retry_count(::google::protobuf::int32 value);
  
  // optional string user_input = 31;
  inline bool has_user_input() const;
  inline void clear_user_input();
  static const int kUserInputFieldNumber = 31;
  inline const ::std::string& user_input() const;
  inline void set_user_input(const ::std::string& value);
  inline void set_user_input(const char* value);
  inline void set_user_input(const char* value, size_t size);
  inline ::std::string* mutable_user_input();
  
  // optional string sms_submit_msgid = 32;
  inline bool has_sms_submit_msgid() const;
  inline void clear_sms_submit_msgid();
  static const int kSmsSubmitMsgidFieldNumber = 32;
  inline const ::std::string& sms_submit_msgid() const;
  inline void set_sms_submit_msgid(const ::std::string& value);
  inline void set_sms_submit_msgid(const char* value);
  inline void set_sms_submit_msgid(const char* value, size_t size);
  inline ::std::string* mutable_sms_submit_msgid();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 task_id_;
  ::google::protobuf::uint32 msg_id_;
  ::std::string* oa_;
  static const ::std::string _default_oa_;
  ::std::string* da_;
  static const ::std::string _default_da_;
  ::std::string* msg_;
  static const ::std::string _default_msg_;
  ::google::protobuf::int32 interface_id_;
  ::google::protobuf::int32 reg_del_;
  ::std::string* udh_;
  static const ::std::string _default_udh_;
  ::google::protobuf::int32 circle_id_;
  ::google::protobuf::int32 channel_id_;
  ::google::protobuf::int32 expiry_time_;
  ::google::protobuf::int32 pid_;
  ::google::protobuf::int32 dcs_;
  ::std::string* wapdata_;
  static const ::std::string _default_wapdata_;
  ::std::string* url_;
  static const ::std::string _default_url_;
  ::google::protobuf::int32 lang_id_;
  ::std::string* task_name_;
  static const ::std::string _default_task_name_;
  ::google::protobuf::int32 msg_type_;
  ::std::string* srv_code_;
  static const ::std::string _default_srv_code_;
  ::std::string* username_;
  static const ::std::string _default_username_;
  ::google::protobuf::int32 status_;
  ::google::protobuf::int32 submit_time_;
  ::google::protobuf::int32 submit_msgid_;
  ::google::protobuf::int32 session_endtime_;
  ::google::protobuf::int32 sender_sessionid_;
  ::google::protobuf::int32 receiver_sessionid_;
  ::google::protobuf::int32 charging_status_;
  ::std::string* service_url_;
  static const ::std::string _default_service_url_;
  ::std::string* service_url_status_;
  static const ::std::string _default_service_url_status_;
  ::google::protobuf::int32 retry_count_;
  ::std::string* user_input_;
  static const ::std::string _default_user_input_;
  ::std::string* sms_submit_msgid_;
  static const ::std::string _default_sms_submit_msgid_;
  friend void  protobuf_AddDesc_DeliverToEsme_2eproto();
  friend void protobuf_AssignDesc_DeliverToEsme_2eproto();
  friend void protobuf_ShutdownFile_DeliverToEsme_2eproto();
  ::google::protobuf::uint32 _has_bits_[(32 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static DeliverToEsme* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// DeliverToEsme

// required uint32 task_id = 1;
inline bool DeliverToEsme::has_task_id() const {
  return _has_bit(0);
}
inline void DeliverToEsme::clear_task_id() {
  task_id_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 DeliverToEsme::task_id() const {
  return task_id_;
}
inline void DeliverToEsme::set_task_id(::google::protobuf::uint32 value) {
  _set_bit(0);
  task_id_ = value;
}

// required uint32 msg_id = 2;
inline bool DeliverToEsme::has_msg_id() const {
  return _has_bit(1);
}
inline void DeliverToEsme::clear_msg_id() {
  msg_id_ = 0u;
  _clear_bit(1);
}
inline ::google::protobuf::uint32 DeliverToEsme::msg_id() const {
  return msg_id_;
}
inline void DeliverToEsme::set_msg_id(::google::protobuf::uint32 value) {
  _set_bit(1);
  msg_id_ = value;
}

// required string oa = 3;
inline bool DeliverToEsme::has_oa() const {
  return _has_bit(2);
}
inline void DeliverToEsme::clear_oa() {
  if (oa_ != &_default_oa_) {
    oa_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& DeliverToEsme::oa() const {
  return *oa_;
}
inline void DeliverToEsme::set_oa(const ::std::string& value) {
  _set_bit(2);
  if (oa_ == &_default_oa_) {
    oa_ = new ::std::string;
  }
  oa_->assign(value);
}
inline void DeliverToEsme::set_oa(const char* value) {
  _set_bit(2);
  if (oa_ == &_default_oa_) {
    oa_ = new ::std::string;
  }
  oa_->assign(value);
}
inline void DeliverToEsme::set_oa(const char* value, size_t size) {
  _set_bit(2);
  if (oa_ == &_default_oa_) {
    oa_ = new ::std::string;
  }
  oa_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_oa() {
  _set_bit(2);
  if (oa_ == &_default_oa_) {
    oa_ = new ::std::string;
  }
  return oa_;
}

// required string da = 4;
inline bool DeliverToEsme::has_da() const {
  return _has_bit(3);
}
inline void DeliverToEsme::clear_da() {
  if (da_ != &_default_da_) {
    da_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& DeliverToEsme::da() const {
  return *da_;
}
inline void DeliverToEsme::set_da(const ::std::string& value) {
  _set_bit(3);
  if (da_ == &_default_da_) {
    da_ = new ::std::string;
  }
  da_->assign(value);
}
inline void DeliverToEsme::set_da(const char* value) {
  _set_bit(3);
  if (da_ == &_default_da_) {
    da_ = new ::std::string;
  }
  da_->assign(value);
}
inline void DeliverToEsme::set_da(const char* value, size_t size) {
  _set_bit(3);
  if (da_ == &_default_da_) {
    da_ = new ::std::string;
  }
  da_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_da() {
  _set_bit(3);
  if (da_ == &_default_da_) {
    da_ = new ::std::string;
  }
  return da_;
}

// required bytes msg = 5;
inline bool DeliverToEsme::has_msg() const {
  return _has_bit(4);
}
inline void DeliverToEsme::clear_msg() {
  if (msg_ != &_default_msg_) {
    msg_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& DeliverToEsme::msg() const {
  return *msg_;
}
inline void DeliverToEsme::set_msg(const ::std::string& value) {
  _set_bit(4);
  if (msg_ == &_default_msg_) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void DeliverToEsme::set_msg(const char* value) {
  _set_bit(4);
  if (msg_ == &_default_msg_) {
    msg_ = new ::std::string;
  }
  msg_->assign(value);
}
inline void DeliverToEsme::set_msg(const void* value, size_t size) {
  _set_bit(4);
  if (msg_ == &_default_msg_) {
    msg_ = new ::std::string;
  }
  msg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_msg() {
  _set_bit(4);
  if (msg_ == &_default_msg_) {
    msg_ = new ::std::string;
  }
  return msg_;
}

// required int32 interface_id = 6;
inline bool DeliverToEsme::has_interface_id() const {
  return _has_bit(5);
}
inline void DeliverToEsme::clear_interface_id() {
  interface_id_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 DeliverToEsme::interface_id() const {
  return interface_id_;
}
inline void DeliverToEsme::set_interface_id(::google::protobuf::int32 value) {
  _set_bit(5);
  interface_id_ = value;
}

// optional int32 reg_del = 7;
inline bool DeliverToEsme::has_reg_del() const {
  return _has_bit(6);
}
inline void DeliverToEsme::clear_reg_del() {
  reg_del_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 DeliverToEsme::reg_del() const {
  return reg_del_;
}
inline void DeliverToEsme::set_reg_del(::google::protobuf::int32 value) {
  _set_bit(6);
  reg_del_ = value;
}

// optional string udh = 8;
inline bool DeliverToEsme::has_udh() const {
  return _has_bit(7);
}
inline void DeliverToEsme::clear_udh() {
  if (udh_ != &_default_udh_) {
    udh_->clear();
  }
  _clear_bit(7);
}
inline const ::std::string& DeliverToEsme::udh() const {
  return *udh_;
}
inline void DeliverToEsme::set_udh(const ::std::string& value) {
  _set_bit(7);
  if (udh_ == &_default_udh_) {
    udh_ = new ::std::string;
  }
  udh_->assign(value);
}
inline void DeliverToEsme::set_udh(const char* value) {
  _set_bit(7);
  if (udh_ == &_default_udh_) {
    udh_ = new ::std::string;
  }
  udh_->assign(value);
}
inline void DeliverToEsme::set_udh(const char* value, size_t size) {
  _set_bit(7);
  if (udh_ == &_default_udh_) {
    udh_ = new ::std::string;
  }
  udh_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_udh() {
  _set_bit(7);
  if (udh_ == &_default_udh_) {
    udh_ = new ::std::string;
  }
  return udh_;
}

// optional int32 circle_id = 9;
inline bool DeliverToEsme::has_circle_id() const {
  return _has_bit(8);
}
inline void DeliverToEsme::clear_circle_id() {
  circle_id_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 DeliverToEsme::circle_id() const {
  return circle_id_;
}
inline void DeliverToEsme::set_circle_id(::google::protobuf::int32 value) {
  _set_bit(8);
  circle_id_ = value;
}

// optional int32 channel_id = 10;
inline bool DeliverToEsme::has_channel_id() const {
  return _has_bit(9);
}
inline void DeliverToEsme::clear_channel_id() {
  channel_id_ = 0;
  _clear_bit(9);
}
inline ::google::protobuf::int32 DeliverToEsme::channel_id() const {
  return channel_id_;
}
inline void DeliverToEsme::set_channel_id(::google::protobuf::int32 value) {
  _set_bit(9);
  channel_id_ = value;
}

// optional int32 expiry_time = 11;
inline bool DeliverToEsme::has_expiry_time() const {
  return _has_bit(10);
}
inline void DeliverToEsme::clear_expiry_time() {
  expiry_time_ = 0;
  _clear_bit(10);
}
inline ::google::protobuf::int32 DeliverToEsme::expiry_time() const {
  return expiry_time_;
}
inline void DeliverToEsme::set_expiry_time(::google::protobuf::int32 value) {
  _set_bit(10);
  expiry_time_ = value;
}

// optional int32 pid = 12;
inline bool DeliverToEsme::has_pid() const {
  return _has_bit(11);
}
inline void DeliverToEsme::clear_pid() {
  pid_ = 0;
  _clear_bit(11);
}
inline ::google::protobuf::int32 DeliverToEsme::pid() const {
  return pid_;
}
inline void DeliverToEsme::set_pid(::google::protobuf::int32 value) {
  _set_bit(11);
  pid_ = value;
}

// optional int32 dcs = 13;
inline bool DeliverToEsme::has_dcs() const {
  return _has_bit(12);
}
inline void DeliverToEsme::clear_dcs() {
  dcs_ = 0;
  _clear_bit(12);
}
inline ::google::protobuf::int32 DeliverToEsme::dcs() const {
  return dcs_;
}
inline void DeliverToEsme::set_dcs(::google::protobuf::int32 value) {
  _set_bit(12);
  dcs_ = value;
}

// optional string wapdata = 14;
inline bool DeliverToEsme::has_wapdata() const {
  return _has_bit(13);
}
inline void DeliverToEsme::clear_wapdata() {
  if (wapdata_ != &_default_wapdata_) {
    wapdata_->clear();
  }
  _clear_bit(13);
}
inline const ::std::string& DeliverToEsme::wapdata() const {
  return *wapdata_;
}
inline void DeliverToEsme::set_wapdata(const ::std::string& value) {
  _set_bit(13);
  if (wapdata_ == &_default_wapdata_) {
    wapdata_ = new ::std::string;
  }
  wapdata_->assign(value);
}
inline void DeliverToEsme::set_wapdata(const char* value) {
  _set_bit(13);
  if (wapdata_ == &_default_wapdata_) {
    wapdata_ = new ::std::string;
  }
  wapdata_->assign(value);
}
inline void DeliverToEsme::set_wapdata(const char* value, size_t size) {
  _set_bit(13);
  if (wapdata_ == &_default_wapdata_) {
    wapdata_ = new ::std::string;
  }
  wapdata_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_wapdata() {
  _set_bit(13);
  if (wapdata_ == &_default_wapdata_) {
    wapdata_ = new ::std::string;
  }
  return wapdata_;
}

// optional string url = 15;
inline bool DeliverToEsme::has_url() const {
  return _has_bit(14);
}
inline void DeliverToEsme::clear_url() {
  if (url_ != &_default_url_) {
    url_->clear();
  }
  _clear_bit(14);
}
inline const ::std::string& DeliverToEsme::url() const {
  return *url_;
}
inline void DeliverToEsme::set_url(const ::std::string& value) {
  _set_bit(14);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void DeliverToEsme::set_url(const char* value) {
  _set_bit(14);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void DeliverToEsme::set_url(const char* value, size_t size) {
  _set_bit(14);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_url() {
  _set_bit(14);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  return url_;
}

// optional int32 lang_id = 16 [default = 0];
inline bool DeliverToEsme::has_lang_id() const {
  return _has_bit(15);
}
inline void DeliverToEsme::clear_lang_id() {
  lang_id_ = 0;
  _clear_bit(15);
}
inline ::google::protobuf::int32 DeliverToEsme::lang_id() const {
  return lang_id_;
}
inline void DeliverToEsme::set_lang_id(::google::protobuf::int32 value) {
  _set_bit(15);
  lang_id_ = value;
}

// optional string task_name = 17;
inline bool DeliverToEsme::has_task_name() const {
  return _has_bit(16);
}
inline void DeliverToEsme::clear_task_name() {
  if (task_name_ != &_default_task_name_) {
    task_name_->clear();
  }
  _clear_bit(16);
}
inline const ::std::string& DeliverToEsme::task_name() const {
  return *task_name_;
}
inline void DeliverToEsme::set_task_name(const ::std::string& value) {
  _set_bit(16);
  if (task_name_ == &_default_task_name_) {
    task_name_ = new ::std::string;
  }
  task_name_->assign(value);
}
inline void DeliverToEsme::set_task_name(const char* value) {
  _set_bit(16);
  if (task_name_ == &_default_task_name_) {
    task_name_ = new ::std::string;
  }
  task_name_->assign(value);
}
inline void DeliverToEsme::set_task_name(const char* value, size_t size) {
  _set_bit(16);
  if (task_name_ == &_default_task_name_) {
    task_name_ = new ::std::string;
  }
  task_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_task_name() {
  _set_bit(16);
  if (task_name_ == &_default_task_name_) {
    task_name_ = new ::std::string;
  }
  return task_name_;
}

// optional int32 msg_type = 18;
inline bool DeliverToEsme::has_msg_type() const {
  return _has_bit(17);
}
inline void DeliverToEsme::clear_msg_type() {
  msg_type_ = 0;
  _clear_bit(17);
}
inline ::google::protobuf::int32 DeliverToEsme::msg_type() const {
  return msg_type_;
}
inline void DeliverToEsme::set_msg_type(::google::protobuf::int32 value) {
  _set_bit(17);
  msg_type_ = value;
}

// optional string srv_code = 19;
inline bool DeliverToEsme::has_srv_code() const {
  return _has_bit(18);
}
inline void DeliverToEsme::clear_srv_code() {
  if (srv_code_ != &_default_srv_code_) {
    srv_code_->clear();
  }
  _clear_bit(18);
}
inline const ::std::string& DeliverToEsme::srv_code() const {
  return *srv_code_;
}
inline void DeliverToEsme::set_srv_code(const ::std::string& value) {
  _set_bit(18);
  if (srv_code_ == &_default_srv_code_) {
    srv_code_ = new ::std::string;
  }
  srv_code_->assign(value);
}
inline void DeliverToEsme::set_srv_code(const char* value) {
  _set_bit(18);
  if (srv_code_ == &_default_srv_code_) {
    srv_code_ = new ::std::string;
  }
  srv_code_->assign(value);
}
inline void DeliverToEsme::set_srv_code(const char* value, size_t size) {
  _set_bit(18);
  if (srv_code_ == &_default_srv_code_) {
    srv_code_ = new ::std::string;
  }
  srv_code_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_srv_code() {
  _set_bit(18);
  if (srv_code_ == &_default_srv_code_) {
    srv_code_ = new ::std::string;
  }
  return srv_code_;
}

// optional string username = 20;
inline bool DeliverToEsme::has_username() const {
  return _has_bit(19);
}
inline void DeliverToEsme::clear_username() {
  if (username_ != &_default_username_) {
    username_->clear();
  }
  _clear_bit(19);
}
inline const ::std::string& DeliverToEsme::username() const {
  return *username_;
}
inline void DeliverToEsme::set_username(const ::std::string& value) {
  _set_bit(19);
  if (username_ == &_default_username_) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void DeliverToEsme::set_username(const char* value) {
  _set_bit(19);
  if (username_ == &_default_username_) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void DeliverToEsme::set_username(const char* value, size_t size) {
  _set_bit(19);
  if (username_ == &_default_username_) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_username() {
  _set_bit(19);
  if (username_ == &_default_username_) {
    username_ = new ::std::string;
  }
  return username_;
}

// optional int32 status = 21;
inline bool DeliverToEsme::has_status() const {
  return _has_bit(20);
}
inline void DeliverToEsme::clear_status() {
  status_ = 0;
  _clear_bit(20);
}
inline ::google::protobuf::int32 DeliverToEsme::status() const {
  return status_;
}
inline void DeliverToEsme::set_status(::google::protobuf::int32 value) {
  _set_bit(20);
  status_ = value;
}

// optional int32 submit_time = 22;
inline bool DeliverToEsme::has_submit_time() const {
  return _has_bit(21);
}
inline void DeliverToEsme::clear_submit_time() {
  submit_time_ = 0;
  _clear_bit(21);
}
inline ::google::protobuf::int32 DeliverToEsme::submit_time() const {
  return submit_time_;
}
inline void DeliverToEsme::set_submit_time(::google::protobuf::int32 value) {
  _set_bit(21);
  submit_time_ = value;
}

// optional int32 submit_msgid = 23;
inline bool DeliverToEsme::has_submit_msgid() const {
  return _has_bit(22);
}
inline void DeliverToEsme::clear_submit_msgid() {
  submit_msgid_ = 0;
  _clear_bit(22);
}
inline ::google::protobuf::int32 DeliverToEsme::submit_msgid() const {
  return submit_msgid_;
}
inline void DeliverToEsme::set_submit_msgid(::google::protobuf::int32 value) {
  _set_bit(22);
  submit_msgid_ = value;
}

// optional int32 session_endtime = 24;
inline bool DeliverToEsme::has_session_endtime() const {
  return _has_bit(23);
}
inline void DeliverToEsme::clear_session_endtime() {
  session_endtime_ = 0;
  _clear_bit(23);
}
inline ::google::protobuf::int32 DeliverToEsme::session_endtime() const {
  return session_endtime_;
}
inline void DeliverToEsme::set_session_endtime(::google::protobuf::int32 value) {
  _set_bit(23);
  session_endtime_ = value;
}

// optional int32 sender_sessionid = 25;
inline bool DeliverToEsme::has_sender_sessionid() const {
  return _has_bit(24);
}
inline void DeliverToEsme::clear_sender_sessionid() {
  sender_sessionid_ = 0;
  _clear_bit(24);
}
inline ::google::protobuf::int32 DeliverToEsme::sender_sessionid() const {
  return sender_sessionid_;
}
inline void DeliverToEsme::set_sender_sessionid(::google::protobuf::int32 value) {
  _set_bit(24);
  sender_sessionid_ = value;
}

// optional int32 receiver_sessionid = 26;
inline bool DeliverToEsme::has_receiver_sessionid() const {
  return _has_bit(25);
}
inline void DeliverToEsme::clear_receiver_sessionid() {
  receiver_sessionid_ = 0;
  _clear_bit(25);
}
inline ::google::protobuf::int32 DeliverToEsme::receiver_sessionid() const {
  return receiver_sessionid_;
}
inline void DeliverToEsme::set_receiver_sessionid(::google::protobuf::int32 value) {
  _set_bit(25);
  receiver_sessionid_ = value;
}

// optional int32 charging_status = 27;
inline bool DeliverToEsme::has_charging_status() const {
  return _has_bit(26);
}
inline void DeliverToEsme::clear_charging_status() {
  charging_status_ = 0;
  _clear_bit(26);
}
inline ::google::protobuf::int32 DeliverToEsme::charging_status() const {
  return charging_status_;
}
inline void DeliverToEsme::set_charging_status(::google::protobuf::int32 value) {
  _set_bit(26);
  charging_status_ = value;
}

// optional string service_url = 28;
inline bool DeliverToEsme::has_service_url() const {
  return _has_bit(27);
}
inline void DeliverToEsme::clear_service_url() {
  if (service_url_ != &_default_service_url_) {
    service_url_->clear();
  }
  _clear_bit(27);
}
inline const ::std::string& DeliverToEsme::service_url() const {
  return *service_url_;
}
inline void DeliverToEsme::set_service_url(const ::std::string& value) {
  _set_bit(27);
  if (service_url_ == &_default_service_url_) {
    service_url_ = new ::std::string;
  }
  service_url_->assign(value);
}
inline void DeliverToEsme::set_service_url(const char* value) {
  _set_bit(27);
  if (service_url_ == &_default_service_url_) {
    service_url_ = new ::std::string;
  }
  service_url_->assign(value);
}
inline void DeliverToEsme::set_service_url(const char* value, size_t size) {
  _set_bit(27);
  if (service_url_ == &_default_service_url_) {
    service_url_ = new ::std::string;
  }
  service_url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_service_url() {
  _set_bit(27);
  if (service_url_ == &_default_service_url_) {
    service_url_ = new ::std::string;
  }
  return service_url_;
}

// optional string service_url_status = 29;
inline bool DeliverToEsme::has_service_url_status() const {
  return _has_bit(28);
}
inline void DeliverToEsme::clear_service_url_status() {
  if (service_url_status_ != &_default_service_url_status_) {
    service_url_status_->clear();
  }
  _clear_bit(28);
}
inline const ::std::string& DeliverToEsme::service_url_status() const {
  return *service_url_status_;
}
inline void DeliverToEsme::set_service_url_status(const ::std::string& value) {
  _set_bit(28);
  if (service_url_status_ == &_default_service_url_status_) {
    service_url_status_ = new ::std::string;
  }
  service_url_status_->assign(value);
}
inline void DeliverToEsme::set_service_url_status(const char* value) {
  _set_bit(28);
  if (service_url_status_ == &_default_service_url_status_) {
    service_url_status_ = new ::std::string;
  }
  service_url_status_->assign(value);
}
inline void DeliverToEsme::set_service_url_status(const char* value, size_t size) {
  _set_bit(28);
  if (service_url_status_ == &_default_service_url_status_) {
    service_url_status_ = new ::std::string;
  }
  service_url_status_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_service_url_status() {
  _set_bit(28);
  if (service_url_status_ == &_default_service_url_status_) {
    service_url_status_ = new ::std::string;
  }
  return service_url_status_;
}

// optional int32 retry_count = 30 [default = 0];
inline bool DeliverToEsme::has_retry_count() const {
  return _has_bit(29);
}
inline void DeliverToEsme::clear_retry_count() {
  retry_count_ = 0;
  _clear_bit(29);
}
inline ::google::protobuf::int32 DeliverToEsme::retry_count() const {
  return retry_count_;
}
inline void DeliverToEsme::set_retry_count(::google::protobuf::int32 value) {
  _set_bit(29);
  retry_count_ = value;
}

// optional string user_input = 31;
inline bool DeliverToEsme::has_user_input() const {
  return _has_bit(30);
}
inline void DeliverToEsme::clear_user_input() {
  if (user_input_ != &_default_user_input_) {
    user_input_->clear();
  }
  _clear_bit(30);
}
inline const ::std::string& DeliverToEsme::user_input() const {
  return *user_input_;
}
inline void DeliverToEsme::set_user_input(const ::std::string& value) {
  _set_bit(30);
  if (user_input_ == &_default_user_input_) {
    user_input_ = new ::std::string;
  }
  user_input_->assign(value);
}
inline void DeliverToEsme::set_user_input(const char* value) {
  _set_bit(30);
  if (user_input_ == &_default_user_input_) {
    user_input_ = new ::std::string;
  }
  user_input_->assign(value);
}
inline void DeliverToEsme::set_user_input(const char* value, size_t size) {
  _set_bit(30);
  if (user_input_ == &_default_user_input_) {
    user_input_ = new ::std::string;
  }
  user_input_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_user_input() {
  _set_bit(30);
  if (user_input_ == &_default_user_input_) {
    user_input_ = new ::std::string;
  }
  return user_input_;
}

// optional string sms_submit_msgid = 32;
inline bool DeliverToEsme::has_sms_submit_msgid() const {
  return _has_bit(31);
}
inline void DeliverToEsme::clear_sms_submit_msgid() {
  if (sms_submit_msgid_ != &_default_sms_submit_msgid_) {
    sms_submit_msgid_->clear();
  }
  _clear_bit(31);
}
inline const ::std::string& DeliverToEsme::sms_submit_msgid() const {
  return *sms_submit_msgid_;
}
inline void DeliverToEsme::set_sms_submit_msgid(const ::std::string& value) {
  _set_bit(31);
  if (sms_submit_msgid_ == &_default_sms_submit_msgid_) {
    sms_submit_msgid_ = new ::std::string;
  }
  sms_submit_msgid_->assign(value);
}
inline void DeliverToEsme::set_sms_submit_msgid(const char* value) {
  _set_bit(31);
  if (sms_submit_msgid_ == &_default_sms_submit_msgid_) {
    sms_submit_msgid_ = new ::std::string;
  }
  sms_submit_msgid_->assign(value);
}
inline void DeliverToEsme::set_sms_submit_msgid(const char* value, size_t size) {
  _set_bit(31);
  if (sms_submit_msgid_ == &_default_sms_submit_msgid_) {
    sms_submit_msgid_ = new ::std::string;
  }
  sms_submit_msgid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeliverToEsme::mutable_sms_submit_msgid() {
  _set_bit(31);
  if (sms_submit_msgid_ == &_default_sms_submit_msgid_) {
    sms_submit_msgid_ = new ::std::string;
  }
  return sms_submit_msgid_;
}

#endif  // PROTOBUF_DeliverToEsme_2eproto__INCLUDED
