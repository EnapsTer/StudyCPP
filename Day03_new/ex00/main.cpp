//
// Created by Arborio Herlinda on 6/23/21.
//

#include "ClapTrap.hpp"
#include <iostream>

int main() {
  ClapTrap alomjon("Alomjon");

  alomjon.Attack("Shaurma");
  alomjon.TakeDamage(5);
  std::cout << alomjon.GetName() << " hit points: " <<
  			alomjon.GetHitPoints() << std::endl;
  alomjon.TakeDamage(10);
  std::cout << alomjon.GetName() << " hit points: " <<
			alomjon.GetHitPoints() << std::endl;
  alomjon.BeRepaired(5000);
  std::cout << alomjon.GetName() << " hit points: " <<
			alomjon.GetHitPoints() << std::endl;
}