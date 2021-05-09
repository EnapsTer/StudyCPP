//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include "Zombie.hpp"

class ZombieHorde {
 private:
  Zombie *zombie_;
  int length_;
 public:
  ZombieHorde(int n);
  void Announce() const;
  ~ZombieHorde();
};

#endif
