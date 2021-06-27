//
// Created by Arborio Herlinda on 6/23/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
  std::cout << name_ <<": SC4V-TP constructor" << std::endl;
  hit_points_ = 100;
  max_hit_points_ = 100;
  energy_points_ = 50;
  attack_damage_ = 20;
}

ScavTrap::~ScavTrap() {
  std::cout << name_ <<": SC4V-TP destructor" << std::endl;
}

void ScavTrap::Attack(const std::string &target) {
  std::cout << "SC4V-TP " << name_  << " attacks "  << target
  		<< ", causing " << attack_damage_ <<  " points of damage!" << std::endl;
}

void ScavTrap::TakeDamage(unsigned int amount) {
  std::cout << "SC4V-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ - static_cast<int>(amount));
}

void ScavTrap::BeRepaired(unsigned int amount) {
  std::cout << "SC4V-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

void ScavTrap::guardGate() {
  std::cout << "SC4V-TP " << name_ << " have enterred in Gate keeper mode."
  																<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << name_ <<": SC4V-TP copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  hit_points_ = other.hit_points_;
  max_hit_points_ = other.max_hit_points_;
  energy_points_ = other.energy_points_;
  attack_damage_ = other.attack_damage_;
  return (*this);
}

const std::string &ScavTrap::GetName() const {
  return ClapTrap::GetName();
}
