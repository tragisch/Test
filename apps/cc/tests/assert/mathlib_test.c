#include <assert.h>

#include "mathlib.h"

int main() {
  assert(add(2, 3) == 5);
  assert(multiply(4, 2) == 8);
  assert(divide(6, 2) == 3);
  return 0;
}