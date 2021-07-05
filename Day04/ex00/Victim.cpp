//
// Created by Arborio Herlinda on 7/1/21.
//

#include "Victim.hpp"
#include <iostream>

Victim::Victim() {}

Victim::Victim(const Victim &other) : name_(other.name_) {}

Victim::Victim(const std::string &name) : name_(name){
  std::cout << "Some random victim called " << name_
  										<< " just appeared!" << std::endl;
}

Victim::~Victim() {
  std::cout << "Victim " << name_
  				<< "  just died for no apparent reason!" << std::endl;
}

const std::string &Victim::GetName() const {
  return name_;
}

Victim &Victim::operator=(const Victim &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  return (*this);
}

void Victim::SetName(const std::string &name) {
  name_ = name;
}

void Victim::GetPolymorphed() const {
  std::cout << name_ << " has been turned into a cute little sheep!"
  																<< std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &object) {
  out << "I'm " << object.GetName() << " and I like otters!" << std::endl;
  return (out);
}
