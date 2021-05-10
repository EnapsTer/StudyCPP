//
// Created by Arborio Herlinda on 5/9/21.
//

#include "Weapon.hpp"
#include <iostream>

const std::string &Weapon::getType() {
  return type_;
}

void Weapon::setType(const std::string &type) {
  type_ = type;
}
Weapon::Weapon(const std::string &type) : type_(type) {}

Weapon::Weapon() {}

Weapon::Weapon(const Weapon &weapon) : type_(weapon.type_) {}
