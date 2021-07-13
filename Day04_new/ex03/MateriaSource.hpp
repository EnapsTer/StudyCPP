//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Materias.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 private:
  Materias materias_;
 public:
  ~MateriaSource();
  void LearnMateria(AMateria *m);
  AMateria* CreateMateria(std::string const & type);
};

#endif
