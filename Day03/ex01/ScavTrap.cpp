//
// Created by Arborio Herlinda on 5/14/21.
//

#include "ScavTrap.hpp"

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : name_(name), max_hit_points_(100),
            max_energy_points_(50), level_(1), melee_attack_damage_(20),
            ranged_attack_damage_(15), armor_damage_reduction_(3) {
  std::cout << name <<": ScavScav Hi!" << std::endl;
  hit_points_ = max_hit_points_;
  energy_points_ = max_energy_points_;
}

ScavTrap::ScavTrap(ScavTrap const &other)
	: name_(other.name_), max_hit_points_(other.max_hit_points_),
	  max_energy_points_(other.max_energy_points_), level_(other.level_),
	  melee_attack_damage_(other.melee_attack_damage_),
	  ranged_attack_damage_(other.ranged_attack_damage_),
	  armor_damage_reduction_(other.armor_damage_reduction_),
	  hit_points_(other.hit_points_), energy_points_(other.energy_points_) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
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

ScavTrap::~ScavTrap() {
  std::cout << name_ << ": Finally leaving this world!" << std::endl;
}

void ScavTrap::MeleeAttack(const std::string &target) {
  std::cout << "SC4V-TP " << name_ << " attacks " << target
			<< " at melee, causing " << melee_attack_damage_
			<< " points of damage!" << std::endl;
}

void ScavTrap::RangedAttack(const std::string &target) {
  std::cout << "SC4V-TP " << name_ << " attacks " << target
			<< " at range, causing " << ranged_attack_damage_
			<< " points of damage!" << std::endl;
}

void ScavTrap::TakeDamage(unsigned int amount) {
  std::cout << "SC4V-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  if (hit_points_ + armor_damage_reduction_ - static_cast<int>(amount) < 0)
	hit_points_ = 0;
  else
	hit_points_ -= static_cast<int>(amount) + armor_damage_reduction_;
}

void ScavTrap::BeRepaired(unsigned int amount) {
  std::cout << "SC4V-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  if (hit_points_ + static_cast<int>(amount) > max_hit_points_)
	hit_points_ = max_hit_points_;
  else
	hit_points_ += static_cast<int>(amount);
}

void ScavTrap::ChallengeNewcomer() {
  char attacks[CHALLENGES_COUNT][50] = {
  	"What comes first is the chicken or the egg",
  	"What is the capital of Armenia",
  	"Sing me a Marlow Slava Cadillac",
  	"Start to a shameful dance",
  	"Play paper scissors with me"
  };

  std::cout << attacks[rand() % CHALLENGES_COUNT] << std::endl;
}

const std::string &ScavTrap::GetName() const {
  return name_;
}

int ScavTrap::GetHitPoints() const {
  return hit_points_;
}

int ScavTrap::GetEnergyPoints() const {
  return energy_points_;
}

int ScavTrap::GetMeleeAttackDamage() const {
  return melee_attack_damage_;
}

int ScavTrap::GetRangedAttackDamage() const {
  return ranged_attack_damage_;
}
