//
// Created by Arborio Herlinda on 5/7/21.
//

#include <iostream>
#include "Pony.hpp"

Pony::Pony() {
  std::cout << "I am entering to this world" << std::endl;
}

int Pony::GetAge() const {
  return age_;
}

void Pony::SetAge(int age) {
  age_ = age;
}

std::string Pony::GetName() const {
  return name_;
}

void Pony::SetName(const std::string &name) {
  name_ = name;
}

std::string Pony::GetColor() const {
  return color_;
}

void Pony::SetColor(const std::string &color) {
  color_ = color;
}

std::string Pony::GetGender() const {
  return gender_;
}

void Pony::SetGender(const std::string &gender) {
  gender_ = gender;
}

Pony::~Pony() {
  std::cout << "I am " << name_ << " leaving from this world in my " << age_;
  std::cout << std::endl;
}

void Pony::Eat() const {
  std::cout << "I am " << name_ << " eating some stuff" << std::endl;
}

void Pony::Think() const {
  std::cout << "I am " << name_ << " thinking about death" << std::endl;
}

void Pony::Sleep() const {
  std::cout << "I am " << name_ << " fell asleep" << std::endl;
}
