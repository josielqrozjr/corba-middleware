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
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_codegen.cpp:372


#include "CEtcdC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "cstring"

#if !defined (__ACE_INLINE__)
#include "CEtcdC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_exception/exception_cs.cpp:97

InvalidKey::InvalidKey ()
  : ::CORBA::UserException (
        "IDL:InvalidKey:1.0",
        "InvalidKey")
{
}

InvalidKey::InvalidKey (const ::InvalidKey &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ())
{
}

InvalidKey&
InvalidKey::operator= (const ::InvalidKey &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void InvalidKey::_tao_any_destructor (void *_tao_void_pointer)
{
  InvalidKey *_tao_tmp_pointer =
    static_cast<InvalidKey *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

InvalidKey *
InvalidKey::_downcast (::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<InvalidKey *> (_tao_excp);
}

const InvalidKey *
InvalidKey::_downcast (::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const InvalidKey *> (_tao_excp);
}

::CORBA::Exception *InvalidKey::_alloc ()
{
  ::CORBA::Exception *retval {};
  ACE_NEW_RETURN (retval, ::InvalidKey, nullptr);
  return retval;
}

::CORBA::Exception *
InvalidKey::_tao_duplicate () const
{
  ::CORBA::Exception *result {};
  ACE_NEW_RETURN (result, ::InvalidKey (*this), nullptr);
  return result;
}

void InvalidKey::_raise () const
{
  throw *this;
}

void InvalidKey::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void InvalidKey::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr InvalidKey::_tao_type () const
{
  return ::_tc_InvalidKey;
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_typecode/struct_typecode.cpp:84

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const 
    _tao_fields_InvalidKey = nullptr;
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_InvalidKey (
  ::CORBA::tk_except,
  "IDL:InvalidKey:1.0",
  "InvalidKey",
  _tao_fields_InvalidKey,
  0);

::CORBA::TypeCode_ptr const _tc_InvalidKey =
  &_tao_tc_InvalidKey;
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Search.

Search_ptr
TAO::Objref_Traits<Search>::duplicate (Search_ptr p)
{
  return Search::_duplicate (p);
}

void
TAO::Objref_Traits<Search>::release (Search_ptr p)
{
  ::CORBA::release (p);
}

Search_ptr
TAO::Objref_Traits<Search>::nil ()
{
  return Search::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Search>::marshal (const Search_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

std::string
Search::id ()
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< std::string>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      1,
      "_get_id",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _invocation_call.invoke (nullptr, 0);

  return _tao_retval.retn ();
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

::CORBA::Boolean
Search::put (
  const std::string key,
  const std::string value)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< std::string>::in_arg_val _tao_key (key);
  TAO::Arg_Traits< std::string>::in_arg_val _tao_value (value);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_key),
      std::addressof(_tao_value)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      3,
      "put",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (nullptr, 0);

  return _tao_retval.retn ();
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

std::string
Search::get (
  const std::string key)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< std::string>::ret_val _tao_retval;
  TAO::Arg_Traits< std::string>::in_arg_val _tao_key (key);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_key)
    };

  static TAO::Exception_Data
  _tao_Search_get_exceptiondata [] = 
    {
      {
        "IDL:InvalidKey:1.0",
        InvalidKey::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , _tc_InvalidKey
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "get",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (
      _tao_Search_get_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

void
Search::del (
  const std::string key)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< std::string>::in_arg_val _tao_key (key);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_key)
    };

  static TAO::Exception_Data
  _tao_Search_del_exceptiondata [] = 
    {
      {
        "IDL:InvalidKey:1.0",
        InvalidKey::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , _tc_InvalidKey
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "del",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (
      _tao_Search_del_exceptiondata,
      1
    );
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

void
Search::shutdown (
  const std::string password)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< std::string>::in_arg_val _tao_password (password);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_password)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _invocation_call.invoke (nullptr, 0);
}

Search::Search ()
{
}
void
Search::_tao_any_destructor (void *_tao_void_pointer)
{
  Search *_tao_tmp_pointer =
    static_cast<Search *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Search_ptr
Search::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Search>::narrow (_tao_objref, "IDL:Search:1.0");
}

Search_ptr
Search::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Search>::unchecked_narrow (_tao_objref);
}

Search_ptr
Search::_nil ()
{
  return nullptr;
}

Search_ptr
Search::_duplicate (Search_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Search::_tao_release (Search_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Search::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:Search:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Search::_interface_repository_id () const
{
  return "IDL:Search:1.0";
}

::CORBA::Boolean
Search::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_typecode/objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Search (
    ::CORBA::tk_objref,
    "IDL:Search:1.0",
    "Search");
  
::CORBA::TypeCode_ptr const _tc_Search =
  &_tao_tc_Search;
// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_exception/any_op_cs.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<InvalidKey>::demarshal_value (TAO_InputCDR & cdr)
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }
    
    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const InvalidKey &_tao_elem)
{
  TAO::Any_Dual_Impl_T<InvalidKey>::insert_copy (
    _tao_any,
    InvalidKey::_tao_any_destructor,
    _tc_InvalidKey,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  InvalidKey *_tao_elem)
{
  TAO::Any_Dual_Impl_T<InvalidKey>::insert (
    _tao_any,
    InvalidKey::_tao_any_destructor,
    _tc_InvalidKey,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const InvalidKey *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T<InvalidKey>::extract (
    _tao_any,
    InvalidKey::_tao_any_destructor,
    _tc_InvalidKey,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Search>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  Search_ptr _tao_elem)
{
  Search_ptr _tao_objptr =
    Search::_duplicate (_tao_elem);
  _tao_any <<= std::addressof(_tao_objptr);
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  Search_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Search>::insert (
    _tao_any,
    Search::_tao_any_destructor,
    _tc_Search,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Search_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Search>::extract (
        _tao_any,
        Search::_tao_any_destructor,
        _tc_Search,
        _tao_elem);
}

}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const InvalidKey &_tao_aggregate)
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    InvalidKey&)
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Search_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Search_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::Search>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



