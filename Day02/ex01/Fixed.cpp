//
// Created by Arborio Herlinda on 5/10/21.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

/*
 * Принцип данного типа заключается в фиксированном сдвиге числа на N бит,
 * в результате чего дробное число можно представить целым
 * и оно будет иметь точность 2^N после точки
 * (1 << bits_) -> (1 << 8) -> 256
 * 8388607 - max value int
 */

void Fixed::setRawBits(const int raw) {
  std::cout << "setRawBits member function called" << std::endl;
  raw_bits_ = raw;
}

Fixed::Fixed(const int raw_bits) {
  std::cout << "Int constructor called" << std::endl;
  raw_bits_ = (raw_bits << bits_);
}

Fixed::Fixed(const float raw_bits) {
  std::cout << "Float constructor called" << std::endl;
  raw_bits_ = static_cast<int>(roundf((raw_bits * (1 << bits_))));
}

float Fixed::toFloat() const {
  return (static_cast<float>(raw_bits_) / static_cast<float>(1 << bits_));
}

int Fixed::toInt() const {
  return (raw_bits_ >> bits_);
}

std::ostream &operator<<(std::ostream &out, Fixed const &object) {
  out << object.toFloat();
  return (out);
}

// Todo разобрать детальней этот номер
// Todo refactor