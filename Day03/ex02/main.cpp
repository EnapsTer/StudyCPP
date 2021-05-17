//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  srand(time(0));
  FragTrap aboba("Aboba");
  ScavTrap garik("Garik");

  std::cout << aboba.GetName() << ": Salam salam " << garik.GetName()
			<< " take some hits buddy" << std::endl;
  aboba.MeleeAttack(garik.GetName());
  garik.TakeDamage(aboba.GetMeleeAttackDamage());
  std::cout << garik.GetName() << ": Oh sh***t, catch knife" << std::endl;
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  std::cout << aboba.GetName() << ": And that's all take some bullets"
            << std::endl;
  aboba.RangedAttack(garik.GetName());
  garik.TakeDamage(aboba.GetRangedAttackDamage());
  std::cout << garik.GetName() << ": You are bastard, I'll do you triple super punch"
			<< std::endl;
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  std::cout << aboba.GetName() << " hit points " << aboba.GetHitPoints()
            << std::endl;
  std::cout << aboba.GetName() << ": Holy cr*p I'm going to lick my wounds"
			<< std::endl;
  aboba.BeRepaired(10000);
  std::cout << aboba.GetName() << " hit points " << aboba.GetHitPoints()
			<< std::endl;
  std::cout << aboba.GetName() << ": You made me very angry" << std::endl;
  aboba.VaulthunterDotExe(garik.GetName());
  garik.TakeDamage(50);
  aboba.VaulthunterDotExe(garik.GetName());
  garik.TakeDamage(50);
  aboba.VaulthunterDotExe(garik.GetName());
  garik.TakeDamage(50);
  aboba.VaulthunterDotExe(garik.GetName());
  aboba.VaulthunterDotExe(garik.GetName());
  std::cout << garik.GetName() << ": Ohhhh myyyyyy, that's hurt,"
	  "okay, okay you win, lets do some challenges" << std::endl;
  std::cout << garik.GetName() << " hit points " << garik.GetHitPoints()
			<< std::endl;
  garik.BeRepaired(10);
  std::cout << garik.GetName() << " hit points " << garik.GetHitPoints()
			<< std::endl;
  garik.ChallengeNewcomer();
  garik.ChallengeNewcomer();
  garik.ChallengeNewcomer();
}