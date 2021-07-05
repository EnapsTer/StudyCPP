cmake_minimum_required(VERSION 3.19)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex01 AWeapon.cpp AWeapon.hpp PlasmaRifle.cpp PlasmaRifle.hpp PowerFist.cpp PowerFist.hpp Enemy.cpp Enemy.hpp SuperMutant.cpp SuperMutant.hpp RadScorpion.cpp RadScorpion.hpp Character.cpp Character.hpp main.cpp)
