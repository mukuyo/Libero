// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/robot_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/robot_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace message_info
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_serialize(
  const message_info::msg::RobotCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;
  // Member: vel_surge
  cdr << ros_message.vel_surge;
  // Member: vel_sway
  cdr << ros_message.vel_sway;
  // Member: vel_angular
  cdr << ros_message.vel_angular;
  // Member: kick_power
  cdr << ros_message.kick_power;
  // Member: chip_enable
  cdr << (ros_message.chip_enable ? true : false);
  // Member: dribble_power
  cdr << ros_message.dribble_power;
  // Member: is_yellow
  cdr << (ros_message.is_yellow ? true : false);
  // Member: finish
  cdr << (ros_message.finish ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::RobotCommand & ros_message)
{
  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: vel_surge
  cdr >> ros_message.vel_surge;

  // Member: vel_sway
  cdr >> ros_message.vel_sway;

  // Member: vel_angular
  cdr >> ros_message.vel_angular;

  // Member: kick_power
  cdr >> ros_message.kick_power;

  // Member: chip_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.chip_enable = tmp ? true : false;
  }

  // Member: dribble_power
  cdr >> ros_message.dribble_power;

  // Member: is_yellow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_yellow = tmp ? true : false;
  }

  // Member: finish
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.finish = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::RobotCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_surge
  {
    size_t item_size = sizeof(ros_message.vel_surge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_sway
  {
    size_t item_size = sizeof(ros_message.vel_sway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_angular
  {
    size_t item_size = sizeof(ros_message.vel_angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kick_power
  {
    size_t item_size = sizeof(ros_message.kick_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chip_enable
  {
    size_t item_size = sizeof(ros_message.chip_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dribble_power
  {
    size_t item_size = sizeof(ros_message.dribble_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_yellow
  {
    size_t item_size = sizeof(ros_message.is_yellow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: finish
  {
    size_t item_size = sizeof(ros_message.finish);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_RobotCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_surge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_sway
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vel_angular
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: kick_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chip_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dribble_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_yellow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: finish
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RobotCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::RobotCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::RobotCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::RobotCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotCommand__callbacks = {
  "message_info::msg",
  "RobotCommand",
  _RobotCommand__cdr_serialize,
  _RobotCommand__cdr_deserialize,
  _RobotCommand__get_serialized_size,
  _RobotCommand__max_serialized_size
};

static rosidl_message_type_support_t _RobotCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message_info

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message_info
const rosidl_message_type_support_t *
get_message_type_support_handle<message_info::msg::RobotCommand>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_RobotCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, RobotCommand)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_RobotCommand__handle;
}

#ifdef __cplusplus
}
#endif
