load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_test",
    srcs = ["test_mathlib.cc"],
    tags = ["smoke"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@boost.test",
    ],
)

cc_test(
    name = "mathlib_buggy_test",
    srcs = ["test_mathlib_buggy.cc"],
    tags = ["daily"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
        "@boost.test",
    ],
)
