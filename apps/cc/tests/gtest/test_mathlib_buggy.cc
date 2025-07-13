#include "gtest/gtest.h"
extern "C" {
#include "mathlib.h"
}

TEST(MathLibTestFail, Add) {
  EXPECT_EQ(add(2, 3), 5);  // schlägt fehl bei buggy.c
}

TEST(MathLibTestFail, Multiply) {
  EXPECT_EQ(multiply(4, 2), 8);  // schlägt fehl bei buggy.c
}

TEST(MathLibTestFail, DivideByZero) {
  EXPECT_EQ(divide(6, 0), 0);  // buggy.c crasht evtl. ohne 0-check
}