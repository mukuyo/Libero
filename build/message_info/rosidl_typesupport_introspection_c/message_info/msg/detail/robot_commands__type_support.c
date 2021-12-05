// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/robot_commands__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/robot_commands__functions.h"
#include "message_info/msg/detail/robot_commands__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "message_info/msg/robot_command.h"
// Member `commands`
#include "message_info/msg/detail/robot_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__RobotCommands__init(message_memory);
}

void RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_fini_function(void * message_memory)
{
  message_info__msg__RobotCommands__fini(message_memory);
}

size_t RobotCommands__rosidl_typesupport_introspection_c__size_function__RobotCommand__commands(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * RobotCommands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__commands(
  const void * untyped_member, size_t index)
{
  const message_info__msg__RobotCommand ** member =
    (const message_info__msg__RobotCommand **)(untyped_member);
  return &(*member)[index];
}

void * RobotCommands__rosidl_typesupport_introspection_c__get_function__RobotCommand__commands(
  void * untyped_member, size_t index)
{
  message_info__msg__RobotCommand ** member =
    (message_info__msg__RobotCommand **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RobotCommands, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RobotCommands, is_yellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RobotCommands, commands),  // bytes offset in struct
    NULL,  // default value
    RobotCommands__rosidl_typesupport_introspection_c__size_function__RobotCommand__commands,  // size() function pointer
    RobotCommands__rosidl_typesupport_introspection_c__get_const_function__RobotCommand__commands,  // get_const(index) function pointer
    RobotCommands__rosidl_typesupport_introspection_c__get_function__RobotCommand__commands,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_members = {
  "message_info__msg",  // message namespace
  "RobotCommands",  // message name
  3,  // number of fields
  sizeof(message_info__msg__RobotCommands),
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array,  // message members
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle = {
  0,
  &RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, RobotCommands)() {
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, RobotCommand)();
  if (!RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle.typesupport_identifier) {
    RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotCommands__rosidl_typesupport_introspection_c__RobotCommands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
