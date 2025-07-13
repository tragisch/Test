load("@pip//:requirements.bzl", "requirement")
load("@rules_python//python:defs.bzl", "py_test")
load("@rules_python//python:pip.bzl", "compile_pip_requirements")

py_test(
    name = "test_mathlib",
    size = "small",
    srcs = ["test_mathlib.py"],
    imports = ["."],
    main = "test_mathlib.py",
    tags = ["smoke"],
    deps = [
        "//apps/python:mathlib",
        requirement("pytest"),
    ],
)

py_test(
    name = "test_mathlib_buggy",
    size = "small",
    srcs = ["test_mathlib_buggy.py"],
    imports = ["."],
    main = "test_mathlib_buggy.py",
    tags = ["smoke"],
    deps = [
        "//apps/python:mathlib",
        requirement("pytest"),
    ],
)

compile_pip_requirements(
    name = "requirements",
    requirements_in = "requirements.txt",
    requirements_txt = "requirements_lock.txt",
)
