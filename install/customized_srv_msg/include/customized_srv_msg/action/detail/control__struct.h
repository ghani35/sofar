// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_H_
#define CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_Goal
{
  float x[2];
} customized_srv_msg__action__Control_Goal;

// Struct for a sequence of customized_srv_msg__action__Control_Goal.
typedef struct customized_srv_msg__action__Control_Goal__Sequence
{
  customized_srv_msg__action__Control_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_Result
{
  bool status;
} customized_srv_msg__action__Control_Result;

// Struct for a sequence of customized_srv_msg__action__Control_Result.
typedef struct customized_srv_msg__action__Control_Result__Sequence
{
  customized_srv_msg__action__Control_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_distance'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_Feedback
{
  rosidl_runtime_c__float__Sequence goal_distance;
} customized_srv_msg__action__Control_Feedback;

// Struct for a sequence of customized_srv_msg__action__Control_Feedback.
typedef struct customized_srv_msg__action__Control_Feedback__Sequence
{
  customized_srv_msg__action__Control_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "customized_srv_msg/action/detail/control__struct.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_srv_msg__action__Control_Goal goal;
} customized_srv_msg__action__Control_SendGoal_Request;

// Struct for a sequence of customized_srv_msg__action__Control_SendGoal_Request.
typedef struct customized_srv_msg__action__Control_SendGoal_Request__Sequence
{
  customized_srv_msg__action__Control_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} customized_srv_msg__action__Control_SendGoal_Response;

// Struct for a sequence of customized_srv_msg__action__Control_SendGoal_Response.
typedef struct customized_srv_msg__action__Control_SendGoal_Response__Sequence
{
  customized_srv_msg__action__Control_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} customized_srv_msg__action__Control_GetResult_Request;

// Struct for a sequence of customized_srv_msg__action__Control_GetResult_Request.
typedef struct customized_srv_msg__action__Control_GetResult_Request__Sequence
{
  customized_srv_msg__action__Control_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_GetResult_Response
{
  int8_t status;
  customized_srv_msg__action__Control_Result result;
} customized_srv_msg__action__Control_GetResult_Response;

// Struct for a sequence of customized_srv_msg__action__Control_GetResult_Response.
typedef struct customized_srv_msg__action__Control_GetResult_Response__Sequence
{
  customized_srv_msg__action__Control_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"

// Struct defined in action/Control in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Control_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_srv_msg__action__Control_Feedback feedback;
} customized_srv_msg__action__Control_FeedbackMessage;

// Struct for a sequence of customized_srv_msg__action__Control_FeedbackMessage.
typedef struct customized_srv_msg__action__Control_FeedbackMessage__Sequence
{
  customized_srv_msg__action__Control_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Control_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_H_
