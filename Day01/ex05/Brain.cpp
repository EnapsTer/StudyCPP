//
// Created by Arborio Herlinda on 5/9/21.
//

#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() const{
  std::ostringstream converter;

  converter << std::hex << this;
  return converter.str();
}

void Brain::SetIq(int iq) {
  iq_ = iq;
}

Brain::Brain() {}

Brain::Brain(int iq) {
  iq_ = iq;
}
