//
// Created by Arborio Herlinda on 5/13/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#define ATTACKS_COUNT 5

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
 public:
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);
  virtual ~FragTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  void VaulthunterDotExe(std::string const & target);
};

#endif
