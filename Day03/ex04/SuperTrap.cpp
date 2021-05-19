// Created by Arborio Herlinda on 5/17/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : FragTrap(name),
      NinjaTrap(name), ClapTrap(name),
      max_hit_points_(FragTrap::GetMaxHitPoints()),
      hit_points_(FragTrap::GetHitPoints()),
      max_energy_points_(NinjaTrap::GetMaxEnergyPoints()),
      energy_points_(NinjaTrap::GetEnergyPoints()),
      melee_attack_damage_(NinjaTrap::GetMeleeAttackDamage()),
      ranged_attack_damage_(FragTrap::GetRangedAttackDamage()),
      armor_damage_reduction_(FragTrap::GetArmorDamageReduction()) {
  std::cout << name <<": N1NJ4-TP constructor" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other) :
      ClapTrap(other),
	  FragTrap(other),
	  NinjaTrap(other),
	  max_hit_points_(other.max_hit_points_),
	  hit_points_(other.hit_points_),
	  max_energy_points_(other.max_energy_points_),
	  energy_points_(other.energy_points_),
	  melee_attack_damage_(other.melee_attack_damage_),
	  ranged_attack_damage_(other.ranged_attack_damage_),
	  armor_damage_reduction_(other.armor_damage_reduction_){
  std::cout << name_ <<": N1NJ4-TP constructor" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &other) {
	if (this == &other)
	  return *this;
	name_ = other.name_;
	max_hit_points_ = other.max_hit_points_;
	max_energy_points_ = other.max_energy_points_;
	level_ = other.level_;
	melee_attack_damage_ = other.melee_attack_damage_;
	ranged_attack_damage_ = other.ranged_attack_damage_;
	armor_damage_reduction_ = other.armor_damage_reduction_;
	hit_points_ = other.hit_points_;
	energy_points_ = other.energy_points_;
	return *this;
}

SuperTrap::~SuperTrap() {
  std::cout << name_ <<": N1NJ4-TP destructor" << std::endl;
}

void SuperTrap::RangedAttack(const std::string &target) {
  FragTrap::RangedAttack(target);
}

void SuperTrap::MeleeAttack(const std::string &target) {
  NinjaTrap::MeleeAttack(target);
}

void SuperTrap::TakeDamage(unsigned int amount) {
  std::cout << "N1NJ4-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ + armor_damage_reduction_ - static_cast<int>(amount));
}

void SuperTrap::BeRepaired(unsigned int amount) {
  std::cout << "N1NJ4-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

const std::string &SuperTrap::GetName() const {
  return name_;
}

int SuperTrap::GetMeleeAttackDamage() const {
  return melee_attack_damage_;
}

int SuperTrap::GetRangedAttackDamage() const {
  return ranged_attack_damage_;
}

int SuperTrap::GetHitPoints() const {
  return hit_points_;
}

int SuperTrap::GetEnergyPoints() const {
  return energy_points_;
}

int SuperTrap::GetMaxHitPoints() const {
  return max_hit_points_;
}

int SuperTrap::GetMaxEnergyPoints() const {
  return max_energy_points_;
}

int SuperTrap::GetLevel() const {
  return level_;
}

int SuperTrap::GetArmorDamageReduction() const {
  return armor_damage_reduction_;
}

void SuperTrap::SetHitPoints(int hit_points) {
  if (hit_points < 0)
	hit_points_ = 0;
  else if (hit_points > max_hit_points_)
	hit_points_ = max_hit_points_;
  else
	hit_points_ = hit_points;
}

void SuperTrap::SetEnergyPoints(int energy_points) {
  if (energy_points < 0)
	energy_points_ = 0;
  else if (energy_points > max_energy_points_)
	energy_points_ = max_energy_points_;
  else
	energy_points_ = energy_points;
}
