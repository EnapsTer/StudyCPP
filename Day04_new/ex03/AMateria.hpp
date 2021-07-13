//
// Created by Андре Шагиджанян on 12.07.2021.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
 protected:
  std::string type_;
  AMateria();
 public:
  AMateria(std::string const & type);
  AMateria(AMateria const &other);
  virtual ~AMateria();
  std::string const & GetType() const;
  virtual AMateria* Clone() const = 0;
  virtual void Use(ICharacter& target);
};

#endif
