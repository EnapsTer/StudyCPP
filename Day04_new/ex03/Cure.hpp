//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure();
  ~Cure();
  AMateria *Clone() const;
  void Use(ICharacter &target);
};


#endif
