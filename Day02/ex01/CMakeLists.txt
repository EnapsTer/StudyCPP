cmake_minimum_required(VERSION 3.19)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex01 Fixed.cpp Fixed.hpp main.cpp)
