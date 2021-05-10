//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
 private:
  std::string name_;
  Weapon &weapon_;
 public:
  HumanA(const std::string &name, const Weapon &weapon);
  void attack();
};

#endif
