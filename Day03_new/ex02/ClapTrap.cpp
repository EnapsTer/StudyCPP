//
// Created by Arborio Herlinda on 6/23/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) :
	name_(name), hit_points_(10),max_hit_points_(10),
	energy_points_(10), attack_damage_(0) {
  std::cout << name <<": CL4P-TP constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
	name_(other.name_), hit_points_(other.hit_points_),
	max_hit_points_(other.max_hit_points_),
	energy_points_(other.energy_points_),
	attack_damage_(other.attack_damage_) {
  std::cout << name_ <<": CL4P-TP copy constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  hit_points_ = other.hit_points_;
  energy_points_ = other.energy_points_;
  attack_damage_ = other.attack_damage_;
  return (*this);
}

ClapTrap::~ClapTrap() {
  std::cout << name_ <<": CL4P-TP destructor" << std::endl;
}

void ClapTrap::Attack(const std::string &target) {
  std::cout << "CL4P-TP " << name_  << " attacks "  << target
  	<< ", causing " << attack_damage_ <<  " points of damage!" << std::endl;
}

void ClapTrap::TakeDamage(unsigned int amount) {
  std::cout << "CL4P-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ - static_cast<int>(amount));
}

void ClapTrap::BeRepaired(unsigned int amount) {
  std::cout << "CL4P-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
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
  else
	energy_points_ = energy_points;
}

const std::string &ClapTrap::GetName() const {
  return (name_);
}

int ClapTrap::GetHitPoints() const {
  return (hit_points_);
}

int ClapTrap::GetEnergyPoints() const {
  return (energy_points_);
}

int ClapTrap::GetAttackDamage() const {
  return (attack_damage_);
}
