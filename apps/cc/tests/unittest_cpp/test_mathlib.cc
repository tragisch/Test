#include "UnitTest++/UnitTest++.h"

extern "C" {
#include "mathlib.h"
}

TEST(Addition) { CHECK_EQUAL(5, add(2, 3)); }

TEST(Multiplication) { CHECK_EQUAL(8, multiply(4, 2)); }

TEST(Division) { CHECK_EQUAL(3, divide(6, 2)); }

int main(int, const char *[]) { return UnitTest::RunAllTests(); }