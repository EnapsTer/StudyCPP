//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include <iostream>
#include "Ice.hpp"

Ice::~Ice() {}

Ice::Ice() : AMateria() {
  type_ = "ice";
}

AMateria *Ice::Clone() const {
  AMateria *materia = new Ice();
  return materia;
}

void Ice::Use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " <<
          target.GetName() << " *"<< std::endl;
}

