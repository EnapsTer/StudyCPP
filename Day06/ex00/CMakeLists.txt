cmake_minimum_required(VERSION 3.19)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes srcs)

add_executable(ex00 main.cpp srcs/Converter.cpp includes/Converter.hpp srcs/ConvertToInt.cpp includes/ConvertToInt.hpp srcs/ConvertToChar.cpp includes/ConvertToChar.hpp srcs/ConvertToFloat.cpp includes/ConvertToFloat.hpp srcs/ConvertToDouble.cpp includes/ConvertToDouble.hpp srcs/ConverterToType.cpp includes/ConverterToType.hpp)