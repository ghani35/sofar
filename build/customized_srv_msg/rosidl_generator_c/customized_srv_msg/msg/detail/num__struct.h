// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customized_srv_msg:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__STRUCT_H_
#define CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package customized_srv_msg.
typedef struct customized_srv_msg__msg__Num
{
  int64_t num;
} customized_srv_msg__msg__Num;

// Struct for a sequence of customized_srv_msg__msg__Num.
typedef struct customized_srv_msg__msg__Num__Sequence
{
  customized_srv_msg__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__STRUCT_H_
