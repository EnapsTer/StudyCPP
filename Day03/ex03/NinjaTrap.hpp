//
// Created by Arborio Herlinda on 5/15/21.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public  ClapTrap {
 public:
  NinjaTrap(std::string const &name);
  NinjaTrap(NinjaTrap const &other);
  NinjaTrap &operator=(NinjaTrap const &other);
  virtual ~NinjaTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  void NinjaShoebox(const ClapTrap &clap_trap);
  void NinjaShoebox(const ScavTrap &scav_trap);
  void NinjaShoebox(const FragTrap &frag_trap);
  void NinjaShoebox(const NinjaTrap &ninja_trap);
};

#endif
