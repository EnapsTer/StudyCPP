//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {}

WrongAnimal::WrongAnimal(std::string &type) : type_(type) {}

const std::string &WrongAnimal::GetType() const {
  return type_;
}

void WrongAnimal::MakeSound() const {
  std::cout << "*wrong animal sound*" << std::endl;
}
