//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef MATERIAS_HPP
#define MATERIAS_HPP
#define MAX_MATERIAS_COUNT 4

#include "AMateria.hpp"

class Materias {
 private:
  AMateria **materias_;
 public:
  Materias();
  ~Materias();
  Materias &operator=(Materias const &other);

  AMateria * GetMateria(int idx);
  AMateria *CloneMateria(int idx);
  AMateria *CloneMateriaByType(std::string const &type);
  void Add(AMateria *m);
  void NullifyIdx(int idx);
  void DeleteIdx(int idx);
  void DeleteMaterias();

};

#endif
