load("//tools:unity_test.bzl", "unity_test")

unity_test(
    name = "mathlib_test",
    srcs = ["test_mathlib.c"],
    my_config = ["my_config.yml"],
    deps = [
        "//apps/cc:mathlib_cc",
    ],
)

unity_test(
    name = "mathlib_buggy_test",
    srcs = ["test_mathlib_buggy.c"],
    my_config = ["my_config.yml"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
    ],
)

unity_test(
    name = "mathlib_build_issue_test",
    srcs = ["test_mathlib_buggy2.c"],
    my_config = ["my_config.yml"],
    deps = [
        "//apps/cc:mathlib_buggy_cc",
    ],
)
