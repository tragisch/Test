# file: mathlib.py
import sys

def add(a, b):
    """
    Gibt die Summe zweier Zahlen zurück.

    >>> add(2, 3)
    5
    >>> add(-1, 1)
    0
    """
    return a + b

if __name__ == "__main__":
    import doctest
    sys.exit(doctest.testmod())