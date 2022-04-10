// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customized_srv_msg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define CUSTOMIZED_SRV_MSG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "customized_srv_msg/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace customized_srv_msg
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::customized_srv_msg::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::customized_srv_msg::srv::AddThreeInts_Request c(::customized_srv_msg::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::customized_srv_msg::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::customized_srv_msg::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::customized_srv_msg::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::customized_srv_msg::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::customized_srv_msg::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::srv::AddThreeInts_Request>()
{
  return customized_srv_msg::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::srv::AddThreeInts_Response sum(::customized_srv_msg::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::srv::AddThreeInts_Response>()
{
  return customized_srv_msg::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace customized_srv_msg

#endif  // CUSTOMIZED_SRV_MSG__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
