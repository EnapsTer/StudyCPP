//
// Created by Arborio Herlinda on 7/3/21.
//

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, const std::string &type) : Enemy(hp, type) {
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other){
  std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &other) {
  if (this == &other)
	return (*this);
  hp_ = other.hp_;
  type_ = other.type_;
  return (*this);
}

RadScorpion::~RadScorpion() {
  std::cout << "* SPROTCH *" << std::endl;
}