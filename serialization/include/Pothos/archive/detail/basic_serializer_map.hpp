#ifndef  POTHOS_SERIALIZER_MAP_HPP
#define POTHOS_SERIALIZER_MAP_HPP

// MS compatible compilers support #pragma once
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

/////////1/////////2/////////3/////////4/////////5/////////6/////////7/////////8
// basic_serializer_map.hpp: extenstion of type_info required for serialization.

// (C) Copyright 2002 Robert Ramey - http://www.rrsd.com . 
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for updates, documentation, and revision history.

#include <set>

#include <Pothos/serialization/impl/config.hpp>
#include <Pothos/serialization/impl/noncopyable.hpp>
#include <Pothos/archive/detail/auto_link_archive.hpp>

#include <Pothos/archive/detail/abi_prefix.hpp> // must be the last header

namespace Pothos { 
namespace serialization {
    class extended_type_info;
}

namespace archive {
namespace detail {

class basic_serializer;

class POTHOS_ARCHIVE_OR_WARCHIVE_DECL(POTHOS_PP_EMPTY())
basic_serializer_map : public
    Pothos::noncopyable
{
    struct type_info_pointer_compare
    {
        bool operator()(
            const basic_serializer * lhs, const basic_serializer * rhs
        ) const ;
    };
    typedef std::set<
        const basic_serializer *, 
        type_info_pointer_compare
    > map_type;
    map_type m_map;
public:
    bool insert(const basic_serializer * bs);
    void erase(const basic_serializer * bs);
    const basic_serializer * find(
        const Pothos::serialization::extended_type_info & type_
    ) const;
private:
    // cw 8.3 requires this
    basic_serializer_map& operator=(basic_serializer_map const&);
};

} // namespace detail
} // namespace archive
} // namespace boost

#include <Pothos/archive/detail/abi_suffix.hpp> // must be the last header

#endif // BOOST_SERIALIZER_MAP_HPP
