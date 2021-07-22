cmake_minimum_required(VERSION 3.19)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes srcs)

add_executable(ex02 main.cpp Array.hpp)