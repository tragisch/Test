load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "Criterion",
    srcs = ["lib/libcriterion.a"],
    hdrs = glob([
        "include/criterion/*.h",
        "include/criterion/internal/*.h",
        "include/criterion/new/*.h",
    ]),
    copts = ["-Wno-unused-but-set-variable"],
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = [
        "@libgit2",
        "@nanomsg",
        "@nanopb",
        "@protobuf-c",
    ],
)

# load("@rules_foreign_cc//foreign_cc:meson.bzl", "meson")

# meson(
#     name = "Criterion",
#     lib_source = ":Criterion_srcs",
# )
