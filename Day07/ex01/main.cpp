//
// Created by Андре Шагиджанян on 22.07.2021.
//

#include <iostream>
#include "Iter.hpp"

int main() {
  int array[] = {1, 2, 3, 4, 5};
  iter(array, 5, print_elem);

  std::cout << std::endl << std::endl;

  char c_arr[] = {'I', 'L', 'V', 'E', 'V', 'S'};
  iter(c_arr, 6, print_elem);

  std::cout << std::endl << std::endl;

  std::string arrs[] = {"sve", "tan", "sevol", "i"};
  iter(arrs, 4, print_elem);
  return 0;
}
