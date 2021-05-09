//
// Created by Arborio Herlinda on 5/7/21.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string &name, std::string &type) {
  name_ = name;
  type_ = type;
}

void Zombie::SetName(const std::string &name) {
  name_ = name;
}

void Zombie::SetType(const std::string &type) {
  type_ = type;
}

std::string Zombie::GetName() const {
  return (name_);
}

std::string Zombie::GetType() const {
  return (type_);
}

void Zombie::Announce() {
  std::cout << "<" << name_ << " (" << type_ << ")> " << "Braiiiiiiinnnssss...";
  std::cout << std::endl;
}

Zombie::Zombie() {

}
