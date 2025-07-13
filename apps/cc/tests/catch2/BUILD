load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_test",
    srcs = ["test_mathlib.cc"],
    tags = ["manual"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@catch2//:catch2_main",
    ],
)

cc_test(
    name = "mathlib_buggy_test",
    srcs = ["test_mathlib_buggy.cc"],
    tags = [
        "buggy",
        "manual",
    ],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
        "@catch2//:catch2_main",
    ],
)

test_suite(
    name = "catch2_mathlib_tests",
    tests = [
        ":mathlib_buggy_test",
        ":mathlib_test",
    ],
)
