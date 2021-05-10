//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>
#include "HumanB.hpp"

void HumanB::attack() {
  std::cout << name_ << " attacks with this " << weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
  weapon_ = &weapon;
}

HumanB::HumanB(const std::string &name) : name_(name) {}
