load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "protobuf-c",
    srcs = ["lib/libprotobuf-c.a"],
    hdrs = glob(["include/protobuf-c/*.h"]),
    includes = [
        "include",
        "include/protobuf-c",
    ],
    visibility = ["//visibility:public"],
)
