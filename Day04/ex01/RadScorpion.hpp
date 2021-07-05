//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <string>

class RadScorpion : public Enemy {
 public:
  RadScorpion();
  RadScorpion(int hp, std::string const &type);
  RadScorpion(RadScorpion const &other);
  RadScorpion &operator=(RadScorpion const &other);
  virtual ~RadScorpion();
};

#endif
