#include "gtest/gtest.h"
extern "C" {
#include "mathlib.h"
}

TEST(MathLibTest, Add) { EXPECT_EQ(add(2, 3), 5); }

TEST(MathLibTest, Multiply) { EXPECT_EQ(multiply(4, 2), 8); }

TEST(MathLibTest, Divide) { EXPECT_EQ(divide(6, 2), 3); }