//
// Created by Arborio Herlinda on 7/3/21.
//

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(int hp, const std::string &type) : Enemy(hp, type) {
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other){
  std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other) {
  if (this == &other)
	return (*this);
  hp_ = other.hp_;
  type_ = other.type_;
  return (*this);
}

SuperMutant::~SuperMutant() {
  std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::TakeDamage(int hp) {
  SetHp(hp_ - hp + 3);
}
