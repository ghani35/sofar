// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customized_srv_msg:action/Goal.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__ACTION__DETAIL__GOAL__STRUCT_H_
#define CUSTOMIZED_SRV_MSG__ACTION__DETAIL__GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_Goal
{
  rosidl_runtime_c__float__Sequence x;
} customized_srv_msg__action__Goal_Goal;

// Struct for a sequence of customized_srv_msg__action__Goal_Goal.
typedef struct customized_srv_msg__action__Goal_Goal__Sequence
{
  customized_srv_msg__action__Goal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_Result
{
  int32_t sequence;
} customized_srv_msg__action__Goal_Result;

// Struct for a sequence of customized_srv_msg__action__Goal_Result.
typedef struct customized_srv_msg__action__Goal_Result__Sequence
{
  customized_srv_msg__action__Goal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_Feedback
{
  rosidl_runtime_c__float__Sequence partial_sequence;
} customized_srv_msg__action__Goal_Feedback;

// Struct for a sequence of customized_srv_msg__action__Goal_Feedback.
typedef struct customized_srv_msg__action__Goal_Feedback__Sequence
{
  customized_srv_msg__action__Goal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "customized_srv_msg/action/detail/goal__struct.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_srv_msg__action__Goal_Goal goal;
} customized_srv_msg__action__Goal_SendGoal_Request;

// Struct for a sequence of customized_srv_msg__action__Goal_SendGoal_Request.
typedef struct customized_srv_msg__action__Goal_SendGoal_Request__Sequence
{
  customized_srv_msg__action__Goal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} customized_srv_msg__action__Goal_SendGoal_Response;

// Struct for a sequence of customized_srv_msg__action__Goal_SendGoal_Response.
typedef struct customized_srv_msg__action__Goal_SendGoal_Response__Sequence
{
  customized_srv_msg__action__Goal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} customized_srv_msg__action__Goal_GetResult_Request;

// Struct for a sequence of customized_srv_msg__action__Goal_GetResult_Request.
typedef struct customized_srv_msg__action__Goal_GetResult_Request__Sequence
{
  customized_srv_msg__action__Goal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_GetResult_Response
{
  int8_t status;
  customized_srv_msg__action__Goal_Result result;
} customized_srv_msg__action__Goal_GetResult_Response;

// Struct for a sequence of customized_srv_msg__action__Goal_GetResult_Response.
typedef struct customized_srv_msg__action__Goal_GetResult_Response__Sequence
{
  customized_srv_msg__action__Goal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.h"

// Struct defined in action/Goal in the package customized_srv_msg.
typedef struct customized_srv_msg__action__Goal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_srv_msg__action__Goal_Feedback feedback;
} customized_srv_msg__action__Goal_FeedbackMessage;

// Struct for a sequence of customized_srv_msg__action__Goal_FeedbackMessage.
typedef struct customized_srv_msg__action__Goal_FeedbackMessage__Sequence
{
  customized_srv_msg__action__Goal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_srv_msg__action__Goal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_SRV_MSG__ACTION__DETAIL__GOAL__STRUCT_H_
