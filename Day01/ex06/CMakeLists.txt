cmake_minimum_required(VERSION 3.19)
project(ex06)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex06 Weapon.cpp Weapon.hpp main.cpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp)