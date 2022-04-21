cmake_minimum_required(VERSION 3.16)

project(Standard-Library C)

set(CMAKE_C_STANDARD 11)



include(CTest)

add_subdirectory(Lib/Unity)

# 
set(CMAKE_C_FLAGS "-std=c17 -Wall -Wextra -Werror -Wfloat-equal -Wcast-align \
					-Waggregate-return -Wwrite-strings -pedantic -g")
add_subdirectory(SL)
add_subdirectory(Test)