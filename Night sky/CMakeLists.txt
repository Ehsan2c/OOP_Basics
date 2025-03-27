cmake_minimum_required(VERSION 3.31)
project(nightsky)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

set(RAYLIB_DIR "${CMAKE_SOURCE_DIR}/r")

include_directories(${RAYLIB_DIR})
link_directories(${RAYLIB_DIR})

include_directories(lib/inc)

add_subdirectory(lib)
add_subdirectory(src)


