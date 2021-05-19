//
// Created by Arborio Herlinda on 5/14/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 private:
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int max_energy_points_;
  int melee_attack_damage_;
  int ranged_attack_damage_;
  int armor_damage_reduction_;
 protected:
  std::string name_;
  int level_;
 public:
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(ClapTrap const &other);

  virtual ~ClapTrap();
  virtual void RangedAttack(std::string const &target);
  virtual void MeleeAttack(std::string const &target);
  virtual void TakeDamage(unsigned int amount);
  virtual void BeRepaired(unsigned int amount);

  virtual const std::string &GetName() const;
  virtual int GetMeleeAttackDamage() const;
  virtual int GetRangedAttackDamage() const;
  virtual int GetHitPoints() const;
  virtual int GetEnergyPoints() const;
  virtual int GetMaxHitPoints() const;
  virtual int GetMaxEnergyPoints() const;
  virtual int GetLevel() const;
  virtual int GetArmorDamageReduction() const;
  virtual void SetHitPoints(int hit_points);
  virtual void SetEnergyPoints(int energy_points);
};

#endif
