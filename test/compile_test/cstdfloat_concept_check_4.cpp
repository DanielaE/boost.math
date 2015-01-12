//  Copyright John Maddock 2014.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifdef _MSC_VER
#  pragma warning(disable: 4244) // narrowing conversion
#endif

#define BOOST_MATH_ASSERT_UNDEFINED_POLICY false

#include <boost/cstdfloat.hpp>
#include "poison.hpp"
#include <boost/math/concepts/distributions.hpp>

#include "instantiate.hpp"


int main(int argc, char*[])
{
#ifdef BOOST_FLOAT32_C
   if(argc > 1000)
      instantiate(BOOST_FLOAT32_C(1.23));
#endif
   (void)argc;
}

