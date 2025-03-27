add_library(add STATIC hospital.cpp patient.cpp)

target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/lib/inc)