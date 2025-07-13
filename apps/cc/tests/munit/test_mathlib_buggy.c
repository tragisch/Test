#define MUNIT_ENABLE_ASSERT_ALIASES
#include "mathlib.h"  // wird mit buggy.c gelinkt
#include "munit.h"

static MunitResult test_add_fails(const MunitParameter params[], void* data) {
  (void)params;
  (void)data;
  // buggy.c implementiert: return a - b;
  munit_assert_int(add(2, 3), ==, 5);  // schlägt fehl
  return MUNIT_OK;
}

static MunitResult test_multiply_fails(const MunitParameter params[],
                                       void* data) {
  (void)params;
  (void)data;
  // buggy.c: multiply returns a * 1;
  munit_assert_int(multiply(4, 2), ==, 8);  // schlägt fehl
  return MUNIT_OK;
}

static MunitResult test_divide_by_zero_crash(const MunitParameter params[],
                                             void* data) {
  (void)params;
  (void)data;
  // buggy.c: kein 0-check, evtl. Crash
  munit_assert_int(divide(6, 0), ==, 0);  // kann crashen oder segfault
  return MUNIT_OK;
}

static MunitTest test_suite_tests[] = {
    {"/add_fails", test_add_fails, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/multiply_fails", test_multiply_fails, NULL, NULL, MUNIT_TEST_OPTION_NONE,
     NULL},
    {"/divide_by_zero_crash", test_divide_by_zero_crash, NULL, NULL,
     MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}};

static const MunitSuite test_suite = {"/mathlib_buggy", test_suite_tests, NULL,
                                      1, MUNIT_SUITE_OPTION_NONE};

int main(int argc, char* argv[]) {
  return munit_suite_main(&test_suite, NULL, argc, argv);
}