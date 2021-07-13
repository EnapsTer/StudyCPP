//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Materias.hpp"
#include <string>

class Character : public ICharacter {
 protected:
  Character();
 private:
  std::string name_;
  Materias materias_;
 public:
  Character(std::string const &name);
  Character(Character const &other);
  Character &operator=(Character const &other);
  virtual ~Character();

  std::string const &GetName() const;
  void Equip(AMateria* m);
  void Unequip(int idx);
  void Use(int idx, ICharacter& target);
};

#endif
