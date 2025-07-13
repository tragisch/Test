#include <assert.h>
#include <stdio.h>

#include "mathlib.h"

int main() {
  printf("Running mathlib tests...\n");
  assert(add(2, 3) == 5);       // schlägt fehl bei buggy Version
  assert(multiply(4, 2) == 8);  // schlägt fehl bei buggy Version
  assert(divide(6, 0) == 0);    // undefiniert – bei buggy evtl. Crash
  printf("All tests passed.\n");
  return 0;
}