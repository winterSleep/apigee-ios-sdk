/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_crash_5freport_2eproto__INCLUDED
#define PROTOBUF_C_crash_5freport_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

Apigee_PROTOBUF_C_BEGIN_DECLS


typedef struct Apigee__Plcrash__CrashReport Apigee_Plcrash__CrashReport;
typedef struct Apigee__Plcrash__CrashReport__Processor Apigee_Plcrash__CrashReport__Processor;
typedef struct Apigee__Plcrash__CrashReport__SystemInfo Apigee_Plcrash__CrashReport__SystemInfo;
typedef struct Apigee__Plcrash__CrashReport__ApplicationInfo Apigee_Plcrash__CrashReport__ApplicationInfo;
typedef struct Apigee__Plcrash__CrashReport__Thread Apigee_Plcrash__CrashReport__Thread;
typedef struct Apigee__Plcrash__CrashReport__Thread__StackFrame Apigee_Plcrash__CrashReport__Thread__StackFrame;
typedef struct Apigee__Plcrash__CrashReport__Thread__RegisterValue Apigee_Plcrash__CrashReport__Thread__RegisterValue;
typedef struct Apigee__Plcrash__CrashReport__BinaryImage Apigee_Plcrash__CrashReport__BinaryImage;
typedef struct Apigee__Plcrash__CrashReport__Exception Apigee_Plcrash__CrashReport__Exception;
typedef struct Apigee__Plcrash__CrashReport__Signal Apigee_Plcrash__CrashReport__Signal;
typedef struct Apigee__Plcrash__CrashReport__ProcessInfo Apigee_Plcrash__CrashReport__ProcessInfo;
typedef struct Apigee__Plcrash__CrashReport__MachineInfo Apigee_Plcrash__CrashReport__MachineInfo;


/* --- enums --- */

typedef enum Apigee__Plcrash__CrashReport__Processor__TypeEncoding {
  Apigee_PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_UNKNOWN = 0,
  Apigee_PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_MACH = 1
} Apigee_Plcrash__CrashReport__Processor__TypeEncoding;
typedef enum Apigee__Plcrash__CrashReport__SystemInfo__OperatingSystem {
  Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__MAC_OS_X = 0,
  Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__IPHONE_OS = 1,
  Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__IPHONE_SIMULATOR = 2,
  Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__OS_UNKNOWN = 3
} Apigee_Plcrash__CrashReport__SystemInfo__OperatingSystem;
typedef enum Apigee__Plcrash__Architecture {
  Apigee_PLCRASH__ARCHITECTURE__X86_32 = 0,
  Apigee_PLCRASH__ARCHITECTURE__X86_64 = 1,
  Apigee_PLCRASH__ARCHITECTURE__ARMV6 = 2,
  Apigee_PLCRASH__ARCHITECTURE__PPC = 3,
  Apigee_PLCRASH__ARCHITECTURE__PPC64 = 4,
  Apigee_PLCRASH__ARCHITECTURE__ARMV7 = 5,
  Apigee_PLCRASH__ARCHITECTURE__ARCHITECTURE_UNKNOWN = 6
} Apigee_Plcrash__Architecture;

/* --- messages --- */

struct  Apigee__Plcrash__CrashReport__Processor
{
  Apigee_ProtobufCMessage base;
  Apigee_protobuf_c_boolean has_encoding;
  Apigee_Plcrash__CrashReport__Processor__TypeEncoding encoding;
  uint64_t type;
  uint64_t subtype;
};
#define Apigee_PLCRASH__CRASH_REPORT__PROCESSOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__processor__descriptor) \
    , 0,Apigee_PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_UNKNOWN, 0, 0 }


struct  Apigee__Plcrash__CrashReport__SystemInfo
{
  Apigee_ProtobufCMessage base;
  Apigee_protobuf_c_boolean has_operating_system;
  Apigee_Plcrash__CrashReport__SystemInfo__OperatingSystem operating_system;
  char *os_version;
  Apigee_Plcrash__Architecture architecture;
  int64_t timestamp;
  char *os_build;
};
#define Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__system_info__descriptor) \
    , 0,Apigee_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__OS_UNKNOWN, NULL, Apigee_PLCRASH__ARCHITECTURE__ARCHITECTURE_UNKNOWN, 0, NULL }


