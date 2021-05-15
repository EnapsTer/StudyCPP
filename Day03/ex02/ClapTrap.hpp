//
// Created by Arborio Herlinda on 5/14/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 public:
  ClapTrap(std::string const &name);
  ClapTrap(ClapTrap const &other);
  ClapTrap &operator=(ClapTrap const &other);

  virtual ~ClapTrap();
  virtual void RangedAttack(std::string const &target);
  virtual void MeleeAttack(std::string const &target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  const std::string &GetName() const;
  int GetMeleeAttackDamage() const;
  int GetRangedAttackDamage() const;
  int GetHitPoints() const;
  int GetEnergyPoints() const;

  void SetHitPoints(int hit_points);
  void SetEnergyPoints(int energy_points);
 protected:
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int max_energy_points_;
  int level_;
  std::string name_;
  int melee_attack_damage_;
  int ranged_attack_damage_;
  int armor_damage_reduction_;
};

#endif
