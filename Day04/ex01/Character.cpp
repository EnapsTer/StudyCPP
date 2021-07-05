//
// Created by Arborio Herlinda on 7/3/21.
//

#include "Character.hpp"
#include <iostream>

Character::Character() {}

Character::~Character() {}

Character::Character(const std::string &name) : name_(name), ap_(40) {
  weapon_ = NULL;
}

Character::Character(const std::string &name, int ap, AWeapon *weapon) :
	name_(name), ap_(ap), weapon_(weapon) {}

Character::Character(const Character &other) :
	name_(other.name_), ap_(other.ap_), weapon_(other.weapon_) {}

Character &Character::operator=(const Character &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  ap_ = other.ap_;
  weapon_ = other.weapon_;
  return (*this);
}

void Character::RecoverAp() {
  SetAp(ap_ + 10);
}

void Character::Equip(AWeapon *weapon) {
  weapon_ = weapon;
}

void Character::Attack(Enemy *enemy) {
  if (weapon_ && enemy && ap_ >= weapon_->GetApCost())
  {
    std::cout << name_ << " attacks " << enemy->GetType() <<
    	" with a " << weapon_->GetName() << std::endl;
    weapon_->Attack();
	SetAp(ap_ - weapon_->GetApCost());
	enemy->TakeDamage(weapon_->GetDamage());
	if (enemy->GetHp() == 0)
	  delete enemy;
  }
}

void Character::SetAp(int ap) {
  if (ap > 40)
    ap_ = 40;
  else if (ap < 0)
    ap_ = 0;
  else
    ap_ = ap;
}

std::string const &Character::GetName() const {
  return (name_);
}

int Character::GetAp() const {
  return ap_;
}

AWeapon const *Character::GetAWeapon() const {
  return (weapon_);
}

std::ostream &operator<<(std::ostream &out, Character const &character) {
  if (character.GetAWeapon())
    std::cout << character.GetName() << " has " << character.GetAp()
      << " AP and wields a " << character.GetAWeapon()->GetName() << std::endl;
  else
	std::cout << character.GetName() << " has " << character.GetAp()
			  		<< " AP and is unarmed" << std::endl;
  return (out);
}