struct  Apigee__Plcrash__CrashReport__ApplicationInfo
{
  Apigee_ProtobufCMessage base;
  char *identifier;
  char *version;
};
#define Apigee_PLCRASH__CRASH_REPORT__APPLICATION_INFO__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__application_info__descriptor) \
    , NULL, NULL }


struct  Apigee__Plcrash__CrashReport__Thread__StackFrame
{
  Apigee_ProtobufCMessage base;
  uint64_t pc;
};
#define Apigee_PLCRASH__CRASH_REPORT__THREAD__STACK_FRAME__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__thread__stack_frame__descriptor) \
    , 0 }


struct  Apigee__Plcrash__CrashReport__Thread__RegisterValue
{
  Apigee_ProtobufCMessage base;
  char *name;
  uint64_t value;
};
#define Apigee_PLCRASH__CRASH_REPORT__THREAD__REGISTER_VALUE__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__thread__register_value__descriptor) \
    , NULL, 0 }


struct  Apigee__Plcrash__CrashReport__Thread
{
  Apigee_ProtobufCMessage base;
  uint32_t thread_number;
  size_t n_frames;
  Apigee_Plcrash__CrashReport__Thread__StackFrame **frames;
  Apigee_protobuf_c_boolean crashed;
  size_t n_registers;
  Apigee_Plcrash__CrashReport__Thread__RegisterValue **registers;
};
#define Apigee_PLCRASH__CRASH_REPORT__THREAD__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__thread__descriptor) \
    , 0, 0,NULL, 0, 0,NULL }


struct  Apigee__Plcrash__CrashReport__BinaryImage
{
  Apigee_ProtobufCMessage base;
  uint64_t base_address;
  uint64_t size;
  char *name;
  Apigee_protobuf_c_boolean has_uuid;
  Apigee_ProtobufCBinaryData uuid;
  Apigee_Plcrash__CrashReport__Processor *code_type;
};
#define Apigee_PLCRASH__CRASH_REPORT__BINARY_IMAGE__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__binary_image__descriptor) \
    , 0, 0, NULL, 0,{0,NULL}, NULL }


struct  Apigee__Plcrash__CrashReport__Exception
{
  Apigee_ProtobufCMessage base;
  char *name;
  char *reason;
  size_t n_frames;
  Apigee_Plcrash__CrashReport__Thread__StackFrame **frames;
};
#define Apigee_PLCRASH__CRASH_REPORT__EXCEPTION__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__exception__descriptor) \
    , NULL, NULL, 0,NULL }


struct  Apigee__Plcrash__CrashReport__Signal
{
  Apigee_ProtobufCMessage base;
  char *name;
  char *code;
  uint64_t address;
};
#define Apigee_PLCRASH__CRASH_REPORT__SIGNAL__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__signal__descriptor) \
    , NULL, NULL, 0 }


struct  Apigee__Plcrash__CrashReport__ProcessInfo
{
  Apigee_ProtobufCMessage base;
  char *process_name;
  uint32_t process_id;
  char *process_path;
  char *parent_process_name;
  uint32_t parent_process_id;
  Apigee_protobuf_c_boolean native;
};
#define Apigee_PLCRASH__CRASH_REPORT__PROCESS_INFO__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__process_info__descriptor) \
    , NULL, 0, NULL, NULL, 0, 0 }


struct  Apigee__Plcrash__CrashReport__MachineInfo
{
  Apigee_ProtobufCMessage base;
  char *model;
  Apigee_Plcrash__CrashReport__Processor *processor;
  uint32_t processor_count;
  uint32_t logical_processor_count;
};
#define Apigee_PLCRASH__CRASH_REPORT__MACHINE_INFO__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__machine_info__descriptor) \
    , NULL, NULL, 0, 0 }


