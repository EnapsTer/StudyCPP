//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"

int main() {
  srand(time(0));
  FragTrap aboba("Aboba");
  FragTrap ladoba("Ladoba");

  std::cout << aboba.GetName() << ": Salam salam " << ladoba.GetName()
            << " take some hits buddy" << std::endl;
  aboba.MeleeAttack(ladoba.GetName());
  ladoba.TakeDamage(aboba.GetMeleeAttackDamage());
  std::cout << ladoba.GetName() << ": Oh sh***t, catch knife" << std::endl;
  aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  std::cout << aboba.GetName() << ": And that's all take some bullets"
            << std::endl;
  aboba.RangedAttack(ladoba.GetName());
  ladoba.TakeDamage(aboba.GetRangedAttackDamage());
  std::cout << ladoba.GetName() << ": You are bastard, I'll do you triple super punch"
            << std::endl;
  aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  std::cout << aboba.GetName() << " hit points " << aboba.GetHitPoints()
            << std::endl;
  std::cout << aboba.GetName() << ": Holy cr*p I'm going to lick my wounds"
			<< std::endl;
  aboba.BeRepaired(10000);
  std::cout << aboba.GetName() << " hit points " << aboba.GetHitPoints()
			<< std::endl;
  std::cout << aboba.GetName() << ": You made me very angry" << std::endl;
  aboba.VaulthunterDotExe(ladoba.GetName());
  ladoba.TakeDamage(50);
  aboba.VaulthunterDotExe(ladoba.GetName());
  ladoba.TakeDamage(50);
  aboba.VaulthunterDotExe(ladoba.GetName());
  ladoba.TakeDamage(50);
  aboba.VaulthunterDotExe(ladoba.GetName());
  ladoba.TakeDamage(50);
  aboba.VaulthunterDotExe(ladoba.GetName());
  ladoba.TakeDamage(50);
  std::cout << ladoba.GetName() << ": Ohhhh myyyyyy, that's hurt" << std::endl;
  std::cout << ladoba.GetName() << " hit points " << ladoba.GetHitPoints()
			<< std::endl;
}