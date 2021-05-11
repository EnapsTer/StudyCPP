//
// Created by Arborio Herlinda on 5/10/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 private:
  int raw_bits_;
  static const int bits_;
 public:
  Fixed();
  Fixed(Fixed const &other_);
  ~Fixed();
  Fixed &operator=(Fixed const &other_);
  int getRawBits() const;
  void setRawBits(const int raw);
  Fixed(const int raw_bits);
  Fixed(const float raw_bits);
  float toFloat( void ) const;
  int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &object);

#endif
