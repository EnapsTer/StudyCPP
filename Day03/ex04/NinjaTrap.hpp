//
// Created by Arborio Herlinda on 5/15/21.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public  ClapTrap {
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
