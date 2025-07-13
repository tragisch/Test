load("@rules_rust//rust:defs.bzl", "rust_binary", "rust_library")

rust_library(
    name = "mathlib",
    srcs = ["src/lib.rs"],
    crate_root = "src/lib.rs",
    visibility = ["//visibility:public"],
)

rust_binary(
    name = "main",
    srcs = ["src/main.rs"],
    crate_root = "src/main.rs",
    deps = [":mathlib"],
)
