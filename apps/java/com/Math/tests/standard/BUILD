load("@rules_java//java:java_test.bzl", "java_test")

java_test(
    name = "MathLibTest",
    srcs = ["MathLibTest.java"],
    deps = [
        "//apps/java/com/Math:mathlib",
    ],
)

java_test(
    name = "MathBuggyLibTest",
    srcs = ["MathBuggyLibTest.java"],
    deps = [
        "//apps/java/com/Math:mathlib",
    ],
)
