// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_HPP_
#define CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_Goal __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_Goal __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_Goal_
{
  using Type = Control_Goal_<ContainerAllocator>;

  explicit Control_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->x.begin(), this->x.end(), 0.0f);
    }
  }

  explicit Control_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 2>::iterator, float>(this->x.begin(), this->x.end(), 0.0f);
    }
  }

  // field types and members
  using _x_type =
    std::array<float, 2>;
  _x_type x;

  // setters for named parameter idiom
  Type & set__x(
    const std::array<float, 2> & _arg)
  {
    this->x = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_Goal
    std::shared_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_Goal
    std::shared_ptr<customized_srv_msg::action::Control_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_Goal_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_Goal_

// alias to use template instance with default allocator
using Control_Goal =
  customized_srv_msg::action::Control_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg


#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_Result __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_Result __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_Result_
{
  using Type = Control_Result_<ContainerAllocator>;

  explicit Control_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit Control_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_Result
    std::shared_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_Result
    std::shared_ptr<customized_srv_msg::action::Control_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_Result_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_Result_

// alias to use template instance with default allocator
using Control_Result =
  customized_srv_msg::action::Control_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg


#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_Feedback __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_Feedback_
{
  using Type = Control_Feedback_<ContainerAllocator>;

  explicit Control_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Control_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _goal_distance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _goal_distance_type goal_distance;

  // setters for named parameter idiom
  Type & set__goal_distance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->goal_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_Feedback
    std::shared_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_Feedback
    std::shared_ptr<customized_srv_msg::action::Control_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_Feedback_ & other) const
  {
    if (this->goal_distance != other.goal_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_Feedback_

// alias to use template instance with default allocator
using Control_Feedback =
  customized_srv_msg::action::Control_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "customized_srv_msg/action/detail/control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_SendGoal_Request __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_SendGoal_Request_
{
  using Type = Control_SendGoal_Request_<ContainerAllocator>;

  explicit Control_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Control_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    customized_srv_msg::action::Control_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const customized_srv_msg::action::Control_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_SendGoal_Request
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_SendGoal_Request
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_SendGoal_Request_

// alias to use template instance with default allocator
using Control_SendGoal_Request =
  customized_srv_msg::action::Control_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_SendGoal_Response __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_SendGoal_Response_
{
  using Type = Control_SendGoal_Response_<ContainerAllocator>;

  explicit Control_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Control_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_SendGoal_Response
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_SendGoal_Response
    std::shared_ptr<customized_srv_msg::action::Control_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_SendGoal_Response_

// alias to use template instance with default allocator
using Control_SendGoal_Response =
  customized_srv_msg::action::Control_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg

namespace customized_srv_msg
{

namespace action
{

struct Control_SendGoal
{
  using Request = customized_srv_msg::action::Control_SendGoal_Request;
  using Response = customized_srv_msg::action::Control_SendGoal_Response;
};

}  // namespace action

}  // namespace customized_srv_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_GetResult_Request __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_GetResult_Request_
{
  using Type = Control_GetResult_Request_<ContainerAllocator>;

  explicit Control_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Control_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_GetResult_Request
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_GetResult_Request
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_GetResult_Request_

// alias to use template instance with default allocator
using Control_GetResult_Request =
  customized_srv_msg::action::Control_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg


// Include directives for member types
// Member 'result'
// already included above
// #include "customized_srv_msg/action/detail/control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_GetResult_Response __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_GetResult_Response_
{
  using Type = Control_GetResult_Response_<ContainerAllocator>;

  explicit Control_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Control_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    customized_srv_msg::action::Control_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const customized_srv_msg::action::Control_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_GetResult_Response
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_GetResult_Response
    std::shared_ptr<customized_srv_msg::action::Control_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_GetResult_Response_

// alias to use template instance with default allocator
using Control_GetResult_Response =
  customized_srv_msg::action::Control_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg

namespace customized_srv_msg
{

namespace action
{

struct Control_GetResult
{
  using Request = customized_srv_msg::action::Control_GetResult_Request;
  using Response = customized_srv_msg::action::Control_GetResult_Response;
};

}  // namespace action

}  // namespace customized_srv_msg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "customized_srv_msg/action/detail/control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__customized_srv_msg__action__Control_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__customized_srv_msg__action__Control_FeedbackMessage __declspec(deprecated)
#endif

namespace customized_srv_msg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Control_FeedbackMessage_
{
  using Type = Control_FeedbackMessage_<ContainerAllocator>;

  explicit Control_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Control_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    customized_srv_msg::action::Control_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const customized_srv_msg::action::Control_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__customized_srv_msg__action__Control_FeedbackMessage
    std::shared_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__customized_srv_msg__action__Control_FeedbackMessage
    std::shared_ptr<customized_srv_msg::action::Control_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_FeedbackMessage_

// alias to use template instance with default allocator
using Control_FeedbackMessage =
  customized_srv_msg::action::Control_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace customized_srv_msg

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace customized_srv_msg
{

namespace action
{

struct Control
{
  /// The goal message defined in the action definition.
  using Goal = customized_srv_msg::action::Control_Goal;
  /// The result message defined in the action definition.
  using Result = customized_srv_msg::action::Control_Result;
  /// The feedback message defined in the action definition.
  using Feedback = customized_srv_msg::action::Control_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = customized_srv_msg::action::Control_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = customized_srv_msg::action::Control_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = customized_srv_msg::action::Control_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Control Control;

}  // namespace action

}  // namespace customized_srv_msg

#endif  // CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__STRUCT_HPP_
