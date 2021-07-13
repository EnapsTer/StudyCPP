//
// Created by Андре Шагиджанян on 12.07.2021.
//

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
  IMateriaSource* src = new MateriaSource();
  src->LearnMateria(new Ice());
  src->LearnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  tmp = src->CreateMateria("ice");
  me->Equip(tmp);
  tmp = src->CreateMateria("cure");
  me->Equip(tmp);
  ICharacter* bob = new Character("bob");
  me->Use(0, *bob);
  me->Use(1, *bob);

  delete bob;
  delete me;
  delete src;

  std::cout << std::endl;
  std::cout << "Some my tests" << std::endl << std::endl;

  IMateriaSource *materia_source = new MateriaSource();
  materia_source->LearnMateria(new Ice());
  materia_source->LearnMateria(new Ice());
  materia_source->LearnMateria(new Ice());
  materia_source->LearnMateria(new Cure());
  materia_source->LearnMateria(new Cure());

  ICharacter *stas = new Character("Stas");
  ICharacter *garik = new Character("Garik");
  AMateria *materia;
  materia = materia_source->CreateMateria("ice");
  stas->Equip(materia);
  materia = materia_source->CreateMateria("cure");
  stas->Equip(materia);
  stas->Use(0, *garik);
  stas->Use(1, *garik);
  stas->Use(3, *garik);
  stas->Unequip(1);
  stas->Use(1, *garik);
  stas->Equip(materia);
  materia = materia_source->CreateMateria("ice");
  stas->Equip(materia);
  materia = materia_source->CreateMateria("cure");
  stas->Equip(materia);
  materia = materia_source->CreateMateria("ice");
  stas->Equip(materia);

  std::cout << std::endl;
  stas->Use(0, *garik);
  stas->Use(1, *garik);
  stas->Use(2, *garik);
  stas->Use(3, *garik);
  stas->Use(4, *garik);
  stas->Use(-4, *garik);

  delete materia;
  delete materia_source;
  delete stas;
  delete garik;
  return 0;
}