//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon {
 protected:
  AWeapon();
  std::string name_;
  int damage_;
  int ap_cost_;
 public:
  AWeapon(std::string const &name, int ap_cost, int damage);
  AWeapon(AWeapon const &other);
  AWeapon &operator=(AWeapon const &other);
  virtual ~AWeapon();

  const std::string &GetName() const;
  void SetName(const std::string &name);
  int GetDamage() const;
  void SetDamage(int damage);
  int GetApCost() const;
  void SetApCost(int ap_cost);

  virtual void Attack() const = 0;
};

#endif
