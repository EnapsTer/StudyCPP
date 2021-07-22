//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include <iostream>
#include <string>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate() {
  Base *base = NULL;
  int rand_num = rand() % 3;

  if (rand_num == 0) {
    base = new A();
    std::cout << "Create A class" << std::endl;
  }
  else if (rand_num == 1) {
    base = new B();
    std::cout << "Create B class" << std::endl;
  }
  else if (rand_num == 2) {
    base = new C();
    std::cout << "Create C class" << std::endl;
  }

  return base;
}

void identify(Base* p) {
  if (dynamic_cast<A *>(p) != NULL)
    std::cout << "type is A" << std::endl;
  else if (dynamic_cast<B *>(p) != NULL)
    std::cout << "type is B" << std::endl;
  else
    std::cout << "type is C" << std::endl;
}

void identify(Base& p) {
  if (dynamic_cast<A *>(&p) != NULL)
    std::cout << "type is A" << std::endl;
  else if (dynamic_cast<B *>(&p) != NULL)
    std::cout << "type is B" << std::endl;
  else
    std::cout << "type is C" << std::endl;
}

int main(int argc, char **argv) {
  srand(time(0));
  Base *base = generate();
  std::cout << "identify use pointer" << std::endl;
  identify(base);
  std::cout << "identify use reference" << std::endl;
  identify(*base);
  delete base;
}