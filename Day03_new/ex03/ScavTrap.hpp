//
// Created by Arborio Herlinda on 6/23/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(std::string const &name);
  ScavTrap(ScavTrap const &other);
  ScavTrap &operator=(ScavTrap const &other);

  virtual ~ScavTrap();
  virtual void Attack(std::string const & target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  virtual const std::string &GetName() const;

  void guardGate();
};

#endif
