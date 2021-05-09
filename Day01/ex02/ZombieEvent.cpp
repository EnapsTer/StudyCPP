//
// Created by Arborio Herlinda on 5/7/21.
//

#include "ZombieEvent.hpp"

void ZombieEvent::SetZombieType(const std::string &type) {
  zombie_type_ = type;
}

Zombie *ZombieEvent::NewZombie(std::string name) {
  Zombie *zombie;

  zombie = new Zombie;
  zombie->SetName(name);
  zombie->SetType(zombie_type_);
  return zombie;
}

Zombie *ZombieEvent::randomChump() {
  char names[4][15] = {
  	"Tinky-Winky", "Dipsy", "Laa Laa", "Po"
  };
  Zombie *zombie;

  zombie = new Zombie;
  zombie->SetName(names[rand() % 4]);
  zombie->SetType(zombie_type_);
  return (zombie);
}
