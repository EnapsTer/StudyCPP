//
// Created by Arborio Herlinda on 5/9/21.
//

#include "Human.hpp"

const Brain &Human::getBrain() const {
  return brain_;
}

Human::Human() : brain_(0) {}

std::string Human::identify(){
  return brain_.identify();
}
