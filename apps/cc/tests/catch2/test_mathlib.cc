#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

extern "C" {
#include "mathlib.h"
}

TEST_CASE("add works", "[add]") {
  REQUIRE(add(2, 3) == 5);
  REQUIRE(add(-1, 1) == 0);
}

TEST_CASE("multiply works", "[multiply]") {
  REQUIRE(multiply(4, 2) == 8);
  REQUIRE(multiply(0, 100) == 0);
}

TEST_CASE("divide works", "[divide]") { REQUIRE(divide(6, 2) == 3); }