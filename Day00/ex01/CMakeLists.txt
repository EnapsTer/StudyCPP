cmake_minimum_required(VERSION 3.19)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes srcs)

add_executable(ex01 main.cpp includes/PhoneBook.hpp includes/Contact.hpp srcs/Contact.cpp srcs/PhoneBook.cpp srcs/Contact.cpp srcs/PhoneBook.cpp)