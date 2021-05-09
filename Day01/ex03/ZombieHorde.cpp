//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>
#include "ZombieHorde.h"

ZombieHorde::ZombieHorde(int n) {
  char names[10][15] = {
	  "Nolik", "Simka", "DimDimych", "Masya", "Papus", "Kusachka", "Shpulya",
	  "Fire", "ZloyFire", "Dedus"
  };
  zombie_ = new Zombie[n];

  length_ = n;
  for (int i = 0; i < n; i++) {
    zombie_[i].SetName(names[rand() % 10]);
    zombie_[i].SetType("Fixiki");
  }
}

void ZombieHorde::Announce() const {
  for (int i = 0; i < length_; i++) {
    zombie_[i].Announce();
  }
}

ZombieHorde::~ZombieHorde() {
  delete [] zombie_;
}