# The Flutter tooling requires that developers have CMake 3.10 or later
# installed. You should not increase this version, as doing so will cause
# the plugin to fail to compile for some customers of the plugin.
cmake_minimum_required(VERSION 3.10)

project(vendored_lib_library VERSION 0.0.1 LANGUAGES C)

add_library(vendored_lib STATIC
  "vendored_lib.c"
)

set_target_properties(vendored_lib PROPERTIES
  PUBLIC_HEADER vendored_lib.h
  OUTPUT_NAME "vendored_lib"
)

target_compile_definitions(vendored_lib PUBLIC DART_SHARED_LIB)
