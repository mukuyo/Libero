// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/RealCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/real_commands__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/real_commands__functions.h"
#include "message_info/msg/detail/real_commands__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RealCommands__rosidl_typesupport_introspection_c__RealCommands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__RealCommands__init(message_memory);
}

void RealCommands__rosidl_typesupport_introspection_c__RealCommands_fini_function(void * message_memory)
{
  message_info__msg__RealCommands__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_member_array[2] = {
  {
    "ball_catch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RealCommands, ball_catch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "degree_ball_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RealCommands, degree_ball_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_members = {
  "message_info__msg",  // message namespace
  "RealCommands",  // message name
  2,  // number of fields
  sizeof(message_info__msg__RealCommands),
  RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_member_array,  // message members
  RealCommands__rosidl_typesupport_introspection_c__RealCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  RealCommands__rosidl_typesupport_introspection_c__RealCommands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_type_support_handle = {
  0,
  &RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, RealCommands)() {
  if (!RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_type_support_handle.typesupport_identifier) {
    RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RealCommands__rosidl_typesupport_introspection_c__RealCommands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
