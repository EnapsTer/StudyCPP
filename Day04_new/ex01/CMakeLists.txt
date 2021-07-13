cmake_minimum_required(VERSION 3.19)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex01 Brain.cpp Brain.hpp Animal.cpp Animal.hpp Cat.cpp Cat.hpp Dog.cpp Dog.hpp main.cpp)
