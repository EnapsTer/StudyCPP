//
// Created by Arborio Herlinda on 7/3/21.
//

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const std::string &name, int ap_cost, int damage)
	: AWeapon(name, ap_cost, damage) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other){}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  ap_cost_ = other.ap_cost_;
  damage_ = other.damage_;
  return (*this);
}

void PlasmaRifle::Attack() const {
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
