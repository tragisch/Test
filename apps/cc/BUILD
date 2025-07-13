load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "mathlib_cc",
    srcs = ["src/mathlib.c"],
    hdrs = ["include/mathlib.h"],
    includes = ["include"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "mathlib_buggy_cc",
    srcs = ["src/mathlib_buggy.c"],
    hdrs = ["include/mathlib.h"],
    includes = ["include"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "main",
    srcs = ["main.c"],
    deps = [
        ":mathlib_cc",
    ],
)

test_suite(
    name = "cc_tests",
    tests = [
        "//apps/cc/tests/assert:mathlib_buggy_test",
        "//apps/cc/tests/assert:mathlib_test",
      #  "//apps/cc/tests/criterion:mathlib_buggy_test",
    ],
)
