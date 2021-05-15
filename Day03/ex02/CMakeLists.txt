cmake_minimum_required(VERSION 3.19)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex02 FragTrap.cpp FragTrap.hpp main.cpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp)
