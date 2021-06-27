//
// Created by Arborio Herlinda on 6/23/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
  std::cout << name_ <<": FR4G-TP constructor" << std::endl;
  hit_points_ = 100;
  max_hit_points_ = 100;
  energy_points_ = 100;
  attack_damage_ = 30;
}

FragTrap::~FragTrap() {
  std::cout << name_ <<": FR4G-TP destructor" << std::endl;
}

void FragTrap::Attack(const std::string &target) {
  std::cout << "FR4G-TP " << name_  << " attacks "  << target
			<< ", causing " << attack_damage_ <<  " points of damage!" << std::endl;
}

void FragTrap::TakeDamage(unsigned int amount) {
  std::cout << "FR4G-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ - static_cast<int>(amount));
}

void FragTrap::BeRepaired(unsigned int amount) {
  std::cout << "FR4G-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << name_ <<": FR4G-TP copy constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  hit_points_ = other.hit_points_;
  max_hit_points_ = other.max_hit_points_;
  energy_points_ = other.energy_points_;
  attack_damage_ = other.attack_damage_;
  return (*this);
}

void FragTrap::HighFivesGuys(void) {
  std::cout << "Gimme five!" << std::endl;
}
