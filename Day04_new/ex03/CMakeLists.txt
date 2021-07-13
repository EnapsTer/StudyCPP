cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex03 main.cpp AMateria.cpp AMateria.hpp main.cpp ICharacter.hpp Ice.cpp Ice.hpp Character.cpp Character.hpp Cure.cpp Cure.hpp IMateriaSource.hpp MateriaSource.cpp MateriaSource.hpp Materias.cpp Materias.hpp)
