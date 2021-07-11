//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
  type_ = "WrongCat";
}
const std::string &WrongCat::GetType() const {
  return type_;
}

void WrongCat::MakeSound() const {
  std::cout << "*wrong meow meow*" << std::endl;
}

