//
// Created by Arborio Herlinda on 5/17/21.
//

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap{
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
  SuperTrap(std::string const &name);
  SuperTrap(const SuperTrap &other);
  SuperTrap &operator=(SuperTrap const &other);
  virtual ~SuperTrap();
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);

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
  void NinjaShoebox(const ClapTrap &clap_trap);
  void NinjaShoebox(const ScavTrap &scav_trap);
  void NinjaShoebox(const FragTrap &frag_trap);
  void NinjaShoebox(const NinjaTrap &ninja_trap);
  void VaulthunterDotExe(std::string const & target);
};

#endif
