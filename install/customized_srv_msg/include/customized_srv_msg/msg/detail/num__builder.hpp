// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customized_srv_msg:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__BUILDER_HPP_
#define CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__BUILDER_HPP_

#include "customized_srv_msg/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace customized_srv_msg
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::msg::Num num(::customized_srv_msg::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::msg::Num>()
{
  return customized_srv_msg::msg::builder::Init_Num_num();
}

}  // namespace customized_srv_msg

#endif  // CUSTOMIZED_SRV_MSG__MSG__DETAIL__NUM__BUILDER_HPP_
