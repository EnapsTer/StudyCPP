//
// Created by Arborio Herlinda on 8/15/21.
//

#include "Easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main() {
  std::list<int> list(5);
  std::cout << "list - ";
  for (int i = 0; i < 5; ++i) {
    list.push_back(i * i);
    std::cout << i << " ";
  }
  std::cout << std::endl;
  try {
    std::cout << "Find 4. Answer: " << *Easyfind(list, 4) << std::endl;
    std::cout << "Find 1. Answer: " << *Easyfind(list, 1) << std::endl;
    std::cout << "Find 5. Answer: " << *Easyfind(list, 5) << std::endl;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  std::vector<int> vector(5);
  std::cout << "vector - ";
  for (int i = 0; i < 5; ++i) {
    list.push_back(i);
    std::cout << i << " ";
  }
  std::cout << std::endl;
  try {
    std::cout << "Find 3. Answer: " << *Easyfind(list, 3) << std::endl;
    std::cout << "Find 1. Answer: " << *Easyfind(list, 2) << std::endl;
    std::cout << "Find 123. Answer: " << *Easyfind(list, 123) << std::endl;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

}
