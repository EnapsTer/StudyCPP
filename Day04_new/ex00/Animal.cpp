//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type_("Animal") {}

Animal::Animal(std::string &type) : type_(type) {}

const std::string &Animal::GetType() const {
  return type_;
}

void Animal::MakeSound() const {
  std::cout << "*sound*" << std::endl;
}
