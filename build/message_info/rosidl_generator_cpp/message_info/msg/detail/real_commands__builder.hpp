// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/RealCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__BUILDER_HPP_

#include "message_info/msg/detail/real_commands__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_RealCommands_degree_ball_robot
{
public:
  explicit Init_RealCommands_degree_ball_robot(::message_info::msg::RealCommands & msg)
  : msg_(msg)
  {}
  ::message_info::msg::RealCommands degree_ball_robot(::message_info::msg::RealCommands::_degree_ball_robot_type arg)
  {
    msg_.degree_ball_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::RealCommands msg_;
};

class Init_RealCommands_ball_catch
{
public:
  Init_RealCommands_ball_catch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RealCommands_degree_ball_robot ball_catch(::message_info::msg::RealCommands::_ball_catch_type arg)
  {
    msg_.ball_catch = std::move(arg);
    return Init_RealCommands_degree_ball_robot(msg_);
  }

private:
  ::message_info::msg::RealCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::RealCommands>()
{
  return message_info::msg::builder::Init_RealCommands_ball_catch();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__BUILDER_HPP_
