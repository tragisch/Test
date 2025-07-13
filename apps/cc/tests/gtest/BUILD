load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_test(
    name = "mathlib_test",
    srcs = ["test_mathlib.cc"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "mathlib_buggy_test",
    srcs = ["test_mathlib_buggy.cc"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "mathlib_build_issue_test",
    srcs = ["test_mathlib2.cc"],
    deps = [
        "//apps/cc:mathlib_cc",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
