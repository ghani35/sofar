// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
#include "customized_srv_msg/action/detail/control__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Goal_type_support_ids_t;

static const _Control_Goal_type_support_ids_t _Control_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Goal_type_support_symbol_names_t _Control_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Goal)),
  }
};

typedef struct _Control_Goal_type_support_data_t
{
  void * data[2];
} _Control_Goal_type_support_data_t;

static _Control_Goal_type_support_data_t _Control_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Goal_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_Goal)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Result_type_support_ids_t;

static const _Control_Result_type_support_ids_t _Control_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Result_type_support_symbol_names_t _Control_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Result)),
  }
};

typedef struct _Control_Result_type_support_data_t
{
  void * data[2];
} _Control_Result_type_support_data_t;

static _Control_Result_type_support_data_t _Control_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Result_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_Result)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_Feedback_type_support_ids_t;

static const _Control_Feedback_type_support_ids_t _Control_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_Feedback_type_support_symbol_names_t _Control_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_Feedback)),
  }
};

typedef struct _Control_Feedback_type_support_data_t
{
  void * data[2];
} _Control_Feedback_type_support_data_t;

static _Control_Feedback_type_support_data_t _Control_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_Feedback_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Control_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Control_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_Feedback)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_Request_type_support_ids_t;

static const _Control_SendGoal_Request_type_support_ids_t _Control_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_Request_type_support_symbol_names_t _Control_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Request)),
  }
};

typedef struct _Control_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_Request_type_support_data_t;

static _Control_SendGoal_Request_type_support_data_t _Control_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_Request_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_SendGoal_Request)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_Response_type_support_ids_t;

static const _Control_SendGoal_Response_type_support_ids_t _Control_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_Response_type_support_symbol_names_t _Control_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal_Response)),
  }
};

typedef struct _Control_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_Response_type_support_data_t;

static _Control_SendGoal_Response_type_support_data_t _Control_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_Response_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_SendGoal_Response)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_SendGoal_type_support_ids_t;

static const _Control_SendGoal_type_support_ids_t _Control_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_SendGoal_type_support_symbol_names_t _Control_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_SendGoal)),
  }
};

typedef struct _Control_SendGoal_type_support_data_t
{
  void * data[2];
} _Control_SendGoal_type_support_data_t;

static _Control_SendGoal_type_support_data_t _Control_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_SendGoal_service_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Control_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Control_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Control_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_SendGoal)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_Request_type_support_ids_t;

static const _Control_GetResult_Request_type_support_ids_t _Control_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_Request_type_support_symbol_names_t _Control_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Request)),
  }
};

typedef struct _Control_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Control_GetResult_Request_type_support_data_t;

static _Control_GetResult_Request_type_support_data_t _Control_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_Request_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_GetResult_Request)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_Response_type_support_ids_t;

static const _Control_GetResult_Response_type_support_ids_t _Control_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_Response_type_support_symbol_names_t _Control_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult_Response)),
  }
};

typedef struct _Control_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Control_GetResult_Response_type_support_data_t;

static _Control_GetResult_Response_type_support_data_t _Control_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_Response_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_GetResult_Response)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_GetResult_type_support_ids_t;

static const _Control_GetResult_type_support_ids_t _Control_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_GetResult_type_support_symbol_names_t _Control_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_GetResult)),
  }
};

typedef struct _Control_GetResult_type_support_data_t
{
  void * data[2];
} _Control_GetResult_type_support_data_t;

static _Control_GetResult_type_support_data_t _Control_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_GetResult_service_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Control_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Control_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Control_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_GetResult)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "customized_srv_msg/action/detail/control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Control_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Control_FeedbackMessage_type_support_ids_t;

static const _Control_FeedbackMessage_type_support_ids_t _Control_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Control_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Control_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Control_FeedbackMessage_type_support_symbol_names_t _Control_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_srv_msg, action, Control_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, customized_srv_msg, action, Control_FeedbackMessage)),
  }
};

typedef struct _Control_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Control_FeedbackMessage_type_support_data_t;

static _Control_FeedbackMessage_type_support_data_t _Control_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Control_FeedbackMessage_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Control_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Control_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Control_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Control_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Control_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace customized_srv_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, customized_srv_msg, action, Control_FeedbackMessage)() {
  return &::customized_srv_msg::action::rosidl_typesupport_c::Control_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "customized_srv_msg/action/control.h"
#include "customized_srv_msg/action/detail/control__type_support.h"

static rosidl_action_type_support_t _customized_srv_msg__action__Control__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_customized_srv_msg
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, customized_srv_msg, action, Control)()
{
  // Thread-safe by always writing the same values to the static struct
  _customized_srv_msg__action__Control__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, customized_srv_msg, action, Control_SendGoal)();
  _customized_srv_msg__action__Control__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, customized_srv_msg, action, Control_GetResult)();
  _customized_srv_msg__action__Control__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _customized_srv_msg__action__Control__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, customized_srv_msg, action, Control_FeedbackMessage)();
  _customized_srv_msg__action__Control__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_customized_srv_msg__action__Control__typesupport_c;
}

#ifdef __cplusplus
}
#endif
