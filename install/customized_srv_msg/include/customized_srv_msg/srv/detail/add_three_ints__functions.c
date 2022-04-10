// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from customized_srv_msg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "customized_srv_msg/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
customized_srv_msg__srv__AddThreeInts_Request__init(customized_srv_msg__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
customized_srv_msg__srv__AddThreeInts_Request__fini(customized_srv_msg__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

customized_srv_msg__srv__AddThreeInts_Request *
customized_srv_msg__srv__AddThreeInts_Request__create()
{
  customized_srv_msg__srv__AddThreeInts_Request * msg = (customized_srv_msg__srv__AddThreeInts_Request *)malloc(sizeof(customized_srv_msg__srv__AddThreeInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__srv__AddThreeInts_Request));
  bool success = customized_srv_msg__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__srv__AddThreeInts_Request__destroy(customized_srv_msg__srv__AddThreeInts_Request * msg)
{
  if (msg) {
    customized_srv_msg__srv__AddThreeInts_Request__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__srv__AddThreeInts_Request__Sequence__init(customized_srv_msg__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__srv__AddThreeInts_Request * data = NULL;
  if (size) {
    data = (customized_srv_msg__srv__AddThreeInts_Request *)calloc(size, sizeof(customized_srv_msg__srv__AddThreeInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__srv__AddThreeInts_Request__fini(&data[i - 1]);
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
customized_srv_msg__srv__AddThreeInts_Request__Sequence__fini(customized_srv_msg__srv__AddThreeInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__srv__AddThreeInts_Request__fini(&array->data[i]);
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

customized_srv_msg__srv__AddThreeInts_Request__Sequence *
customized_srv_msg__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  customized_srv_msg__srv__AddThreeInts_Request__Sequence * array = (customized_srv_msg__srv__AddThreeInts_Request__Sequence *)malloc(sizeof(customized_srv_msg__srv__AddThreeInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__srv__AddThreeInts_Request__Sequence__destroy(customized_srv_msg__srv__AddThreeInts_Request__Sequence * array)
{
  if (array) {
    customized_srv_msg__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
customized_srv_msg__srv__AddThreeInts_Response__init(customized_srv_msg__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
customized_srv_msg__srv__AddThreeInts_Response__fini(customized_srv_msg__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

customized_srv_msg__srv__AddThreeInts_Response *
customized_srv_msg__srv__AddThreeInts_Response__create()
{
  customized_srv_msg__srv__AddThreeInts_Response * msg = (customized_srv_msg__srv__AddThreeInts_Response *)malloc(sizeof(customized_srv_msg__srv__AddThreeInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_srv_msg__srv__AddThreeInts_Response));
  bool success = customized_srv_msg__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
customized_srv_msg__srv__AddThreeInts_Response__destroy(customized_srv_msg__srv__AddThreeInts_Response * msg)
{
  if (msg) {
    customized_srv_msg__srv__AddThreeInts_Response__fini(msg);
  }
  free(msg);
}


bool
customized_srv_msg__srv__AddThreeInts_Response__Sequence__init(customized_srv_msg__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  customized_srv_msg__srv__AddThreeInts_Response * data = NULL;
  if (size) {
    data = (customized_srv_msg__srv__AddThreeInts_Response *)calloc(size, sizeof(customized_srv_msg__srv__AddThreeInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_srv_msg__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_srv_msg__srv__AddThreeInts_Response__fini(&data[i - 1]);
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
customized_srv_msg__srv__AddThreeInts_Response__Sequence__fini(customized_srv_msg__srv__AddThreeInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      customized_srv_msg__srv__AddThreeInts_Response__fini(&array->data[i]);
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

customized_srv_msg__srv__AddThreeInts_Response__Sequence *
customized_srv_msg__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  customized_srv_msg__srv__AddThreeInts_Response__Sequence * array = (customized_srv_msg__srv__AddThreeInts_Response__Sequence *)malloc(sizeof(customized_srv_msg__srv__AddThreeInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = customized_srv_msg__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
customized_srv_msg__srv__AddThreeInts_Response__Sequence__destroy(customized_srv_msg__srv__AddThreeInts_Response__Sequence * array)
{
  if (array) {
    customized_srv_msg__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  free(array);
}
