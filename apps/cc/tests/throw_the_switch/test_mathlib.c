#include "mathlib.h"
#include "unity.h"

void setUp(void) {
  // Optional: init
}

void tearDown(void) {
  // Optional: cleanup
}

void test_add(void) { TEST_ASSERT_EQUAL_INT(5, add(2, 3)); }

void test_multiply(void) { TEST_ASSERT_EQUAL_INT(8, multiply(4, 2)); }

void test_divide(void) { TEST_ASSERT_EQUAL_INT(3, divide(6, 2)); }
