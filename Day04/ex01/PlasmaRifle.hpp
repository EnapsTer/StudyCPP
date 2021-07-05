//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
 public:
  PlasmaRifle();
  PlasmaRifle(std::string const &name, int ap_cost, int damage);
  PlasmaRifle(PlasmaRifle const &other);
  PlasmaRifle &operator=(PlasmaRifle const &other);
  virtual ~PlasmaRifle();

  void Attack() const;
};

#endif
