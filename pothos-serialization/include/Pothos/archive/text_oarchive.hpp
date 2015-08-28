#ifndef POTHOS_ARCHIVE_TEXT_OARCHIVE_HPP
#define POTHOS_ARCHIVE_TEXT_OARCHIVE_HPP

// MS compatible compilers support #pragma once
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

/////////1/////////2/////////3/////////4/////////5/////////6/////////7/////////8
// text_oarchive.hpp

// (C) Copyright 2002 Robert Ramey - http://www.rrsd.com . 
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for updates, documentation, and revision history.

#include <ostream>
#include <cstddef> // std::size_t

#include <Pothos/serialization/impl/config.hpp>
#if defined(POTHOS_NO_STDC_NAMESPACE)
namespace std{ 
    using ::size_t; 
} // namespace std
#endif

#include <Pothos/archive/detail/auto_link_archive.hpp>
#include <Pothos/archive/basic_text_oprimitive.hpp>
#include <Pothos/archive/basic_text_oarchive.hpp>
#include <Pothos/archive/detail/register_archive.hpp>
#include <Pothos/serialization/item_version_type.hpp>

#include <Pothos/archive/detail/abi_prefix.hpp> // must be the last header

#ifdef POTHOS_MSVC
#  pragma warning(push)
#  pragma warning(disable : 4511 4512)
#endif

namespace Pothos { 
namespace archive {

template<class Archive>
class text_oarchive_impl : 
     /* protected ? */ public basic_text_oprimitive<std::ostream>,
     public basic_text_oarchive<Archive>
{
#ifdef POTHOS_NO_MEMBER_TEMPLATE_FRIENDS
public:
#else
    friend class detail::interface_oarchive<Archive>;
    friend class basic_text_oarchive<Archive>;
    friend class save_access;
protected:
#endif
    template<class T>
    void save(const T & t){
        this->newtoken();
        basic_text_oprimitive<std::ostream>::save(t);
    }
    void save(const version_type & t){
        save(static_cast<const unsigned int>(t));
    }
    void save(const Pothos::serialization::item_version_type & t){
        save(static_cast<const unsigned int>(t));
    }
    POTHOS_ARCHIVE_DECL(void) 
    save(const char * t);
    #ifndef POTHOS_NO_INTRINSIC_WCHAR_T
    POTHOS_ARCHIVE_DECL(void) 
    save(const wchar_t * t);
    #endif
    POTHOS_ARCHIVE_DECL(void) 
    save(const std::string &s);
    #ifndef POTHOS_NO_STD_WSTRING
    POTHOS_ARCHIVE_DECL(void) 
    save(const std::wstring &ws);
    #endif
    POTHOS_ARCHIVE_DECL(POTHOS_PP_EMPTY()) 
    text_oarchive_impl(std::ostream & os, unsigned int flags);
    // don't import inline definitions! leave this as a reminder.
    //BOOST_ARCHIVE_DECL(BOOST_PP_EMPTY()) 
    ~text_oarchive_impl(){};
public:
    POTHOS_ARCHIVE_DECL(void) 
    save_binary(const void *address, std::size_t count);
};

// do not derive from this class.  If you want to extend this functionality
// via inhertance, derived from text_oarchive_impl instead.  This will
// preserve correct static polymorphism.
class text_oarchive : 
    public text_oarchive_impl<text_oarchive>
{
public:
    text_oarchive(std::ostream & os_, unsigned int flags = 0) :
        // note: added _ to suppress useless gcc warning
        text_oarchive_impl<text_oarchive>(os_, flags)
    {}
    ~text_oarchive(){}
};

typedef text_oarchive naked_text_oarchive;

} // namespace archive
} // namespace boost

// required by export
POTHOS_SERIALIZATION_REGISTER_ARCHIVE(Pothos::archive::text_oarchive)

#ifdef POTHOS_MSVC
#pragma warning(pop)
#endif

#include <Pothos/archive/detail/abi_suffix.hpp> // pops abi_suffix.hpp pragmas

#endif // BOOST_ARCHIVE_TEXT_OARCHIVE_HPP
