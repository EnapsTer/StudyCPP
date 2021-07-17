//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main() {
  Bureaucrat *b;

  try {
    b = new Bureaucrat("Garik", 190);
    std::cout << b;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  delete b;

  try {
    b = new Bureaucrat("Garik", 130);
    Bureaucrat o = *b;
    std::cout << o;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  delete b;

  try {
    b = new Bureaucrat("Garik", 4);
    for (int i = 0; i < 8; ++i)
      b->Upgrade();
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  delete b;

  try {
    b = new Bureaucrat("Garik", 154);
    for (int i = 0; i < 8; ++i)
      b->Downgrade();
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
 // TODO test leak
  return 0;
}