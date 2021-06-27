//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : name_(name), max_hit_points_(100),
											  max_energy_points_(100), level_(1), melee_attack_damage_(30),
											  ranged_attack_damage_(20), armor_damage_reduction_(5) {
  std::cout << name <<": Hi! Let's get this party started! Sheeeesh" << std::endl;
  hit_points_ = max_hit_points_;
  energy_points_ = max_energy_points_;
}

FragTrap::FragTrap(FragTrap const &other)
	: name_(other.name_), max_hit_points_(other.max_hit_points_),
	  max_energy_points_(other.max_energy_points_), level_(other.level_),
	  melee_attack_damage_(other.melee_attack_damage_),
	  ranged_attack_damage_(other.ranged_attack_damage_),
	  armor_damage_reduction_(other.armor_damage_reduction_),
	  hit_points_(other.hit_points_), energy_points_(other.energy_points_) {}

FragTrap &FragTrap::operator=(const FragTrap &other) {
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

FragTrap::~FragTrap() {
  std::cout << name_ << ": Nooo I'm too pretty to die! Sheeesh" << std::endl;
}

void FragTrap::MeleeAttack(const std::string &target) {
  std::cout << "FR4G-TP " << name_ << " attacks " << target
			<< " at melee, causing " << melee_attack_damage_
			<< " points of damage!" << std::endl;
}

void FragTrap::RangedAttack(const std::string &target) {
  std::cout << "FR4G-TP " << name_ << " attacks " << target
			<< " at range, causing " << ranged_attack_damage_
			<< " points of damage!" << std::endl;
}

void FragTrap::TakeDamage(unsigned int amount) {
  std::cout << "FR4G-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ + armor_damage_reduction_ - static_cast<int>(amount));
}

void FragTrap::BeRepaired(unsigned int amount) {
  std::cout << "FR4G-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

void FragTrap::VaulthunterDotExe(const std::string &target) {
  char attacks[ATTACKS_COUNT][50] = {
	  "Freeze! I don't know why I said that.", "Eat bomb, baddie!",
	  "F to the R to the 4 to the G to the WHAAT!",
	  "I'm pulling tricks outta my hat!",
	  "Loading combat packages!"
  };

  if (energy_points_ == 0)
	std::cout << name_ << ": No energy(((" << std::endl;
  else
	std::cout << attacks[rand() % ATTACKS_COUNT] << std::endl;
  SetEnergyPoints(energy_points_ - 25);
}

const std::string &FragTrap::GetName() const {
  return name_;
}

int FragTrap::GetHitPoints() const {
  return hit_points_;
}

int FragTrap::GetEnergyPoints() const {
  return energy_points_;
}

int FragTrap::GetMeleeAttackDamage() const {
  return melee_attack_damage_;
}

int FragTrap::GetRangedAttackDamage() const {
  return ranged_attack_damage_;
}

void FragTrap::SetHitPoints(int hit_points) {
  if (hit_points < 0)
	hit_points_ = 0;
  else if (hit_points > max_hit_points_)
	hit_points_ = max_hit_points_;
  else
	hit_points_ = hit_points;
}

void FragTrap::SetEnergyPoints(int energy_points) {
  if (energy_points < 0)
	energy_points_ = 0;
  else if (energy_points > max_energy_points_)
	energy_points_ = max_energy_points_;
  else
	energy_points_ = energy_points;
}

void FragTrap::PrintHpAndEp() {
  std::cout << "-----------------------------------------------" << std::endl;
  std::cout << GetName() << " hit points: " << GetHitPoints() << std::endl;
  std::cout << GetName() << " energy points: "
  											<< GetEnergyPoints() << std::endl;
  std::cout << "-----------------------------------------------" << std::endl;
}
