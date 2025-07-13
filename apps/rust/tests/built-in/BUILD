load("@rules_rust//rust:defs.bzl", "rust_test")

rust_test(
    name = "mathlib_test",
    srcs = ["smoke_test.rs"],
    deps = ["//apps/rust:mathlib"],
)

rust_test(
    name = "mathlib_buggy_test",
    srcs = ["smoke_test_buggy.rs"],
    deps = ["//apps/rust:mathlib"],
)
