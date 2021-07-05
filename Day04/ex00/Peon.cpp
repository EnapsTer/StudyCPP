//
// Created by Arborio Herlinda on 7/1/21.
//

#include "Peon.hpp"
#include <iostream>

Peon::Peon() : Victim(){}

Peon::Peon(const std::string &name) : Victim(name) {
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
  std::cout << "Bleuark..." << std::endl;
}

void Peon::GetPolymorphed() const {
  std::cout << Victim::GetName() << "  has been turned into a pink pony!"
			<< std::endl;
}

Peon::Peon(const Peon &other) : Victim(other){}

Peon &Peon::operator=(const Peon &other) {
  if (this == &other)
	return (*this);
  Victim::SetName(other.GetName());
  return (*this);
}
