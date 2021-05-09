cmake_minimum_required(VERSION 3.19)
project(ex05)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex05 Brain.cpp Brain.hpp Human.cpp Human.hpp main.cpp)