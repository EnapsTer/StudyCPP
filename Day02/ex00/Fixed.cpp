//
// Created by Arborio Herlinda on 5/10/21.
//

#include "Fixed.hpp"
#include <iostream>

const int Fixed::bits_ = 8;

Fixed::Fixed() : raw_bits_(0){
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other_) : raw_bits_(other_.raw_bits_) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other_) {
  if (this == &other_)
    return *this;
  std::cout << "Assignation operator called" << std::endl;
  raw_bits_ = other_.raw_bits_;
  return (*this);
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return raw_bits_;
}

void Fixed::setRawBits(const int raw) {
  std::cout << "setRawBits member function called" << std::endl;
  raw_bits_ = raw;
}
