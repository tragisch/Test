package mathlib

import "testing"

func TestAdd_OK(t *testing.T) {
	if Add(2, 3) != 5 {
		t.Errorf("Add(2, 3) should be 5")
	}
}

func TestSubtract_OK(t *testing.T) {
	if Subtract(10, 3) != 7 {
		t.Errorf("Subtract(10, 3) should be 7")
	}
}