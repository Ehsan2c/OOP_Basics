add_library(add STATIC TicTacToe.cpp)

target_include_directories(add PUBLIC ${CMAKE_SOURCE_DIR}/lib/inc)