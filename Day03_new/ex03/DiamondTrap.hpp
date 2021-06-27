//
// Created by Arborio Herlinda on 6/24/21.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>


class DiamondTrap : virtual public FragTrap, virtual public ScavTrap{
 private:
  std::string name_;
 public:
  DiamondTrap(std::string const &name);
  DiamondTrap(DiamondTrap const &other);
  DiamondTrap &operator=(DiamondTrap const &other);

  virtual ~DiamondTrap();
  virtual void Attack(std::string const & target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  virtual const std::string &GetName() const;

  void WhoAmI();
};

#endif
