//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
 private:
  std::string type_;
 public:
  Weapon(const std::string &type);
  Weapon(const Weapon &weapon);
  Weapon();
  const std::string &getType();
  void setType(const std::string &type);
};

#endif
