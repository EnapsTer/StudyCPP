//
// Created by Arborio Herlinda on 5/14/21.
//

#include "ClapTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name_(name), max_hit_points_(100),
                  max_energy_points_(100), level_(1), melee_attack_damage_(30),
                  ranged_attack_damage_(20), armor_damage_reduction_(5) {
  std::cout << name <<": CL4P-TP constructor" << std::endl;
  hit_points_ = max_hit_points_;
  energy_points_ = max_energy_points_;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name_(other.name_), max_hit_points_(other.max_hit_points_),
	  max_energy_points_(other.max_energy_points_), level_(other.level_),
	  melee_attack_damage_(other.melee_attack_damage_),
	  ranged_attack_damage_(other.ranged_attack_damage_),
	  armor_damage_reduction_(other.armor_damage_reduction_),
	  hit_points_(other.hit_points_), energy_points_(other.energy_points_) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
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

ClapTrap::~ClapTrap() {
  std::cout << name_ << ": CL4P-TP destructor" << std::endl;
}

void ClapTrap::MeleeAttack(const std::string &target) {
  std::cout << "CL4P-TP " << name_ << " attacks " << target
			<< " at melee, causing " << melee_attack_damage_
			<< " points of damage!" << std::endl;
}

void ClapTrap::RangedAttack(const std::string &target) {
  std::cout << "CL4P-TP " << name_ << " attacks " << target
			<< " at range, causing " << ranged_attack_damage_
			<< " points of damage!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int amount) {
  std::cout << "CL4P-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;

  SetHitPoints(
  	hit_points_ + armor_damage_reduction_ - static_cast<int>(amount)
  	);
}

void ClapTrap::BeRepaired(unsigned int amount) {
  std::cout << "CL4P-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetEnergyPoints(
  	energy_points_ - static_cast<int>(amount)
  	);
}

const std::string &ClapTrap::GetName() const {
  return name_;
}

int ClapTrap::GetHitPoints() const {
  return hit_points_;
}

int ClapTrap::GetEnergyPoints() const {
  return energy_points_;
}

int ClapTrap::GetMeleeAttackDamage() const {
  return melee_attack_damage_;
}

int ClapTrap::GetRangedAttackDamage() const {
  return ranged_attack_damage_;
}

void ClapTrap::SetHitPoints(int hit_points) {
  if (hit_points < 0)
    hit_points_ = 0;
  else if (hit_points > max_hit_points_)
    hit_points_ = max_hit_points_;
  else
    hit_points_ = hit_points;
}

void ClapTrap::SetEnergyPoints(int energy_points) {
  if (energy_points < 0)
	energy_points_ = 0;
  else if (energy_points > max_energy_points_)
	energy_points_ = max_energy_points_;
  else
	energy_points_ = energy_points;
}

int ClapTrap::GetMaxHitPoints() const {
  return max_hit_points_;
}

int ClapTrap::GetMaxEnergyPoints() const {
  return max_energy_points_;
}

int ClapTrap::GetLevel() const {
  return level_;
}

int ClapTrap::GetArmorDamageReduction() const {
  return armor_damage_reduction_;
}
