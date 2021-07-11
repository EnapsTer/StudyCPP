//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Cat.hpp"
#include "iostream"

Cat::Cat() : Animal() {
  type_ = "Cat";
}

const std::string &Cat::GetType() const {
  return type_;
}

void Cat::MakeSound() const {
  std::cout << "*meow meow*" << std::endl;
}
