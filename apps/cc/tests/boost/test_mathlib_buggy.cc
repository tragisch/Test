#define BOOST_TEST_MODULE MathLibTestFail
#include <boost/test/included/unit_test.hpp>

extern "C" {
#include "mathlib.h"
}

BOOST_AUTO_TEST_CASE(test_add_fail) {
  BOOST_CHECK_EQUAL(add(2, 3), 5);  // schlägt fehl
}

BOOST_AUTO_TEST_CASE(test_multiply_fail) {
  BOOST_CHECK_EQUAL(multiply(4, 2), 8);  // schlägt fehl
}

BOOST_AUTO_TEST_CASE(test_divide_zero) {
  BOOST_CHECK_EQUAL(divide(6, 0), 0);  // evtl. Crash
}