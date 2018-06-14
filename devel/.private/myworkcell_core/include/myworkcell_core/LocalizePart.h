// Generated by gencpp from file myworkcell_core/LocalizePart.msg
// DO NOT EDIT!


#ifndef MYWORKCELL_CORE_MESSAGE_LOCALIZEPART_H
#define MYWORKCELL_CORE_MESSAGE_LOCALIZEPART_H

#include <ros/service_traits.h>


#include <myworkcell_core/LocalizePartRequest.h>
#include <myworkcell_core/LocalizePartResponse.h>


namespace myworkcell_core
{

struct LocalizePart
{

typedef LocalizePartRequest Request;
typedef LocalizePartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LocalizePart
} // namespace myworkcell_core


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::myworkcell_core::LocalizePart > {
  static const char* value()
  {
    return "aa4cca5b67ec8a13449c405ec10ee5d0";
  }

  static const char* value(const ::myworkcell_core::LocalizePart&) { return value(); }
};

template<>
struct DataType< ::myworkcell_core::LocalizePart > {
  static const char* value()
  {
    return "myworkcell_core/LocalizePart";
  }

  static const char* value(const ::myworkcell_core::LocalizePart&) { return value(); }
};


// service_traits::MD5Sum< ::myworkcell_core::LocalizePartRequest> should match 
// service_traits::MD5Sum< ::myworkcell_core::LocalizePart > 
template<>
struct MD5Sum< ::myworkcell_core::LocalizePartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::myworkcell_core::LocalizePart >::value();
  }
  static const char* value(const ::myworkcell_core::LocalizePartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::myworkcell_core::LocalizePartRequest> should match 
// service_traits::DataType< ::myworkcell_core::LocalizePart > 
template<>
struct DataType< ::myworkcell_core::LocalizePartRequest>
{
  static const char* value()
  {
    return DataType< ::myworkcell_core::LocalizePart >::value();
  }
  static const char* value(const ::myworkcell_core::LocalizePartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::myworkcell_core::LocalizePartResponse> should match 
// service_traits::MD5Sum< ::myworkcell_core::LocalizePart > 
template<>
struct MD5Sum< ::myworkcell_core::LocalizePartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::myworkcell_core::LocalizePart >::value();
  }
  static const char* value(const ::myworkcell_core::LocalizePartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::myworkcell_core::LocalizePartResponse> should match 
// service_traits::DataType< ::myworkcell_core::LocalizePart > 
template<>
struct DataType< ::myworkcell_core::LocalizePartResponse>
{
  static const char* value()
  {
    return DataType< ::myworkcell_core::LocalizePart >::value();
  }
  static const char* value(const ::myworkcell_core::LocalizePartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MYWORKCELL_CORE_MESSAGE_LOCALIZEPART_H
