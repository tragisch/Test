load("@rules_go//go:def.bzl", "go_test")

# Fehlerfreier Test
go_test(
    name = "mathlib_test",
    srcs = ["mathlib_test.go"],
    embed = ["//apps/go:mathlib"],
)

# Fehlerhafter Test (manuell ausführbar)
go_test(
    name = "mathlib_test_buggy",
    srcs = ["mathlib_buggy_test.go"],
    embed = ["//apps/go:mathlib"],
    tags = ["manual"],
)
