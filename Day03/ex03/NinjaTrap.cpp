//
// Created by Arborio Herlinda on 5/15/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
  std::cout << name << ": N1NJA-TP constructor" << std::endl;
  max_hit_points_ = 60;
  max_energy_points_ = 120;
  level_ = 1;
  melee_attack_damage_ = 60;
  ranged_attack_damage_ = 5;
  armor_damage_reduction_ = 0;
  hit_points_ = max_hit_points_;
  energy_points_ = max_energy_points_;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other) {}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &other) {
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

NinjaTrap::~NinjaTrap() {
  std::cout << name_ << ": N1NJA-TP destructor" << std::endl;
}

void NinjaTrap::MeleeAttack(const std::string &target) {
  std::cout << "N1NJA-TP " << name_ << " attacks " << target
			<< " at melee, causing " << melee_attack_damage_
			<< " points of damage!" << std::endl;
}

void NinjaTrap::RangedAttack(const std::string &target) {
  std::cout << "N1NJA-TP " << name_ << " attacks " << target
			<< " at range, causing " << ranged_attack_damage_
			<< " points of damage!" << std::endl;
}

void NinjaTrap::TakeDamage(unsigned int amount) {
  std::cout << "N1NJA-TP " << name_ << " takes " << amount
			<< " points of damage!" << std::endl;
  SetHitPoints(hit_points_ + armor_damage_reduction_ - static_cast<int>(amount));
}

void NinjaTrap::BeRepaired(unsigned int amount) {
  std::cout << "N1NJA-TP " << name_ << " restored " << amount
			<< " hit points" << std::endl;
  SetHitPoints(hit_points_ + static_cast<int>(amount));
}

void NinjaTrap::NinjaShoebox(const ClapTrap &clap_trap) {
  if (energy_points_ < 25)
	std::cout << "No energy(((" << std::endl;
  else
	std::cout << "attack to CL4P-TP" << clap_trap.GetName() << std::endl;
  SetEnergyPoints(energy_points_ - 25);
}

void NinjaTrap::NinjaShoebox(const ScavTrap &scav_trap) {
  if (energy_points_ < 25)
	std::cout << "No energy(((" << std::endl;
  else
	std::cout << "attack to CL4P-TP" << scav_trap.GetName() << std::endl;
  SetEnergyPoints(energy_points_ - 25);
}

void NinjaTrap::NinjaShoebox(const FragTrap &frag_trap) {
  if (energy_points_ < 25)
	std::cout << "No energy(((" << std::endl;
  else
	std::cout << "attack to CL4P-TP" << frag_trap.GetName() << std::endl;
  SetEnergyPoints(energy_points_ - 25);
}

void NinjaTrap::NinjaShoebox(const NinjaTrap &ninja_trap) {
  if (energy_points_ < 25)
	std::cout << "No energy(((" << std::endl;
  else
	std::cout << "attack to CL4P-TP" << ninja_trap.GetName() << std::endl;
  SetEnergyPoints(energy_points_ - 25);
}
