//
// Created by Arborio Herlinda on 6/23/21.
//

#include "ScavTrap.hpp"
#include <iostream>

int main() {
  ScavTrap stas("Stas");
  ScavTrap garik("Garik");

  for (int i = 0; i < 2; i++) {
	stas.Attack(garik.GetName());
	garik.TakeDamage(stas.GetAttackDamage());
  }

  std::cout << std::endl << garik.GetName() << " hit points: "
  		<< garik.GetHitPoints() << std::endl << std::endl;

  for (int i = 0; i < 6; i++) {
	garik.Attack(stas.GetName());
	stas.TakeDamage(garik.GetAttackDamage());
  }

  std::cout << std::endl << stas.GetName() << " hit points: "
  		<< stas.GetHitPoints() << std::endl;
  stas.BeRepaired(1000);
  std::cout << stas.GetName() << " hit points: " << stas.GetHitPoints()
  			<< std::endl << std::endl;

  stas.guardGate();
  garik.guardGate();

  std::cout << std::endl;
}