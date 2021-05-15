//
// Created by Arborio Herlinda on 5/14/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#define CHALLENGES_COUNT 5

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &other);
  ScavTrap &operator=(ScavTrap const &other);
  virtual ~ScavTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  void ChallengeNewcomer();
};

#endif