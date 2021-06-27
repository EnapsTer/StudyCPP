cmake_minimum_required(VERSION 3.19)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex00 ClapTrap.cpp ClapTrap.hpp FragTrap.cpp
        FragTrap.hpp ScavTrap.hpp ScavTrap.cpp main.cpp DiamondTrap.hpp DiamondTrap.cpp)
