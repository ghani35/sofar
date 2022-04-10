// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from customized_srv_msg:action/Goal.idl
// generated code does not contain a copyright notice
#include "customized_srv_msg/action/detail/goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
customized_srv_msg__action__Goal_Goal__init(customized_srv_msg__action__Goal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    customized_srv_msg__action__Goal_Goal__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_Goal__fini(customized_srv_msg__action__Goal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
}

customized_srv_msg__action__Goal_Goal *
customized_srv_msg__action__Goal_Goal__create()
{
  customized_srv_msg__action__Goal_Goal * msg = (customized_srv_msg__action__Goal_Goal *)malloc(sizeof(customized_srv_msg__action__Goal_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_Goal));
  bool success = customized_srv_msg__action__Goal_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_Goal__destroy(customized_srv_msg__action__Goal_Goal * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_Goal__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_Goal__Sequence__init(customized_srv_msg__action__Goal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_Goal * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_Goal *)calloc(size, sizeof(customized_srv_msg__action__Goal_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_Goal__Sequence__fini(customized_srv_msg__action__Goal_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_Goal__Sequence *
customized_srv_msg__action__Goal_Goal__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_Goal__Sequence * array = (customized_srv_msg__action__Goal_Goal__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_Goal__Sequence__destroy(customized_srv_msg__action__Goal_Goal__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
customized_srv_msg__action__Goal_Result__init(customized_srv_msg__action__Goal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  return true;
}

void
customized_srv_msg__action__Goal_Result__fini(customized_srv_msg__action__Goal_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
}

customized_srv_msg__action__Goal_Result *
customized_srv_msg__action__Goal_Result__create()
{
  customized_srv_msg__action__Goal_Result * msg = (customized_srv_msg__action__Goal_Result *)malloc(sizeof(customized_srv_msg__action__Goal_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_Result));
  bool success = customized_srv_msg__action__Goal_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_Result__destroy(customized_srv_msg__action__Goal_Result * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_Result__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_Result__Sequence__init(customized_srv_msg__action__Goal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_Result * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_Result *)calloc(size, sizeof(customized_srv_msg__action__Goal_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_Result__Sequence__fini(customized_srv_msg__action__Goal_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_Result__Sequence *
customized_srv_msg__action__Goal_Result__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_Result__Sequence * array = (customized_srv_msg__action__Goal_Result__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_Result__Sequence__destroy(customized_srv_msg__action__Goal_Result__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
customized_srv_msg__action__Goal_Feedback__init(customized_srv_msg__action__Goal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__float__Sequence__init(&msg->partial_sequence, 0)) {
    customized_srv_msg__action__Goal_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_Feedback__fini(customized_srv_msg__action__Goal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__float__Sequence__fini(&msg->partial_sequence);
}

customized_srv_msg__action__Goal_Feedback *
customized_srv_msg__action__Goal_Feedback__create()
{
  customized_srv_msg__action__Goal_Feedback * msg = (customized_srv_msg__action__Goal_Feedback *)malloc(sizeof(customized_srv_msg__action__Goal_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_Feedback));
  bool success = customized_srv_msg__action__Goal_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_Feedback__destroy(customized_srv_msg__action__Goal_Feedback * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_Feedback__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_Feedback__Sequence__init(customized_srv_msg__action__Goal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_Feedback * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_Feedback *)calloc(size, sizeof(customized_srv_msg__action__Goal_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_Feedback__Sequence__fini(customized_srv_msg__action__Goal_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_Feedback__Sequence *
customized_srv_msg__action__Goal_Feedback__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_Feedback__Sequence * array = (customized_srv_msg__action__Goal_Feedback__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_Feedback__Sequence__destroy(customized_srv_msg__action__Goal_Feedback__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "customized_srv_msg/action/detail/goal__functions.h"

bool
customized_srv_msg__action__Goal_SendGoal_Request__init(customized_srv_msg__action__Goal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    customized_srv_msg__action__Goal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!customized_srv_msg__action__Goal_Goal__init(&msg->goal)) {
    customized_srv_msg__action__Goal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_SendGoal_Request__fini(customized_srv_msg__action__Goal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  customized_srv_msg__action__Goal_Goal__fini(&msg->goal);
}

customized_srv_msg__action__Goal_SendGoal_Request *
customized_srv_msg__action__Goal_SendGoal_Request__create()
{
  customized_srv_msg__action__Goal_SendGoal_Request * msg = (customized_srv_msg__action__Goal_SendGoal_Request *)malloc(sizeof(customized_srv_msg__action__Goal_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_SendGoal_Request));
  bool success = customized_srv_msg__action__Goal_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_SendGoal_Request__destroy(customized_srv_msg__action__Goal_SendGoal_Request * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_SendGoal_Request__Sequence__init(customized_srv_msg__action__Goal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_SendGoal_Request * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_SendGoal_Request *)calloc(size, sizeof(customized_srv_msg__action__Goal_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_SendGoal_Request__Sequence__fini(customized_srv_msg__action__Goal_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_SendGoal_Request__Sequence *
customized_srv_msg__action__Goal_SendGoal_Request__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_SendGoal_Request__Sequence * array = (customized_srv_msg__action__Goal_SendGoal_Request__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_SendGoal_Request__Sequence__destroy(customized_srv_msg__action__Goal_SendGoal_Request__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
customized_srv_msg__action__Goal_SendGoal_Response__init(customized_srv_msg__action__Goal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    customized_srv_msg__action__Goal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_SendGoal_Response__fini(customized_srv_msg__action__Goal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

customized_srv_msg__action__Goal_SendGoal_Response *
customized_srv_msg__action__Goal_SendGoal_Response__create()
{
  customized_srv_msg__action__Goal_SendGoal_Response * msg = (customized_srv_msg__action__Goal_SendGoal_Response *)malloc(sizeof(customized_srv_msg__action__Goal_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_SendGoal_Response));
  bool success = customized_srv_msg__action__Goal_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_SendGoal_Response__destroy(customized_srv_msg__action__Goal_SendGoal_Response * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_SendGoal_Response__Sequence__init(customized_srv_msg__action__Goal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_SendGoal_Response * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_SendGoal_Response *)calloc(size, sizeof(customized_srv_msg__action__Goal_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_SendGoal_Response__Sequence__fini(customized_srv_msg__action__Goal_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_SendGoal_Response__Sequence *
customized_srv_msg__action__Goal_SendGoal_Response__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_SendGoal_Response__Sequence * array = (customized_srv_msg__action__Goal_SendGoal_Response__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_SendGoal_Response__Sequence__destroy(customized_srv_msg__action__Goal_SendGoal_Response__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
customized_srv_msg__action__Goal_GetResult_Request__init(customized_srv_msg__action__Goal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    customized_srv_msg__action__Goal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_GetResult_Request__fini(customized_srv_msg__action__Goal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

customized_srv_msg__action__Goal_GetResult_Request *
customized_srv_msg__action__Goal_GetResult_Request__create()
{
  customized_srv_msg__action__Goal_GetResult_Request * msg = (customized_srv_msg__action__Goal_GetResult_Request *)malloc(sizeof(customized_srv_msg__action__Goal_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_GetResult_Request));
  bool success = customized_srv_msg__action__Goal_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_GetResult_Request__destroy(customized_srv_msg__action__Goal_GetResult_Request * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_GetResult_Request__Sequence__init(customized_srv_msg__action__Goal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_GetResult_Request * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_GetResult_Request *)calloc(size, sizeof(customized_srv_msg__action__Goal_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_GetResult_Request__Sequence__fini(customized_srv_msg__action__Goal_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_GetResult_Request__Sequence *
customized_srv_msg__action__Goal_GetResult_Request__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_GetResult_Request__Sequence * array = (customized_srv_msg__action__Goal_GetResult_Request__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_GetResult_Request__Sequence__destroy(customized_srv_msg__action__Goal_GetResult_Request__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "customized_srv_msg/action/detail/goal__functions.h"

bool
customized_srv_msg__action__Goal_GetResult_Response__init(customized_srv_msg__action__Goal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!customized_srv_msg__action__Goal_Result__init(&msg->result)) {
    customized_srv_msg__action__Goal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_GetResult_Response__fini(customized_srv_msg__action__Goal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  customized_srv_msg__action__Goal_Result__fini(&msg->result);
}

customized_srv_msg__action__Goal_GetResult_Response *
customized_srv_msg__action__Goal_GetResult_Response__create()
{
  customized_srv_msg__action__Goal_GetResult_Response * msg = (customized_srv_msg__action__Goal_GetResult_Response *)malloc(sizeof(customized_srv_msg__action__Goal_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_GetResult_Response));
  bool success = customized_srv_msg__action__Goal_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_GetResult_Response__destroy(customized_srv_msg__action__Goal_GetResult_Response * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_GetResult_Response__Sequence__init(customized_srv_msg__action__Goal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_GetResult_Response * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_GetResult_Response *)calloc(size, sizeof(customized_srv_msg__action__Goal_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_GetResult_Response__Sequence__fini(customized_srv_msg__action__Goal_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_GetResult_Response__Sequence *
customized_srv_msg__action__Goal_GetResult_Response__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_GetResult_Response__Sequence * array = (customized_srv_msg__action__Goal_GetResult_Response__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_GetResult_Response__Sequence__destroy(customized_srv_msg__action__Goal_GetResult_Response__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "customized_srv_msg/action/detail/goal__functions.h"

bool
customized_srv_msg__action__Goal_FeedbackMessage__init(customized_srv_msg__action__Goal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    customized_srv_msg__action__Goal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!customized_srv_msg__action__Goal_Feedback__init(&msg->feedback)) {
    customized_srv_msg__action__Goal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
customized_srv_msg__action__Goal_FeedbackMessage__fini(customized_srv_msg__action__Goal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  customized_srv_msg__action__Goal_Feedback__fini(&msg->feedback);
}

customized_srv_msg__action__Goal_FeedbackMessage *
customized_srv_msg__action__Goal_FeedbackMessage__create()
{
  customized_srv_msg__action__Goal_FeedbackMessage * msg = (customized_srv_msg__action__Goal_FeedbackMessage *)malloc(sizeof(customized_srv_msg__action__Goal_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__action__Goal_FeedbackMessage));
  bool success = customized_srv_msg__action__Goal_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__action__Goal_FeedbackMessage__destroy(customized_srv_msg__action__Goal_FeedbackMessage * msg)
{
  if (msg) {
    customized_srv_msg__action__Goal_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__action__Goal_FeedbackMessage__Sequence__init(customized_srv_msg__action__Goal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__action__Goal_FeedbackMessage * data = NULL;
  if (size) {
    data = (customized_srv_msg__action__Goal_FeedbackMessage *)calloc(size, sizeof(customized_srv_msg__action__Goal_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__action__Goal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__action__Goal_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
customized_srv_msg__action__Goal_FeedbackMessage__Sequence__fini(customized_srv_msg__action__Goal_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__action__Goal_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

customized_srv_msg__action__Goal_FeedbackMessage__Sequence *
customized_srv_msg__action__Goal_FeedbackMessage__Sequence__create(size_t size)
{
  customized_srv_msg__action__Goal_FeedbackMessage__Sequence * array = (customized_srv_msg__action__Goal_FeedbackMessage__Sequence *)malloc(sizeof(customized_srv_msg__action__Goal_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__action__Goal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__action__Goal_FeedbackMessage__Sequence__destroy(customized_srv_msg__action__Goal_FeedbackMessage__Sequence * array)
{
  if (array) {
    customized_srv_msg__action__Goal_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
