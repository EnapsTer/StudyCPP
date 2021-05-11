//
// Created by Arborio Herlinda on 5/10/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 private:
  int raw_bits_;
  static const int bits_;
 public:
  Fixed();
  Fixed(Fixed const &other_);
  ~Fixed();
  Fixed &operator=(Fixed const &other_);
  int getRawBits( void ) const;
  void setRawBits( int const raw );
};

#endif
