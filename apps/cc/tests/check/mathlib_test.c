#include "mathlib.h"

#include <check.h>
#include <stdlib.h>

// Test für die add-Funktion
START_TEST(test_add_positive_numbers) {
  ck_assert_int_eq(add(2, 3), 5);
  ck_assert_int_eq(add(10, 20), 30);
  ck_assert_int_eq(add(1, 1), 2);
}
END_TEST

START_TEST(test_add_negative_numbers) {
  ck_assert_int_eq(add(-2, -3), -5);
  ck_assert_int_eq(add(-10, 5), -5);
  ck_assert_int_eq(add(10, -5), 5);
}
END_TEST

START_TEST(test_add_zero) {
  ck_assert_int_eq(add(0, 0), 0);
  ck_assert_int_eq(add(5, 0), 5);
  ck_assert_int_eq(add(0, 7), 7);
}
END_TEST

// Test für die multiply-Funktion
START_TEST(test_multiply_positive_numbers) {
  ck_assert_int_eq(multiply(4, 2), 8);
  ck_assert_int_eq(multiply(3, 5), 15);
  ck_assert_int_eq(multiply(1, 1), 1);
}
END_TEST

START_TEST(test_multiply_negative_numbers) {
  ck_assert_int_eq(multiply(-2, 3), -6);
  ck_assert_int_eq(multiply(-4, -2), 8);
  ck_assert_int_eq(multiply(5, -3), -15);
}
END_TEST

START_TEST(test_multiply_zero) {
  ck_assert_int_eq(multiply(0, 5), 0);
  ck_assert_int_eq(multiply(10, 0), 0);
  ck_assert_int_eq(multiply(0, 0), 0);
}
END_TEST

// Test für die divide-Funktion
START_TEST(test_divide_positive_numbers) {
  ck_assert_int_eq(divide(6, 2), 3);
  ck_assert_int_eq(divide(15, 3), 5);
  ck_assert_int_eq(divide(8, 4), 2);
}
END_TEST

START_TEST(test_divide_negative_numbers) {
  ck_assert_int_eq(divide(-6, 2), -3);
  ck_assert_int_eq(divide(6, -2), -3);
  ck_assert_int_eq(divide(-6, -2), 3);
}
END_TEST

START_TEST(test_divide_by_zero) {
  // Gemäß mathlib.c gibt divide(a, 0) 0 zurück
  ck_assert_int_eq(divide(5, 0), 0);
  ck_assert_int_eq(divide(10, 0), 0);
  ck_assert_int_eq(divide(-5, 0), 0);
}
END_TEST

// Test Suite Setup
Suite *mathlib_suite(void) {
  Suite *s;
  TCase *tc_add, *tc_multiply, *tc_divide;

  s = suite_create("MathLib");

  // Add-Tests
  tc_add = tcase_create("Add");
  tcase_add_test(tc_add, test_add_positive_numbers);
  tcase_add_test(tc_add, test_add_negative_numbers);
  tcase_add_test(tc_add, test_add_zero);
  suite_add_tcase(s, tc_add);

  // Multiply-Tests
  tc_multiply = tcase_create("Multiply");
  tcase_add_test(tc_multiply, test_multiply_positive_numbers);
  tcase_add_test(tc_multiply, test_multiply_negative_numbers);
  tcase_add_test(tc_multiply, test_multiply_zero);
  suite_add_tcase(s, tc_multiply);

  // Divide-Tests
  tc_divide = tcase_create("Divide");
  tcase_add_test(tc_divide, test_divide_positive_numbers);
  tcase_add_test(tc_divide, test_divide_negative_numbers);
  tcase_add_test(tc_divide, test_divide_by_zero);
  suite_add_tcase(s, tc_divide);

  return s;
}

int main(void) {
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = mathlib_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
