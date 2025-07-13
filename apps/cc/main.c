#include <stdio.h>

#include "mathlib.h"

int main() {
  int a = 10, b = 5;

  printf("Add: %d\n", add(a, b));
  printf("Multiply: %d\n", multiply(a, b));
  printf("Divide: %d\n", divide(a, b));

  // Test with zero to check for potential crash
  printf("Divide by zero: %d\n", divide(a, 0));

  return 0;
}