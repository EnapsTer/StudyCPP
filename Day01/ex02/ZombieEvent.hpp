//
// Created by Arborio Herlinda on 5/7/21.
//

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
 private:
  std::string zombie_type_;

 public:
  void SetZombieType(const std::string &type);
  Zombie *NewZombie(std::string name);
  Zombie *randomChump();
};

#endif
