//
// Created by Андре Шагиджанян on 22.07.2021.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print_elem(T &elem) {
  std::cout << elem << ", ";
}

template <typename T>
void iter(T *array, int length, void (*function)(T &)) {
  for (int i = 0; i < length; ++i)
    function(array[i]);
}

#endif
