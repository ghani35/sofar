// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from customized_srv_msg:action/Goal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "customized_srv_msg/action/detail/goal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_Goal_type_support_ids_t;

static const _Goal_Goal_type_support_ids_t _Goal_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_Goal_type_support_symbol_names_t _Goal_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_Goal)),
  }
};

typedef struct _Goal_Goal_type_support_data_t
{
  void * data[2];
} _Goal_Goal_type_support_data_t;

static _Goal_Goal_type_support_data_t _Goal_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_Goal_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_Goal>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_Goal)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_Result_type_support_ids_t;

static const _Goal_Result_type_support_ids_t _Goal_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_Result_type_support_symbol_names_t _Goal_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_Result)),
  }
};

typedef struct _Goal_Result_type_support_data_t
{
  void * data[2];
} _Goal_Result_type_support_data_t;

static _Goal_Result_type_support_data_t _Goal_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_Result_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_Result>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_Result)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_Feedback_type_support_ids_t;

static const _Goal_Feedback_type_support_ids_t _Goal_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_Feedback_type_support_symbol_names_t _Goal_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_Feedback)),
  }
};

typedef struct _Goal_Feedback_type_support_data_t
{
  void * data[2];
} _Goal_Feedback_type_support_data_t;

static _Goal_Feedback_type_support_data_t _Goal_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_Feedback_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_Feedback>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_Feedback)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_SendGoal_Request_type_support_ids_t;

static const _Goal_SendGoal_Request_type_support_ids_t _Goal_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_SendGoal_Request_type_support_symbol_names_t _Goal_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_SendGoal_Request)),
  }
};

typedef struct _Goal_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Goal_SendGoal_Request_type_support_data_t;

static _Goal_SendGoal_Request_type_support_data_t _Goal_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_SendGoal_Request_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_SendGoal_Request>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_SendGoal_Request)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_SendGoal_Response_type_support_ids_t;

static const _Goal_SendGoal_Response_type_support_ids_t _Goal_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_SendGoal_Response_type_support_symbol_names_t _Goal_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_SendGoal_Response)),
  }
};

typedef struct _Goal_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Goal_SendGoal_Response_type_support_data_t;

static _Goal_SendGoal_Response_type_support_data_t _Goal_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_SendGoal_Response_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_SendGoal_Response>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_SendGoal_Response)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_SendGoal_type_support_ids_t;

static const _Goal_SendGoal_type_support_ids_t _Goal_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_SendGoal_type_support_symbol_names_t _Goal_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_SendGoal)),
  }
};

typedef struct _Goal_SendGoal_type_support_data_t
{
  void * data[2];
} _Goal_SendGoal_type_support_data_t;

static _Goal_SendGoal_type_support_data_t _Goal_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_SendGoal_service_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Goal_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Goal_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Goal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<customized_srv_msg::action::Goal_SendGoal>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_GetResult_Request_type_support_ids_t;

static const _Goal_GetResult_Request_type_support_ids_t _Goal_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_GetResult_Request_type_support_symbol_names_t _Goal_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_GetResult_Request)),
  }
};

typedef struct _Goal_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Goal_GetResult_Request_type_support_data_t;

static _Goal_GetResult_Request_type_support_data_t _Goal_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_GetResult_Request_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_GetResult_Request>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_GetResult_Request)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_GetResult_Response_type_support_ids_t;

static const _Goal_GetResult_Response_type_support_ids_t _Goal_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_GetResult_Response_type_support_symbol_names_t _Goal_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_GetResult_Response)),
  }
};

typedef struct _Goal_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Goal_GetResult_Response_type_support_data_t;

static _Goal_GetResult_Response_type_support_data_t _Goal_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_GetResult_Response_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_GetResult_Response>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_GetResult_Response)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_GetResult_type_support_ids_t;

static const _Goal_GetResult_type_support_ids_t _Goal_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_GetResult_type_support_symbol_names_t _Goal_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_GetResult)),
  }
};

typedef struct _Goal_GetResult_type_support_data_t
{
  void * data[2];
} _Goal_GetResult_type_support_data_t;

static _Goal_GetResult_type_support_data_t _Goal_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_GetResult_service_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Goal_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Goal_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Goal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<customized_srv_msg::action::Goal_GetResult>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Goal_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Goal_FeedbackMessage_type_support_ids_t;

static const _Goal_FeedbackMessage_type_support_ids_t _Goal_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Goal_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Goal_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Goal_FeedbackMessage_type_support_symbol_names_t _Goal_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, customized_srv_msg, action, Goal_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customized_srv_msg, action, Goal_FeedbackMessage)),
  }
};

typedef struct _Goal_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Goal_FeedbackMessage_type_support_data_t;

static _Goal_FeedbackMessage_type_support_data_t _Goal_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Goal_FeedbackMessage_message_typesupport_map = {
  2,
  "customized_srv_msg",
  &_Goal_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Goal_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Goal_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Goal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Goal_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customized_srv_msg::action::Goal_FeedbackMessage>()
{
  return &::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, customized_srv_msg, action, Goal_FeedbackMessage)() {
  return get_message_type_support_handle<customized_srv_msg::action::Goal_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "customized_srv_msg/action/detail/goal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace customized_srv_msg
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Goal_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace customized_srv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<customized_srv_msg::action::Goal>()
{
  using ::customized_srv_msg::action::rosidl_typesupport_cpp::Goal_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Goal_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::customized_srv_msg::action::Goal::Impl::SendGoalService>();
  Goal_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::customized_srv_msg::action::Goal::Impl::GetResultService>();
  Goal_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::customized_srv_msg::action::Goal::Impl::CancelGoalService>();
  Goal_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::customized_srv_msg::action::Goal::Impl::FeedbackMessage>();
  Goal_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::customized_srv_msg::action::Goal::Impl::GoalStatusMessage>();
  return &Goal_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
