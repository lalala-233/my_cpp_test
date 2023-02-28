add_rules("mode.debug", "mode.release")

set_project("my_cpp_test")

set_languages("c++23")
add_cxxflags("-Wall", "-Wconversion", "-Weffc++", "-Wextra", "-Wpedantic", "-Wshadow", "-Wunused")

includes("project/**/xmake.lua")
