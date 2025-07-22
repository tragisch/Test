load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "nanopb",
    srcs = ["lib/libprotobuf-nanopb.a"],
    hdrs = glob(["include/nanopb/*.h"]),
    includes = [
        "include",
        "include/nanopb",
    ],
    linkopts = select({
        "@platforms//os:macos": [
            "-L/opt/homebrew/opt/nanopb/lib",
            "-lnanopb",
        ],
        "@platforms//os:linux": [
            "-L/home/linuxbrew/opt/nanopb/lib",
            "-lnanopb",
        ],
        "//conditions:default": [],
    }),
    visibility = ["//visibility:public"],
)
