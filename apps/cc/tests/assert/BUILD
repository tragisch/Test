load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_buggy_test",
    srcs = ["mathlib_buggy_test.c"],
    tags = ["manual"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
    ],
)

cc_test(
    name = "mathlib_test",
    srcs = ["mathlib_test.c"],
    deps = [
        "//apps/cc:mathlib_cc",
    ],
)

cc_test(
    name = "mathlib_build_issue_test",
    srcs = ["mathlib_test2.c"],
    deps = [
        "//apps/cc:mathlib_cc",
    ],
)
