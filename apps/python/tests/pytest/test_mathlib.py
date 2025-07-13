from apps.python.src import mathlib
import sys
import pytest

def test_add():
    assert mathlib.add(2, 3) == 5
    assert mathlib.add(-1, 1) == 0

def test_subtract():
    assert mathlib.subtract(5, 3) == 2
    assert mathlib.subtract(0, 0) == 0

if __name__ == "__main__":
    sys.exit(pytest.main([__file__]))