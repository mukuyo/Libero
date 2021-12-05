// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__TRAITS_HPP_

#include "message_info/msg/detail/robot_commands__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'commands'
#include "message_info/msg/detail/robot_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::RobotCommands>()
{
  return "message_info::msg::RobotCommands";
}

template<>
inline const char * name<message_info::msg::RobotCommands>()
{
  return "message_info/msg/RobotCommands";
}

template<>
struct has_fixed_size<message_info::msg::RobotCommands>
  : std::integral_constant<bool, has_fixed_size<message_info::msg::RobotCommand>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<message_info::msg::RobotCommands>
  : std::integral_constant<bool, has_bounded_size<message_info::msg::RobotCommand>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<message_info::msg::RobotCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__TRAITS_HPP_
