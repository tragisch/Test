load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_test",
    srcs = ["mathlib_test.c"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@check",
    ],
)
