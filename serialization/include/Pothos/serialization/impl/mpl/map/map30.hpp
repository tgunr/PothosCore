
#ifndef POTHOS_MPL_MAP_MAP30_HPP_INCLUDED
#define POTHOS_MPL_MAP_MAP30_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
// Copyright David Abrahams 2003-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: map30.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
// $Date: 2008-10-10 23:19:02 -0700 (Fri, 10 Oct 2008) $
// $Revision: 49267 $

#if !defined(POTHOS_MPL_PREPROCESSING_MODE)
#   include <Pothos/serialization/impl/mpl/map/map20.hpp>
#endif

#include <Pothos/serialization/impl/mpl/aux_/config/use_preprocessed.hpp>

#if !defined(POTHOS_MPL_CFG_NO_PREPROCESSED_HEADERS) \
    && !defined(POTHOS_MPL_PREPROCESSING_MODE)

#   define POTHOS_MPL_PREPROCESSED_HEADER map30.hpp
#   include <Pothos/serialization/impl/mpl/map/aux_/include_preprocessed.hpp>

#else

#   include <Pothos/serialization/impl/preprocessor/iterate.hpp>

namespace Pothos { namespace mpl {

#   define POTHOS_PP_ITERATION_PARAMS_1 \
    (3,(21, 30, <boost/mpl/map/aux_/numbered.hpp>))
#   include POTHOS_PP_ITERATE()

}}

#endif // BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS

#endif // BOOST_MPL_MAP_MAP30_HPP_INCLUDED
