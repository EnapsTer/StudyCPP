//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include "MateriaSource.hpp"
MateriaSource::~MateriaSource() {}

void MateriaSource::LearnMateria(AMateria *m) {
  materias_.Add(m);
}

AMateria *MateriaSource::CreateMateria(const std::string &type) {
  return (materias_.CloneMateriaByType(type));
}
