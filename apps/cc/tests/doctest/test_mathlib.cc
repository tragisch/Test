#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

extern "C" {
#include "mathlib.h"
}

TEST_CASE("add() works") {
  CHECK(add(2, 3) == 5);
  CHECK(add(-1, 1) == 0);
}

TEST_CASE("multiply() works") { CHECK(multiply(4, 2) == 8); }

TEST_CASE("divide() works") { CHECK(divide(6, 2) == 3); }