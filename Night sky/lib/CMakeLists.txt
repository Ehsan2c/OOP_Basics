add_library(add STATIC star.cpp sky.cpp)

target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/lib/inc)