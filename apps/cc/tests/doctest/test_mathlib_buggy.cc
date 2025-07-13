// mathlib_test_doctest_fail.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

extern "C" {
#include "mathlib.h"
}

TEST_CASE("add() fails") {
  CHECK(add(2, 3) == 5);  // schlägt bei buggy fehl
}