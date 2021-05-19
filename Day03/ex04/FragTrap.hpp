//
// Created by Arborio Herlinda on 5/13/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#define ATTACKS_COUNT 5

#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
 private:
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int max_energy_points_;
//  int level_;
//  std::string name_;
  int melee_attack_damage_;
  int ranged_attack_damage_;
  int armor_damage_reduction_;
 public:
  FragTrap(std::string const &name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(FragTrap const &other);
  virtual ~FragTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  virtual void VaulthunterDotExe(std::string const & target);

  const std::string &GetName() const;
  int GetMeleeAttackDamage() const;
  int GetRangedAttackDamage() const;
  int GetHitPoints() const;
  int GetEnergyPoints() const;
  int GetMaxHitPoints() const;
  int GetMaxEnergyPoints() const;
  int GetLevel() const;
  int GetArmorDamageReduction() const;
  void SetHitPoints(int hit_points);
  void SetEnergyPoints(int energy_points);
};

#endif
