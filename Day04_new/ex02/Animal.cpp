//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type_("Animal") {
  std::cout << "Animal constructor" << std::endl;
}

const std::string &Animal::GetType() const {
  return type_;
}

Animal::~Animal() {
  std::cout << "Animal destructor" << std::endl;
}
