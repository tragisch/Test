load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_test_doctest",
    srcs = ["test_mathlib.cc"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@doctest//doctest",
    ],
)

cc_test(
    name = "mathlib_buggy_test_doctest",
    srcs = ["test_mathlib_buggy.cc"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
        "@doctest//doctest",
    ],
)
