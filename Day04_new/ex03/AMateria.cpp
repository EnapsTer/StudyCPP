//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string &type) : type_(type) {}
AMateria::AMateria(const AMateria &other) : type_(other.type_) {}
AMateria::AMateria() {}
AMateria::~AMateria() {}

void AMateria::Use(ICharacter &target) {
  std::cout << "* use materia to " << target.GetName()
      << " *" << std::endl;
}

std::string const &AMateria::GetType() const {
  return type_;
}



