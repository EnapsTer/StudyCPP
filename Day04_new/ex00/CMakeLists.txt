cmake_minimum_required(VERSION 3.19)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex00 Animal.cpp Animal.hpp Cat.cpp Cat.hpp Dog.cpp Dog.hpp main.cpp WrongAnimal.cpp WrongAnimal.hpp WrongCat.cpp WrongCat.hpp)
