//
// Created by Arborio Herlinda on 7/3/21.
//
#include "Enemy.hpp"

#include <iostream>

Enemy::Enemy() {}
Enemy::Enemy(int hp, const std::string &type) : hp_(hp), type_(type) {}
Enemy::Enemy(const Enemy &other) : hp_(other.hp_), type_(other.type_) {}
Enemy::~Enemy() {}

int Enemy::GetHp() const {
  return hp_;
}

const std::string &Enemy::GetType() const {
  return type_;
}

void Enemy::SetHp(int hp) {
  hp_ = hp > 0 ? hp : 0;
}

void Enemy::SetType(std::string const &type) {
  type_ = type;
}

Enemy &Enemy::operator=(const Enemy &other) {
  if (this == &other)
	return (*this);
  hp_ = other.hp_;
  type_ = other.type_;
  return (*this);
}

void Enemy::TakeDamage(int hp) {
  SetHp(hp_ - hp);
}



