#define BOOST_TEST_MODULE MathLibTest
#include <boost/test/included/unit_test.hpp>

extern "C" {
#include "mathlib.h"
}

BOOST_AUTO_TEST_CASE(test_add) {
  BOOST_CHECK_EQUAL(add(2, 3), 5);
  BOOST_CHECK_EQUAL(add(-1, 1), 0);
}

BOOST_AUTO_TEST_CASE(test_multiply) { BOOST_CHECK_EQUAL(multiply(4, 2), 8); }

BOOST_AUTO_TEST_CASE(test_divide) { BOOST_CHECK_EQUAL(divide(6, 2), 3); }