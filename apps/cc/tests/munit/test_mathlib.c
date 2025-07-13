#define MUNIT_ENABLE_ASSERT_ALIASES
#include "mathlib.h"
#include "munit.h"

static MunitResult test_add(const MunitParameter params[], void* data) {
  (void)params;
  (void)data;
  munit_assert_int(add(2, 3), ==, 5);
  munit_assert_int(add(-1, 1), ==, 0);
  return MUNIT_OK;
}

static MunitResult test_multiply(const MunitParameter params[], void* data) {
  (void)params;
  (void)data;
  munit_assert_int(multiply(4, 2), ==, 8);
  munit_assert_int(multiply(0, 100), ==, 0);
  return MUNIT_OK;
}

static MunitResult test_divide(const MunitParameter params[], void* data) {
  (void)params;
  (void)data;
  munit_assert_int(divide(6, 2), ==, 3);
  return MUNIT_OK;
}

static MunitTest test_suite_tests[] = {
    {"/add", test_add, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/multiply", test_multiply, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/divide", test_divide, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}};

static const MunitSuite test_suite = {"/mathlib",        // suite name
                                      test_suite_tests,  // test cases
                                      NULL,              // no sub-suites
                                      1,                 // iterations
                                      MUNIT_SUITE_OPTION_NONE};

int main(int argc, char* argv[]) {
  return munit_suite_main(&test_suite, NULL, argc, argv);
}