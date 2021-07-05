//
// Created by Arborio Herlinda on 7/1/21.
//

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(const Sorcerer &other) :
	name_(other.name_), title_(other.title_) {}

const std::string &Sorcerer::GetName() const {
  return name_;
}

void Sorcerer::SetName(const std::string &name) {
  name_ = name;
}

const std::string &Sorcerer::GetTitle() const {
  return title_;
}

void Sorcerer::SetTitle(const std::string &title) {
  title_ = title;
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) :
	name_(name), title_(title) {
  std::cout << name_ << ", " << title_ << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
  std::cout << name_ << ", " << title_ <<
  			", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &object) {
  out << "I am " << object.GetName() << ", " << object.GetTitle() <<
  		", and I like ponies!" << std::endl;
  return (out);
}


Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
  if (this == &other)
	return (*this);
  name_ = other.name_;
  title_ = other.title_;
  return (*this);
}


void Sorcerer::Polymorph(const Victim &victim) const {
  victim.GetPolymorphed();
}
