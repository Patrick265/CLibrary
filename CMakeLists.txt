cmake_minimum_required(VERSION 3.16)

project(Standard-Library C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS "-Wall -Werror -pedantic")

add_subdirectory(Lib/Unity)
add_subdirectory(SL)
add_subdirectory(Test)