//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Dog.hpp"
#include "iostream"

Dog::Dog() : Animal() {
  type_ = "Dog";
}

const std::string &Dog::GetType() const {
  return type_;
}

void Dog::MakeSound() const {
  std::cout << "*gav gav*" << std::endl;
}
