//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include <iostream>
#include "Cure.hpp"

Cure::~Cure() {}

Cure::Cure() : AMateria() {
  type_ = "cure";
}

AMateria *Cure::Clone() const {
  AMateria *materia = new Cure();
  return materia;
}

void Cure::Use(ICharacter &target) {
  std::cout << "* heals " << target.GetName() <<
      "’s wounds *" << std::endl;
}

