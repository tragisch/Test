load("@rules_python//python:defs.bzl", "py_test")

py_test(
    name = "test_mathlib",
    srcs = [
        "test_mathlib.py",
    ],
    main = "test_mathlib.py",
    visibility = ["//visibility:public"],
    deps = [
        "//apps/python:mathlib",
    ],
)

py_test(
    name = "test_mathlib_buggy",
    srcs = [
        "test_mathlib_buggy.py",
    ],
    main = "test_mathlib_buggy.py",
    visibility = ["//visibility:public"],
    deps = [
        "//apps/python:mathlib",
    ],
)
