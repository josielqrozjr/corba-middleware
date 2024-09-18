// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v4.0.1
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_codegen.cpp:454

#ifndef _TAO_IDL_CETCDS_IYBZYI_H_
#define _TAO_IDL_CETCDS_IYBZYI_H_


#include "CEtcdC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_SEARCH__SARG_TRAITS_)
#define _SEARCH__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Search>
    : public Object_SArg_Traits_T<
        ::Search_ptr,
        ::Search_var,
        ::Search_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_Search;
typedef POA_Search *POA_Search_ptr;

class  POA_Search
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Search ();

public:
  /// Useful for template programming.
  typedef ::Search _stub_type;
  typedef ::Search_ptr _stub_ptr_type;
  typedef ::Search_var _stub_var_type;

  POA_Search (const POA_Search& rhs);
  virtual ~POA_Search () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::Search *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual std::string id () = 0;

  static void _get_id_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::CORBA::Boolean put (
    const std::string key,
    const std::string value) = 0;

  static void put_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual std::string get (
    const std::string key) = 0;

  static void get_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void del (
    const std::string key) = 0;

  static void del_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void shutdown (
    const std::string password) = 0;

  static void shutdown_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#endif /* ifndef */

