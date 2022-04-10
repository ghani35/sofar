// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__FUNCTIONS_H_
#define CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "customized_srv_msg/msg/rosidl_generator_c__visibility_control.h"

#include "customized_srv_msg/action/detail/control__struct.h"

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_Goal
 * )) before or use
 * customized_srv_msg__action__Control_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Goal__init(customized_srv_msg__action__Control_Goal * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Goal__fini(customized_srv_msg__action__Control_Goal * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Goal *
customized_srv_msg__action__Control_Goal__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Goal__destroy(customized_srv_msg__action__Control_Goal * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Goal__Sequence__init(customized_srv_msg__action__Control_Goal__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Goal__Sequence__fini(customized_srv_msg__action__Control_Goal__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Goal__Sequence *
customized_srv_msg__action__Control_Goal__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Goal__Sequence__destroy(customized_srv_msg__action__Control_Goal__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_Result
 * )) before or use
 * customized_srv_msg__action__Control_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Result__init(customized_srv_msg__action__Control_Result * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Result__fini(customized_srv_msg__action__Control_Result * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Result *
customized_srv_msg__action__Control_Result__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Result__destroy(customized_srv_msg__action__Control_Result * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Result__Sequence__init(customized_srv_msg__action__Control_Result__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Result__Sequence__fini(customized_srv_msg__action__Control_Result__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Result__Sequence *
customized_srv_msg__action__Control_Result__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Result__Sequence__destroy(customized_srv_msg__action__Control_Result__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_Feedback
 * )) before or use
 * customized_srv_msg__action__Control_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Feedback__init(customized_srv_msg__action__Control_Feedback * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Feedback__fini(customized_srv_msg__action__Control_Feedback * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Feedback *
customized_srv_msg__action__Control_Feedback__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Feedback__destroy(customized_srv_msg__action__Control_Feedback * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_Feedback__Sequence__init(customized_srv_msg__action__Control_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Feedback__Sequence__fini(customized_srv_msg__action__Control_Feedback__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_Feedback__Sequence *
customized_srv_msg__action__Control_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_Feedback__Sequence__destroy(customized_srv_msg__action__Control_Feedback__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_SendGoal_Request
 * )) before or use
 * customized_srv_msg__action__Control_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_SendGoal_Request__init(customized_srv_msg__action__Control_SendGoal_Request * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Request__fini(customized_srv_msg__action__Control_SendGoal_Request * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_SendGoal_Request *
customized_srv_msg__action__Control_SendGoal_Request__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Request__destroy(customized_srv_msg__action__Control_SendGoal_Request * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_SendGoal_Request__Sequence__init(customized_srv_msg__action__Control_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Request__Sequence__fini(customized_srv_msg__action__Control_SendGoal_Request__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_SendGoal_Request__Sequence *
customized_srv_msg__action__Control_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Request__Sequence__destroy(customized_srv_msg__action__Control_SendGoal_Request__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_SendGoal_Response
 * )) before or use
 * customized_srv_msg__action__Control_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_SendGoal_Response__init(customized_srv_msg__action__Control_SendGoal_Response * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Response__fini(customized_srv_msg__action__Control_SendGoal_Response * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_SendGoal_Response *
customized_srv_msg__action__Control_SendGoal_Response__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Response__destroy(customized_srv_msg__action__Control_SendGoal_Response * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_SendGoal_Response__Sequence__init(customized_srv_msg__action__Control_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Response__Sequence__fini(customized_srv_msg__action__Control_SendGoal_Response__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_SendGoal_Response__Sequence *
customized_srv_msg__action__Control_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_SendGoal_Response__Sequence__destroy(customized_srv_msg__action__Control_SendGoal_Response__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_GetResult_Request
 * )) before or use
 * customized_srv_msg__action__Control_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_GetResult_Request__init(customized_srv_msg__action__Control_GetResult_Request * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Request__fini(customized_srv_msg__action__Control_GetResult_Request * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_GetResult_Request *
customized_srv_msg__action__Control_GetResult_Request__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Request__destroy(customized_srv_msg__action__Control_GetResult_Request * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_GetResult_Request__Sequence__init(customized_srv_msg__action__Control_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Request__Sequence__fini(customized_srv_msg__action__Control_GetResult_Request__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_GetResult_Request__Sequence *
customized_srv_msg__action__Control_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Request__Sequence__destroy(customized_srv_msg__action__Control_GetResult_Request__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_GetResult_Response
 * )) before or use
 * customized_srv_msg__action__Control_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_GetResult_Response__init(customized_srv_msg__action__Control_GetResult_Response * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Response__fini(customized_srv_msg__action__Control_GetResult_Response * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_GetResult_Response *
customized_srv_msg__action__Control_GetResult_Response__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Response__destroy(customized_srv_msg__action__Control_GetResult_Response * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_GetResult_Response__Sequence__init(customized_srv_msg__action__Control_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Response__Sequence__fini(customized_srv_msg__action__Control_GetResult_Response__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_GetResult_Response__Sequence *
customized_srv_msg__action__Control_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_GetResult_Response__Sequence__destroy(customized_srv_msg__action__Control_GetResult_Response__Sequence * array);

/// Initialize action/Control message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_srv_msg__action__Control_FeedbackMessage
 * )) before or use
 * customized_srv_msg__action__Control_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_FeedbackMessage__init(customized_srv_msg__action__Control_FeedbackMessage * msg);

/// Finalize action/Control message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_FeedbackMessage__fini(customized_srv_msg__action__Control_FeedbackMessage * msg);

/// Create action/Control message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_srv_msg__action__Control_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_FeedbackMessage *
customized_srv_msg__action__Control_FeedbackMessage__create();

/// Destroy action/Control message.
/**
 * It calls
 * customized_srv_msg__action__Control_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_FeedbackMessage__destroy(customized_srv_msg__action__Control_FeedbackMessage * msg);


/// Initialize array of action/Control messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_srv_msg__action__Control_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
bool
customized_srv_msg__action__Control_FeedbackMessage__Sequence__init(customized_srv_msg__action__Control_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_FeedbackMessage__Sequence__fini(customized_srv_msg__action__Control_FeedbackMessage__Sequence * array);

/// Create array of action/Control messages.
/**
 * It allocates the memory for the array and calls
 * customized_srv_msg__action__Control_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
customized_srv_msg__action__Control_FeedbackMessage__Sequence *
customized_srv_msg__action__Control_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Control messages.
/**
 * It calls
 * customized_srv_msg__action__Control_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_srv_msg
void
customized_srv_msg__action__Control_FeedbackMessage__Sequence__destroy(customized_srv_msg__action__Control_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__FUNCTIONS_H_
