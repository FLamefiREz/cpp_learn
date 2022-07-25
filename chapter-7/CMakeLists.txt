cmake_minimum_required(VERSION 3.21)
project(chapter_7)

set(CMAKE_CXX_STANDARD 23)

add_executable(chapter_7 main.cpp)
add_executable(calling 7.1/calling.cpp)
add_executable(protos 7.1/protos.cpp)
add_executable(twoarg 7.2/twoarg.cpp)
