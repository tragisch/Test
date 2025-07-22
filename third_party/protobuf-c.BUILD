"""BUILD file for protobuf-c optimized for git repository usage"""
load("@protobuf//bazel:cc_proto_library.bzl", "cc_proto_library")
load("@protobuf//bazel:proto_library.bzl", "proto_library")
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "libprotobuf_c",
    srcs = ["protobuf-c/protobuf-c.c"],
    hdrs = ["protobuf-c/protobuf-c.h"],
    copts = [
        "-DPACKAGE_VERSION=\"1.5.2\"",
        "-DPACKAGE_STRING=\"protobuf-c 1.5.2\"",
        "-std=c99",
        "-O2",
        "-DNDEBUG",
    ],
    includes = ["protobuf-c"],
    strip_include_prefix = "protobuf-c",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "protobuf_c",
    deps = [":libprotobuf_c"],
    visibility = ["//visibility:public"],
)

proto_library(
    name = "local_descriptor_proto",
    srcs = ["google/protobuf/descriptor.proto"],
)

proto_library(
    name = "protobuf_c_proto",
    srcs = ["protobuf-c/protobuf-c.proto"],
    deps = [":local_descriptor_proto"],
)

cc_proto_library(
    name = "protobuf_c_cc_proto",
    deps = [":protobuf_c_proto"],
)

cc_binary(
    name = "protoc_gen_c",
    srcs = [
        "protoc-gen-c/c_bytes_field.cc",
        "protoc-gen-c/c_bytes_field.h",
        "protoc-gen-c/c_enum.cc",
        "protoc-gen-c/c_enum.h",
        "protoc-gen-c/c_enum_field.cc",
        "protoc-gen-c/c_enum_field.h",
        "protoc-gen-c/c_extension.cc",
        "protoc-gen-c/c_extension.h",
        "protoc-gen-c/c_field.cc",
        "protoc-gen-c/c_field.h",
        "protoc-gen-c/c_file.cc",
        "protoc-gen-c/c_file.h",
        "protoc-gen-c/c_generator.cc",
        "protoc-gen-c/c_generator.h",
        "protoc-gen-c/c_helpers.cc",
        "protoc-gen-c/c_helpers.h",
        "protoc-gen-c/c_message.cc",
        "protoc-gen-c/c_message.h",
        "protoc-gen-c/c_message_field.cc",
        "protoc-gen-c/c_message_field.h",
        "protoc-gen-c/c_primitive_field.cc",
        "protoc-gen-c/c_primitive_field.h",
        "protoc-gen-c/c_service.cc",
        "protoc-gen-c/c_service.h",
        "protoc-gen-c/c_string_field.cc",
        "protoc-gen-c/c_string_field.h",
        "protoc-gen-c/compat.h",
        "protoc-gen-c/main.cc",
    ],
    copts = [
        "-std=c++17",
        "-O2",
        "-DNDEBUG",
        "-DPACKAGE_STRING=\"\\\"protobuf-c 1.5.2\\\"\"",
        "-DPACKAGE_VERSION=\"\\\"1.5.2\\\"\"",
    ],
    includes = [
        ".",
        "protoc-gen-c",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":libprotobuf_c",
        ":protobuf_c_cc_proto",
        "@protobuf//:protobuf",
        "@protobuf//:protoc_lib",
    ],
)
