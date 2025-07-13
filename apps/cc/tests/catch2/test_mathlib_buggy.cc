#define CATCH_CONFIG_MAIN
//#include <catch2/catch.hpp>
#include <catch2/catch_test_macros.hpp>

extern "C" {
#include "mathlib.h"
}

TEST_CASE("add fails", "[add]") {
  REQUIRE(add(2, 3) == 5);  // schlägt fehl bei buggy
}

TEST_CASE("multiply fails", "[multiply]") {
  REQUIRE(multiply(4, 2) == 8);  // schlägt fehl bei buggy
}

TEST_CASE("divide by zero", "[divide]") {
  REQUIRE(divide(6, 0) == 0);  // buggy.c crasht evtl.
}