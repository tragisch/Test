# file: mathlib_buggy.py
import sys

def add(a, b):
    """
    Gibt die Summe zweier Zahlen zurück.

    >>> add(2, 3)
    5
    >>> add(-1, 1)
    1   # Fehler: erwartetes Ergebnis sollte 0 sein
    """
    return a + b

if __name__ == "__main__":
    import doctest
    sys.exit(doctest.testmod())
 