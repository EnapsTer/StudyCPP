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
  garik.PrintHpAndEp();
  std::cout << garik.GetName() << ": Oh sh***t, catch knife" << std::endl;
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.PrintHpAndEp();
  std::cout << aboba.GetName() << ": And that's all take some bullets"
            << std::endl;
  aboba.RangedAttack(garik.GetName());
  garik.TakeDamage(aboba.GetRangedAttackDamage());
  garik.PrintHpAndEp();
  std::cout << garik.GetName() << ": You are bastard, I'll do you triple super punch"
			<< std::endl;
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.TakeDamage(garik.GetMeleeAttackDamage());
  aboba.PrintHpAndEp();
  std::cout << aboba.GetName() << ": Holy cr*p I'm going to lick my wounds"
			<< std::endl;
  aboba.BeRepaired(10000);
  aboba.PrintHpAndEp();
  std::cout << aboba.GetName() << ": You made me very angry" << std::endl;
  for (int i = 0; i < 4; ++i) {
	aboba.VaulthunterDotExe(garik.GetName());
	garik.TakeDamage(50);
  }
  aboba.VaulthunterDotExe(garik.GetName());
  aboba.PrintHpAndEp();
  std::cout << garik.GetName() << ": Ohhhh myyyyyy, that's hurt,"
	  "okay, okay you win, lets do some challenges" << std::endl;
  garik.PrintHpAndEp();
  garik.BeRepaired(10);
  garik.PrintHpAndEp();
  garik.ChallengeNewcomer();
  garik.ChallengeNewcomer();
  garik.ChallengeNewcomer();
  garik.ChallengeNewcomer();
  garik.PrintHpAndEp();
}