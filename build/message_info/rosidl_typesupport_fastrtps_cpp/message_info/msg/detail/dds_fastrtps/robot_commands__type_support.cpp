// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/robot_commands__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/robot_commands__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::RobotCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::RobotCommand &);
size_t get_serialized_size(
  const message_info::msg::RobotCommand &,
  size_t current_alignment);
size_t
max_serialized_size_RobotCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info


namespace message_info
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_serialize(
  const message_info::msg::RobotCommands & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: is_yellow
  cdr << (ros_message.is_yellow ? true : false);
  // Member: commands
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.commands[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::RobotCommands & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: is_yellow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_yellow = tmp ? true : false;
  }

  // Member: commands
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.commands[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::RobotCommands & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: is_yellow
  {
    size_t item_size = sizeof(ros_message.is_yellow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commands
  {
    size_t array_size = 16;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.commands[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_RobotCommands(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: is_yellow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: commands
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotCommands__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::RobotCommands *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotCommands__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::RobotCommands *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotCommands__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::RobotCommands *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotCommands__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotCommands(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotCommands__callbacks = {
  "message_info::msg",
  "RobotCommands",
  _RobotCommands__cdr_serialize,
  _RobotCommands__cdr_deserialize,
  _RobotCommands__get_serialized_size,
  _RobotCommands__max_serialized_size
};

static rosidl_message_type_support_t _RobotCommands__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotCommands__callbacks,
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
get_message_type_support_handle<message_info::msg::RobotCommands>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_RobotCommands__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, RobotCommands)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_RobotCommands__handle;
}

#ifdef __cplusplus
}
#endif
