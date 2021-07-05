//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <string>

class SuperMutant : public Enemy {
 public:
  SuperMutant();
  SuperMutant(int hp, std::string const &type);
  SuperMutant(SuperMutant const &other);
  SuperMutant &operator=(SuperMutant const &other);
  virtual ~SuperMutant();

  void TakeDamage(int hp);
};

#endif
