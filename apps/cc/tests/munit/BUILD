load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "matlib_test",
    srcs = ["test_mathlib.c"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@munit",
    ],
)

cc_test(
    name = "matlib_buggy_test",
    srcs = ["test_mathlib_buggy.c"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
        "@munit",
    ],
)
