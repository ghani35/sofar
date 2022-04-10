// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customized_srv_msg:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__BUILDER_HPP_
#define CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__BUILDER_HPP_

#include "customized_srv_msg/action/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_Goal_x
{
public:
  Init_Control_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::action::Control_Goal x(::customized_srv_msg::action::Control_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_Goal>()
{
  return customized_srv_msg::action::builder::Init_Control_Goal_x();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_Result_status
{
public:
  Init_Control_Result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::action::Control_Result status(::customized_srv_msg::action::Control_Result::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_Result>()
{
  return customized_srv_msg::action::builder::Init_Control_Result_status();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_Feedback_goal_distance
{
public:
  Init_Control_Feedback_goal_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::action::Control_Feedback goal_distance(::customized_srv_msg::action::Control_Feedback::_goal_distance_type arg)
  {
    msg_.goal_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_Feedback>()
{
  return customized_srv_msg::action::builder::Init_Control_Feedback_goal_distance();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Request_goal
{
public:
  explicit Init_Control_SendGoal_Request_goal(::customized_srv_msg::action::Control_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::customized_srv_msg::action::Control_SendGoal_Request goal(::customized_srv_msg::action::Control_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_SendGoal_Request msg_;
};

class Init_Control_SendGoal_Request_goal_id
{
public:
  Init_Control_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Request_goal goal_id(::customized_srv_msg::action::Control_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_SendGoal_Request_goal(msg_);
  }

private:
  ::customized_srv_msg::action::Control_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_SendGoal_Request>()
{
  return customized_srv_msg::action::builder::Init_Control_SendGoal_Request_goal_id();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Response_stamp
{
public:
  explicit Init_Control_SendGoal_Response_stamp(::customized_srv_msg::action::Control_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::customized_srv_msg::action::Control_SendGoal_Response stamp(::customized_srv_msg::action::Control_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_SendGoal_Response msg_;
};

class Init_Control_SendGoal_Response_accepted
{
public:
  Init_Control_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Response_stamp accepted(::customized_srv_msg::action::Control_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Control_SendGoal_Response_stamp(msg_);
  }

private:
  ::customized_srv_msg::action::Control_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_SendGoal_Response>()
{
  return customized_srv_msg::action::builder::Init_Control_SendGoal_Response_accepted();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Request_goal_id
{
public:
  Init_Control_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_srv_msg::action::Control_GetResult_Request goal_id(::customized_srv_msg::action::Control_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_GetResult_Request>()
{
  return customized_srv_msg::action::builder::Init_Control_GetResult_Request_goal_id();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Response_result
{
public:
  explicit Init_Control_GetResult_Response_result(::customized_srv_msg::action::Control_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::customized_srv_msg::action::Control_GetResult_Response result(::customized_srv_msg::action::Control_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_GetResult_Response msg_;
};

class Init_Control_GetResult_Response_status
{
public:
  Init_Control_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_GetResult_Response_result status(::customized_srv_msg::action::Control_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Control_GetResult_Response_result(msg_);
  }

private:
  ::customized_srv_msg::action::Control_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_GetResult_Response>()
{
  return customized_srv_msg::action::builder::Init_Control_GetResult_Response_status();
}

}  // namespace customized_srv_msg


namespace customized_srv_msg
{

namespace action
{

namespace builder
{

class Init_Control_FeedbackMessage_feedback
{
public:
  explicit Init_Control_FeedbackMessage_feedback(::customized_srv_msg::action::Control_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::customized_srv_msg::action::Control_FeedbackMessage feedback(::customized_srv_msg::action::Control_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_srv_msg::action::Control_FeedbackMessage msg_;
};

class Init_Control_FeedbackMessage_goal_id
{
public:
  Init_Control_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_FeedbackMessage_feedback goal_id(::customized_srv_msg::action::Control_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_FeedbackMessage_feedback(msg_);
  }

private:
  ::customized_srv_msg::action::Control_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_srv_msg::action::Control_FeedbackMessage>()
{
  return customized_srv_msg::action::builder::Init_Control_FeedbackMessage_goal_id();
}

}  // namespace customized_srv_msg

#endif  // CUSTOMIZED_SRV_MSG__ACTION__DETAIL__CONTROL__BUILDER_HPP_
