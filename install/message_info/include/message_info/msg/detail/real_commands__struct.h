// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/RealCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RealCommands in the package message_info.
typedef struct message_info__msg__RealCommands
{
  int64_t ball_catch;
  double degree_ball_robot;
} message_info__msg__RealCommands;

// Struct for a sequence of message_info__msg__RealCommands.
typedef struct message_info__msg__RealCommands__Sequence
{
  message_info__msg__RealCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__RealCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_H_
