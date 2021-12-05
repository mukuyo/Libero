// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/RobotCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'commands'
#include "message_info/msg/detail/robot_command__struct.h"

// Struct defined in msg/RobotCommands in the package message_info.
typedef struct message_info__msg__RobotCommands
{
  std_msgs__msg__Header header;
  bool is_yellow;
  message_info__msg__RobotCommand commands[16];
} message_info__msg__RobotCommands;

// Struct for a sequence of message_info__msg__RobotCommands.
typedef struct message_info__msg__RobotCommands__Sequence
{
  message_info__msg__RobotCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__RobotCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__ROBOT_COMMANDS__STRUCT_H_
