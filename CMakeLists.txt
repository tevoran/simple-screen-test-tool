cmake_minimum_required(VERSION 3.16)
project("simple-screen-test-tool")

find_library(SDL2 SDL2)
find_package(SDL2 REQUIRED)

#include_directories(src/game/game/)

set(CMAKE_C_FLAGS "")

#creating Star Battle Command
file(GLOB_RECURSE "sstt" SRC src/*.c)
add_executable(sstt ${sstt})

target_link_libraries(sstt LINK_PRIVATE "${SDL2}")
