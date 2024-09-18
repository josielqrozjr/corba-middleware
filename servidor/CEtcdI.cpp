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
// /opt/ACE_wrappers/TAO/TAO_IDL/be/be_codegen.cpp:1621

#include <map>
#include <string>
#include <stdexcept>
#include "CEtcdI.h"


// Implementation skeleton constructor
Search_i::Search_i ()
{
}

// Implementation skeleton destructor
Search_i::~Search_i ()
{
    id_ = "unique-object-id";
}

std::string Search_i::id () const
{
    return id_;
}

::CORBA::Boolean Search_i::put (
    const std::string key,
    const std::string value)
{
    auto result = table_.insert({key, value});
    if (!result.second) {
        table_[key] = value;
        return false;
    }
    return true;
}

std::string Search_i::get (
    const std::string key)
{
    auto it = table_.find(key);
    if (it != table_.end()) {
        return it->second;
    } else {
        throw InvalidKey();  // exceção gerada pelo IDL
    }
}

void Search_i::del (
    const std::string key)
{
    auto it = table_.find(key);
    if (it != table_.end()) {
        table_.erase(it);
    } else {
        throw InvalidKey();
    }
}

void Search_i::shutdown (
    const std::string password)
{
    if (password == "admin") {
        table_.clear();
    } else {
        throw std::runtime_error("Acesso não autorizado");
    }
}
