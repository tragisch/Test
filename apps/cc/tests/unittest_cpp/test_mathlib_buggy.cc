#include "UnitTest++/UnitTest++.h"

extern "C" {
#include "mathlib.h"
}

TEST(AdditionBug) {
  CHECK_EQUAL(5, add(2, 3));  // schlägt fehl bei buggy
}

TEST(MultiplicationBug) {
  CHECK_EQUAL(8, multiply(4, 2));  // schlägt fehl bei buggy
}

TEST(DivideByZeroBug) {
  CHECK_EQUAL(0, divide(6, 0));  // kann crashen ohne Schutz
}

int main(int, const char *[]) { return UnitTest::RunAllTests(); }