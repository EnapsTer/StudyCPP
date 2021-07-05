//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
 public:
  PowerFist();
  PowerFist(std::string const &name, int ap_cost, int damage);
  PowerFist(PowerFist const &other);
  PowerFist &operator=(PowerFist const &other);
  virtual ~PowerFist();

  void Attack() const;
};

#endif
