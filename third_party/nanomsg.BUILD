load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "nanomsg",
    srcs = ["lib/libnanomsg.dylib"],
    hdrs = glob(["include/nanomsg/*.h"]),
    includes = [
        "include",
        "include/nanomsg",
    ],
    visibility = ["//visibility:public"],
)
