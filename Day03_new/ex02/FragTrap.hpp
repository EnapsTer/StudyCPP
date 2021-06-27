//
// Created by Arborio Herlinda on 6/23/21.
//

#ifndef FragTRAP_HPP
#define FragTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
 public:
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);

  virtual ~FragTrap();
  virtual void Attack(std::string const & target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  void HighFivesGuys(void);
};

#endif
