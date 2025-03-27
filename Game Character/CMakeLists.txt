cmake_minimum_required(VERSION 3.31)
project(gamecharacter)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

include_directories(lib/inc)

add_subdirectory(lib)
add_subdirectory(src)
