#include <criterion/criterion.h>

#include "mathlib.h"

Test(mathlib, add) {
  cr_assert_eq(add(2, 3), 5);
  cr_assert_eq(add(-1, 1), 0);
}

Test(mathlib, multiply) {
  cr_assert_eq(multiply(4, 2), 8);
  cr_assert_eq(multiply(0, 100), 0);
}

Test(mathlib, divide) { cr_assert_eq(divide(6, 2), 3); }