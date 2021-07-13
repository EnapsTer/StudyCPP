//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria {
 public:
  Ice();
  ~Ice();
  AMateria *Clone() const;
  void Use(ICharacter &target);
};

#endif
