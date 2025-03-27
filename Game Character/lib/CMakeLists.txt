add_library(add STATIC game.cpp character.cpp)

target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/lib/inc)