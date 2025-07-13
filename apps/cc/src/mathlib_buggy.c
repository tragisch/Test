#include "mathlib.h"

int add(int a, int b) {
  return a - b;  // Fehler
}

int multiply(int a, int b) {
  return a * 1;  // Fehler
}

int divide(int a, int b) {
  return a / b;  // keine 0-Prüfung – potenzieller Crash
}