//
// Created by Arborio Herlinda on 5/7/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ZombieHorde.h"

int main() {
  srand(time(0));
  ZombieHorde stack_zombie_horde(10);
  stack_zombie_horde.Announce();

  std::cout << std::endl;

  ZombieHorde *heap_zombie_horde;

  heap_zombie_horde = new ZombieHorde(100);
  heap_zombie_horde->Announce();
  delete heap_zombie_horde;

  return 0;
}