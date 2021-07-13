//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "Dog.hpp"
#include "iostream"

Dog::Dog() : Animal() {
  type_ = "Dog";
  brain_ = new Brain();
  std::cout << "Dog constructor (brain allocated)" << std::endl;
}

const std::string &Dog::GetType() const {
  return type_;
}

void Dog::MakeSound() const {
  std::cout << "*gav gav*" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog destructor (brain deleted)" << std::endl;
  delete brain_;
}
