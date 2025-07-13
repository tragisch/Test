package mathlib

import "testing"

func TestAdd_Bug(t *testing.T) {
	if Add(-1, 2) != 0 {
		t.Errorf("Expected Add(-1, 2) to be 0") // schlägt fehl: Add(-1, 2) == 1
	}
}

func TestSubtract_Bug(t *testing.T) {
	if Subtract(5, 4) != 2 {
		t.Errorf("Expected Subtract(5, 4) to be 2") // schlägt fehl: ergibt 1
	}
}