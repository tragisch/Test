#include "mathlib.h"
#include "unity.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_fail(void) {
  TEST_ASSERT_EQUAL_INT(5, add(2, 3));  // schlägt fehl bei buggy.c
}

void test_multiply_fail(void) {
  TEST_ASSERT_EQUAL_INT(8, multiply(4, 2));  // ebenfalls
}

void test_divide_by_zero(void) {
  TEST_ASSERT_EQUAL_INT(0, divide(6, 0));  // kann crashen bei buggy.c
}
