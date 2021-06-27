//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>
#include "Human.hpp"

int main()
{
  Human bob;
  std::cout << bob.identify() << std::endl;
  std::cout << bob.getBrain().identify() << std::endl;
}
