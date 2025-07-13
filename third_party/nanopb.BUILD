load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "nanopb",
    srcs = ["lib/libprotobuf-nanopb.a"],
    hdrs = glob(["include/nanopb/*.h"]),
    includes = [
        "include",
        "include/nanopb",
    ],
    visibility = ["//visibility:public"],
)
