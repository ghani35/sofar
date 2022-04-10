// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
#include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "customized_srv_msg/action/detail/control__functions.h"
#include "customized_srv_msg/action/detail/control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_Goal__init(message_memory);
}

void Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_member_array[1] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_Goal, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_Goal",  // message name
  1,  // number of fields
  sizeof(customized_srv_msg__action__Control_Goal),
  Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_member_array,  // message members
  Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_type_support_handle = {
  0,
  &Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Goal)() {
  if (!Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_type_support_handle.typesupport_identifier) {
    Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_Goal__rosidl_typesupport_introspection_c__Control_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Control_Result__rosidl_typesupport_introspection_c__Control_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_Result__init(message_memory);
}

void Control_Result__rosidl_typesupport_introspection_c__Control_Result_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_Result, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_Result",  // message name
  1,  // number of fields
  sizeof(customized_srv_msg__action__Control_Result),
  Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_member_array,  // message members
  Control_Result__rosidl_typesupport_introspection_c__Control_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_Result__rosidl_typesupport_introspection_c__Control_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_type_support_handle = {
  0,
  &Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Result)() {
  if (!Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_type_support_handle.typesupport_identifier) {
    Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_Result__rosidl_typesupport_introspection_c__Control_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `goal_distance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_Feedback__init(message_memory);
}

void Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_member_array[1] = {
  {
    "goal_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_Feedback, goal_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_Feedback",  // message name
  1,  // number of fields
  sizeof(customized_srv_msg__action__Control_Feedback),
  Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_member_array,  // message members
  Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_type_support_handle = {
  0,
  &Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Feedback)() {
  if (!Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_type_support_handle.typesupport_identifier) {
    Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_Feedback__rosidl_typesupport_introspection_c__Control_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "customized_srv_msg/action/control.h"
// Member `goal`
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_SendGoal_Request__init(message_memory);
}

void Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(customized_srv_msg__action__Control_SendGoal_Request),
  Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_member_array,  // message members
  Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_type_support_handle = {
  0,
  &Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Request)() {
  Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Goal)();
  if (!Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_SendGoal_Request__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_SendGoal_Response__init(message_memory);
}

void Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(customized_srv_msg__action__Control_SendGoal_Response),
  Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_member_array,  // message members
  Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_type_support_handle = {
  0,
  &Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Response)() {
  Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_SendGoal_Response__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_members = {
  "customized_srv_msg__action",  // service namespace
  "Control_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_type_support_handle = {
  0,
  &customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal)() {
  if (!customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_type_support_handle.typesupport_identifier) {
    customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Response)()->data;
  }

  return &customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_GetResult_Request__init(message_memory);
}

void Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(customized_srv_msg__action__Control_GetResult_Request),
  Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_member_array,  // message members
  Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_type_support_handle = {
  0,
  &Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Request)() {
  Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_GetResult_Request__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "customized_srv_msg/action/control.h"
// Member `result`
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_GetResult_Response__init(message_memory);
}

void Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(customized_srv_msg__action__Control_GetResult_Response),
  Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_member_array,  // message members
  Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_type_support_handle = {
  0,
  &Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Response)() {
  Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Result)();
  if (!Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_GetResult_Response__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_members = {
  "customized_srv_msg__action",  // service namespace
  "Control_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_type_support_handle = {
  0,
  &customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult)() {
  if (!customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_type_support_handle.typesupport_identifier) {
    customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Response)()->data;
  }

  return &customized_srv_msg__action__detail__control__rosidl_typesupport_introspection_c__Control_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "customized_srv_msg/action/detail/control__functions.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "customized_srv_msg/action/control.h"
// Member `feedback`
// already included above
// #include "customized_srv_msg/action/detail/control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  customized_srv_msg__action__Control_FeedbackMessage__init(message_memory);
}

void Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_fini_function(void * message_memory)
{
  customized_srv_msg__action__Control_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customized_srv_msg__action__Control_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_members = {
  "customized_srv_msg__action",  // message namespace
  "Control_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(customized_srv_msg__action__Control_FeedbackMessage),
  Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_member_array,  // message members
  Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_type_support_handle = {
  0,
  &Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_FeedbackMessage)() {
  Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Feedback)();
  if (!Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Control_FeedbackMessage__rosidl_typesupport_introspection_c__Control_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
