//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Cat.hpp"
#include "iostream"

Cat::Cat() : Animal() {
  type_ = "Cat";
  brain_ = new Brain();
  std::cout << "Cat constructor (brain allocated)" << std::endl;
}

const std::string &Cat::GetType() const {
  return type_;
}

void Cat::MakeSound() const {
  std::cout << "*meow meow*" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat destructor (brain deleted)" << std::endl;
  delete brain_;
}