struct  Apigee__Plcrash__CrashReport
{
  Apigee_ProtobufCMessage base;
  Apigee_Plcrash__CrashReport__SystemInfo *system_info;
  Apigee_Plcrash__CrashReport__ApplicationInfo *application_info;
  size_t n_threads;
  Apigee_Plcrash__CrashReport__Thread **threads;
  size_t n_binary_images;
  Apigee_Plcrash__CrashReport__BinaryImage **binary_images;
  Apigee_Plcrash__CrashReport__Exception *exception;
  Apigee_Plcrash__CrashReport__Signal *signal;
  Apigee_Plcrash__CrashReport__ProcessInfo *process_info;
  Apigee_Plcrash__CrashReport__MachineInfo *machine_info;
};
#define Apigee_PLCRASH__CRASH_REPORT__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&Apigee_plcrash__crash_report__descriptor) \
    , NULL, NULL, 0,NULL, 0,NULL, NULL, NULL, NULL, NULL }


/* Plcrash__CrashReport methods */
void   Apigee_plcrash__crash_report__init
                     (Apigee_Plcrash__CrashReport         *message);
size_t Apigee_plcrash__crash_report__get_packed_size
                     (const Apigee_Plcrash__CrashReport   *message);
size_t Apigee_plcrash__crash_report__pack
                     (const Apigee_Plcrash__CrashReport   *message,
                      uint8_t             *out);
size_t Apigee_plcrash__crash_report__pack_to_buffer
                     (const Apigee_Plcrash__CrashReport   *message,
                      Apigee_ProtobufCBuffer     *buffer);
Apigee_Plcrash__CrashReport *
       Apigee_plcrash__crash_report__unpack
                     (Apigee_ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   Apigee_plcrash__crash_report__free_unpacked
                     (Apigee_Plcrash__CrashReport *message,
                      Apigee_ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Apigee_Plcrash__CrashReport__Processor_Closure)
                 (const Apigee_Plcrash__CrashReport__Processor *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__SystemInfo_Closure)
                 (const Apigee_Plcrash__CrashReport__SystemInfo *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__ApplicationInfo_Closure)
                 (const Apigee_Plcrash__CrashReport__ApplicationInfo *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__Thread__StackFrame_Closure)
                 (const Apigee_Plcrash__CrashReport__Thread__StackFrame *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__Thread__RegisterValue_Closure)
                 (const Apigee_Plcrash__CrashReport__Thread__RegisterValue *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__Thread_Closure)
                 (const Apigee_Plcrash__CrashReport__Thread *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__BinaryImage_Closure)
                 (const Apigee_Plcrash__CrashReport__BinaryImage *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__Exception_Closure)
                 (const Apigee_Plcrash__CrashReport__Exception *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__Signal_Closure)
                 (const Apigee_Plcrash__CrashReport__Signal *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__ProcessInfo_Closure)
                 (const Apigee_Plcrash__CrashReport__ProcessInfo *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport__MachineInfo_Closure)
                 (const Apigee_Plcrash__CrashReport__MachineInfo *message,
                  void *closure_data);
typedef void (*Apigee_Plcrash__CrashReport_Closure)
                 (const Apigee_Plcrash__CrashReport *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const Apigee_ProtobufCEnumDescriptor    Apigee_plcrash__architecture__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__processor__descriptor;
extern const Apigee_ProtobufCEnumDescriptor    Apigee_plcrash__crash_report__processor__type_encoding__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__system_info__descriptor;
extern const Apigee_ProtobufCEnumDescriptor    Apigee_plcrash__crash_report__system_info__operating_system__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__application_info__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__thread__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__thread__stack_frame__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__thread__register_value__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__binary_image__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__exception__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__signal__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__process_info__descriptor;
extern const Apigee_ProtobufCMessageDescriptor Apigee_plcrash__crash_report__machine_info__descriptor;

Apigee_PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_crash_5freport_2eproto__INCLUDED */
