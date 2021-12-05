// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "message_info/msg/detail/robot_commands__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::RobotCommands & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::RobotCommands & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_RobotCommands(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message_info

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, RobotCommands)();

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
