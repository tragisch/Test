#include <criterion/criterion.h>

#include "mathlib.h"

Test(mathlib_buggy, add) {
  cr_assert_eq(add(2, 3), 5);  // schlägt fehl: buggy → 2 - 3
}

Test(mathlib_buggy, multiply) {
  cr_assert_eq(multiply(4, 2), 8);  // schlägt fehl
}

Test(mathlib_buggy, divide_zero) {
  cr_assert_eq(divide(6, 0), 0);  // buggy crasht evtl.
}