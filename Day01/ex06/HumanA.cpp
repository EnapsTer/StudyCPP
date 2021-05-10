//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>
#include <string>
#include "HumanA.hpp"

void HumanA::attack() {
  std::cout << name_ << " attacks with this " << weapon_.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, const Weapon &weapon)
	: name_(name), weapon_(const_cast<Weapon &>(weapon)) {}
