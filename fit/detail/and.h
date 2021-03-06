/*=============================================================================
    Copyright (c) 2015 Paul Fultz II
    and.h
    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/

#ifndef FIT_GUARD_AND_H
#define FIT_GUARD_AND_H

#include <type_traits>

namespace fit { namespace detail {

template<bool...> struct bool_seq {};
template<class... Ts>
struct and_
: std::is_same<bool_seq<Ts::value...>, bool_seq<(Ts::value, true)...>>::type
{};

}}

#endif