cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex03 FragTrap.cpp FragTrap.hpp main.cpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp)
