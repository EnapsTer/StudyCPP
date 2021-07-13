//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void LearnMateria(AMateria*) = 0;
  virtual AMateria* CreateMateria
                    (std::string const & type) = 0;
};

#endif
