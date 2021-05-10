//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
 private:
  std::string name_;
  Weapon *weapon_;
 public:
  HumanB(const std::string &name);
  void attack();
  void setWeapon(Weapon& weapon);
};

#endif
