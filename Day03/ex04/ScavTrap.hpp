//
// Created by Arborio Herlinda on 5/14/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#define CHALLENGES_COUNT 5

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 private:
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int max_energy_points_;
  int level_;
  std::string name_;
  int melee_attack_damage_;
  int ranged_attack_damage_;
  int armor_damage_reduction_;
 public:
  ScavTrap(std::string const &name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(ScavTrap const &other);
  virtual ~ScavTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  void ChallengeNewcomer();
};

#endif