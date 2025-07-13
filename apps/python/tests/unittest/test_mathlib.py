import unittest
from apps.python.src import mathlib

class TestMathLib(unittest.TestCase):
    def test_add(self):
        self.assertEqual(mathlib.add(2, 3), 5)
        self.assertEqual(mathlib.add(-1, 1), 0)

if __name__ == "__main__":
    unittest.main()