load("@rules_python//python:defs.bzl", "py_test")

py_test(
    name = "test_mathlib_doctest",
    srcs = ["mathlib.py"],
    main = "mathlib.py",
    tags = ["manual"],
    deps = [
        "@doctest//doctest",
    ],
)

py_test(
    name = "test_mathlib_doctest_fail",
    srcs = ["mathlib_buggy.py"],
    main = "mathlib_buggy.py",
    tags = ["manual"],
    deps = [
        "@doctest//doctest",
    ],
)
