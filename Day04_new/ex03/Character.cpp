//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string &name) : name_(name) {}

Character::Character(const Character &other) :
          name_(other.name_) {
  materias_ = other.materias_;
}

Character &Character::operator=(const Character &other) {
  if (this == &other)
    return *this;
  name_ = other.name_;
  materias_ = other.materias_;
  return *this;
}

std::string const &Character::GetName() const {
  return name_;
}

void Character::Equip(AMateria *m) {
  materias_.Add(m);
}

Character::~Character() {}

void Character::Unequip(int idx) {
  materias_.NullifyIdx(idx);
}

void Character::Use(int idx, ICharacter &target) {
  if (materias_.GetMateria(idx))
    materias_.GetMateria(idx)->Use(target);
}
