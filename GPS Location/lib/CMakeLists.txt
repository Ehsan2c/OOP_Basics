add_library(add STATIC gps.cpp)

target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/lib/inc)