//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main() {

  try {
    Bureaucrat b("Garik", 190);
    std::cout << b;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat b("Garik", 130);
    Bureaucrat o("Stas", 13);
    b = o;
    std::cout << b;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }


  try {
    Bureaucrat b("Garik", 4);
    for (int i = 0; i < 8; ++i)
      b.Upgrade();
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat b("Garik", 154);
    for (int i = 0; i < 8; ++i)
      b.Downgrade();
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}