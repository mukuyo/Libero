// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/robot_commands__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/robot_commands__struct.h"
#include "message_info/msg/detail/robot_commands__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "message_info/msg/detail/robot_command__functions.h"  // commands
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_message_info__msg__RobotCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__RobotCommand(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RobotCommand)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RobotCommands__ros_msg_type = message_info__msg__RobotCommands;

static bool _RobotCommands__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotCommands__ros_msg_type * ros_message = static_cast<const _RobotCommands__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: is_yellow
  {
    cdr << (ros_message->is_yellow ? true : false);
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RobotCommand
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->commands;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _RobotCommands__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotCommands__ros_msg_type * ros_message = static_cast<_RobotCommands__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: is_yellow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_yellow = tmp ? true : false;
  }

  // Field name: commands
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RobotCommand
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->commands;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__RobotCommands(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotCommands__ros_msg_type * ros_message = static_cast<const _RobotCommands__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name is_yellow
  {
    size_t item_size = sizeof(ros_message->is_yellow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name commands
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->commands;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__RobotCommand(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotCommands__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__RobotCommands(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__RobotCommands(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: is_yellow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: commands
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__RobotCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotCommands__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__RobotCommands(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotCommands = {
  "message_info::msg",
  "RobotCommands",
  _RobotCommands__cdr_serialize,
  _RobotCommands__cdr_deserialize,
  _RobotCommands__get_serialized_size,
  _RobotCommands__max_serialized_size
};

static rosidl_message_type_support_t _RobotCommands__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotCommands,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RobotCommands)() {
  return &_RobotCommands__type_support;
}

#if defined(__cplusplus)
}
#endif
