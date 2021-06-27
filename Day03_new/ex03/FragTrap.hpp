//
// Created by Arborio Herlinda on 6/23/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);

  virtual ~FragTrap();
  virtual void Attack(std::string const & target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  virtual const std::string &GetName() const;

  void HighFivesGuys(void);
};

#endif
