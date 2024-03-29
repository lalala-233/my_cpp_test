add_cxxflags("-Wall", "-Wconversion", "-Weffc++", "-Wextra", "-Wpedantic", "-Wshadow", "-Wunused")

includes("project/**/xmake.lua")

set_languages("c++23")

set_policy("build.warning", true)

set_project("my_cpp_test")

add_rules("mode.debug", "mode.release")
