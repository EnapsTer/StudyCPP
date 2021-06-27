//
// Created by Arborio Herlinda on 6/23/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
 protected:
  std::string name_;
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int attack_damage_;
 public:
  ClapTrap(std::string const &name);
  ClapTrap(ClapTrap const &other);
  ClapTrap &operator=(ClapTrap const &other);

  virtual ~ClapTrap();
  virtual void Attack(std::string const & target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  virtual const std::string &GetName() const;

  int GetHitPoints() const;
  int GetEnergyPoints() const;
  int GetAttackDamage() const;

  void SetHitPoints(int hit_points);
  void SetEnergyPoints(int energy_points);

};

#endif
