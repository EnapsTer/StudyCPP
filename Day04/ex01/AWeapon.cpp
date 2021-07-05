//
// Created by Arborio Herlinda on 7/3/21.
//

#include "AWeapon.hpp"

const std::string &AWeapon::GetName() const {
  return name_;
}

void AWeapon::SetName(const std::string &name) {
  name_ = name;
}

int AWeapon::GetDamage() const {
  return damage_;
}

void AWeapon::SetDamage(int damage) {
  damage_ = damage;
}

int AWeapon::GetApCost() const {
  return ap_cost_;
}

void AWeapon::SetApCost(int ap_cost) {
  ap_cost_ = ap_cost;
}

AWeapon::AWeapon() {}

AWeapon::AWeapon(const std::string &name, int ap_cost, int damage) :
	name_(name), ap_cost_(ap_cost), damage_(damage) {}

AWeapon::AWeapon(const AWeapon &other) :
	name_(other.name_), damage_(other.damage_), ap_cost_(other.ap_cost_) {}

AWeapon &AWeapon::operator=(const AWeapon &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  damage_ = other.damage_;
  ap_cost_ = other.ap_cost_;
  return (*this);
}

AWeapon::~AWeapon() {}

