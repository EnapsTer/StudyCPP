//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <ostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
 private:
  std::string name_;
  int ap_;
  AWeapon *weapon_;

  Character();
 public:
  Character(std::string const &name);
  Character(std::string const &name, int ap, AWeapon *weapon);
  Character(Character const &other);
  Character &operator=(Character const &other);
  ~Character();

  void RecoverAp();
  void Equip(AWeapon *weapon);
  void Attack(Enemy *enemy);

  std::string const &GetName() const;
  int GetAp() const;
  AWeapon const *GetAWeapon() const;
  void SetAp(int ap);

};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
