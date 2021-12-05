// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/robot_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/robot_command__struct.h"
#include "message_info/msg/detail/robot_command__functions.h"
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


// forward declare type support functions


using _RobotCommand__ros_msg_type = message_info__msg__RobotCommand;

static bool _RobotCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotCommand__ros_msg_type * ros_message = static_cast<const _RobotCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: vel_surge
  {
    cdr << ros_message->vel_surge;
  }

  // Field name: vel_sway
  {
    cdr << ros_message->vel_sway;
  }

  // Field name: vel_angular
  {
    cdr << ros_message->vel_angular;
  }

  // Field name: kick_power
  {
    cdr << ros_message->kick_power;
  }

  // Field name: chip_enable
  {
    cdr << (ros_message->chip_enable ? true : false);
  }

  // Field name: dribble_power
  {
    cdr << ros_message->dribble_power;
  }

  // Field name: is_yellow
  {
    cdr << (ros_message->is_yellow ? true : false);
  }

  // Field name: finish
  {
    cdr << (ros_message->finish ? true : false);
  }

  return true;
}

static bool _RobotCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotCommand__ros_msg_type * ros_message = static_cast<_RobotCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: vel_surge
  {
    cdr >> ros_message->vel_surge;
  }

  // Field name: vel_sway
  {
    cdr >> ros_message->vel_sway;
  }

  // Field name: vel_angular
  {
    cdr >> ros_message->vel_angular;
  }

  // Field name: kick_power
  {
    cdr >> ros_message->kick_power;
  }

  // Field name: chip_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->chip_enable = tmp ? true : false;
  }

  // Field name: dribble_power
  {
    cdr >> ros_message->dribble_power;
  }

  // Field name: is_yellow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_yellow = tmp ? true : false;
  }

  // Field name: finish
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->finish = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__RobotCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotCommand__ros_msg_type * ros_message = static_cast<const _RobotCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_surge
  {
    size_t item_size = sizeof(ros_message->vel_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_sway
  {
    size_t item_size = sizeof(ros_message->vel_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_angular
  {
    size_t item_size = sizeof(ros_message->vel_angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kick_power
  {
    size_t item_size = sizeof(ros_message->kick_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chip_enable
  {
    size_t item_size = sizeof(ros_message->chip_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dribble_power
  {
    size_t item_size = sizeof(ros_message->dribble_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_yellow
  {
    size_t item_size = sizeof(ros_message->is_yellow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finish
  {
    size_t item_size = sizeof(ros_message->finish);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__RobotCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__RobotCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_surge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_sway
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel_angular
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kick_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: chip_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dribble_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: is_yellow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: finish
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__RobotCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotCommand = {
  "message_info::msg",
  "RobotCommand",
  _RobotCommand__cdr_serialize,
  _RobotCommand__cdr_deserialize,
  _RobotCommand__get_serialized_size,
  _RobotCommand__max_serialized_size
};

static rosidl_message_type_support_t _RobotCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RobotCommand)() {
  return &_RobotCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
