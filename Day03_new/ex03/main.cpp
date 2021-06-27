//
// Created by Arborio Herlinda on 6/23/21.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
  DiamondTrap stas("Stas");
  DiamondTrap garik("Garik");

  std::cout << std::endl;

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

  stas.HighFivesGuys();
  garik.guardGate();

  std::cout << std::endl;
  stas.WhoAmI();
  std::cout << std::endl;
  garik.WhoAmI();

  std::cout << std::endl;
}