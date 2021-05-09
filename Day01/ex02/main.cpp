//
// Created by Arborio Herlinda on 5/7/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {
  srand(time(0));
  std::cout << "Zombie on the heap" << std::endl;
  ZombieEvent zombie_event;
  Zombie *zombie;
  zombie_event.SetZombieType("racist");
  zombie = zombie_event.NewZombie("Donald");
  zombie->Announce();
  delete zombie;

  std::cout << std::endl << "Random zombies" << std::endl;
  zombie_event.SetZombieType("Teletubbies");
  Zombie *random_zombie = zombie_event.randomChump();
  random_zombie->Announce();
  delete random_zombie;

  std::cout << std::endl << "Random zombies" << std::endl;
  zombie_event.SetZombieType("Teletubbies");
  random_zombie = zombie_event.randomChump();
  random_zombie->Announce();
  delete random_zombie;

  return 0;
}