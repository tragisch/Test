load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "nanomsg",
    srcs = ["lib/libnanomsg.dylib"],
    hdrs = glob(["include/nanomsg/*.h"]),
    includes = [
        "include",
        "include/nanomsg",
    ],
    linkopts = select({
        "@platforms//os:macos": [
            "-L/opt/homebrew/opt/nanomsg/lib",
            "-lnanomsg",
        ],
        "@platforms//os:linux": [
            "-L/home/linuxbrew/opt/nanomsg/lib",
            "-lnanomsg",
        ],
        "//conditions:default": [],
    }),
    visibility = ["//visibility:public"],
)
