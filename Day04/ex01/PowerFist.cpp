//
// Created by Arborio Herlinda on 7/3/21.
//

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const std::string &name, int ap_cost, int damage)
	: AWeapon(name, ap_cost, damage) {}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other){}

PowerFist &PowerFist::operator=(const PowerFist &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  ap_cost_ = other.ap_cost_;
  damage_ = other.damage_;
  return (*this);
}

void PowerFist::Attack() const {
  std::cout << "* pschhh... SBAM! *" << std::endl;
}