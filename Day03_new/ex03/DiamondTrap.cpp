//
// Created by Arborio Herlinda on 6/24/21.
//

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) :
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
  name_ = name;
  std::cout << name_ <<": D14MOND-TP constructor" << std::endl;
  hit_points_ = 100;
  max_hit_points_ = hit_points_;
  energy_points_ = 50;
  attack_damage_ = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other), FragTrap(other), ScavTrap(other) {
  std::cout << name_ <<": D14MOND-TP copy constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  hit_points_ = other.hit_points_;
  max_hit_points_ = other.max_hit_points_;
  energy_points_ = other.energy_points_;
  attack_damage_ = other.attack_damage_;
  return (*this);
}

DiamondTrap::~DiamondTrap() {
  std::cout << name_ <<": D14MOND-TP destructor" << std::endl;
}

void DiamondTrap::Attack(const std::string &target) {
  ScavTrap::Attack(target);
}

void DiamondTrap::TakeDamage(unsigned int amount) {
  std::cout << "D14MOND-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ - static_cast<int>(amount));
}

void DiamondTrap::BeRepaired(unsigned int amount) {
  std::cout << "D14MOND-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

void DiamondTrap::WhoAmI() {
  std::cout << "My name is " << name_ << std::endl;
  std::cout << "My Clap name is " << ClapTrap::GetName() << std::endl;
}

const std::string &DiamondTrap::GetName() const {
  return name_;
}
