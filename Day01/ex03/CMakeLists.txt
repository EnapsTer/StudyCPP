cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex03 Zombie.cpp Zombie.hpp main.cpp ZombieHorde.cpp ZombieHorde.h ../ex04/ex04.cpp)