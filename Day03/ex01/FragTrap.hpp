//
// Created by Arborio Herlinda on 5/13/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#define ATTACKS_COUNT 5

#include <string>

class FragTrap {
 private:
  int hit_points_;
  int max_hit_points_;
  int energy_points_;
  int max_energy_points_;
  int level_;
  std::string name_;
  int melee_attack_damage_;
  int ranged_attack_damage_;
  int armor_damage_reduction_;
 public:
  void SetHitPoints(int hit_points);
  FragTrap(std::string const &name);
  FragTrap(FragTrap const &other);
  FragTrap &operator=(FragTrap const &other);
  ~FragTrap();
  const std::string &GetName() const;
  int GetMeleeAttackDamage() const;
  int GetRangedAttackDamage() const;
  int GetHitPoints() const;
  void SetEnergyPoints(int energy_points);
  int GetEnergyPoints() const;
  void RangedAttack(std::string const &target);
  void MeleeAttack(std::string const &target);
  void TakeDamage(unsigned int amount);
  void BeRepaired(unsigned int amount);
  void VaulthunterDotExe(std::string const & target);

  void PrintHpAndEp();
};

#endif
