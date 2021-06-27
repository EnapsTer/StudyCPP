//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"

void print_trap_hp(FragTrap &trap) {
  std::cout << "-----------------------------------------------" << std::endl;
  std::cout << trap.GetName() << " hit points: " <<
  									trap.GetHitPoints() << std::endl;
  std::cout << "-----------------------------------------------" << std::endl;
}

void print_trap_ep(FragTrap &trap) {
  std::cout << "-----------------------------------------------" << std::endl;
  std::cout << trap.GetName() << " energy points: " <<
			trap.GetEnergyPoints() << std::endl;
  std::cout << "-----------------------------------------------" << std::endl;
}

int main() {
  srand(time(0));
  FragTrap aboba("Aboba");
  FragTrap ladoba("Ladoba");

  std::cout << aboba.GetName() << ": Salam salam " << ladoba.GetName()
            << " take some hits buddy" << std::endl;
  aboba.MeleeAttack(ladoba.GetName());
  ladoba.TakeDamage(aboba.GetMeleeAttackDamage());
  print_trap_hp(ladoba);
  std::cout << ladoba.GetName() << ": Oh sh***t, catch knife" << std::endl;
  aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  print_trap_hp(aboba);
  std::cout << aboba.GetName() << ": And that's all take some bullets"
            << std::endl;
  aboba.RangedAttack(ladoba.GetName());
  ladoba.TakeDamage(aboba.GetRangedAttackDamage());
  print_trap_hp(ladoba);
  std::cout << ladoba.GetName() <<
  			": You are bastard, I'll do you triple super punch" << std::endl;
  for (int i = 0; i < 3; ++i)
	aboba.TakeDamage(ladoba.GetMeleeAttackDamage());
  print_trap_hp(aboba);
  std::cout << aboba.GetName() << ": Holy cr*p I'm going to lick my wounds"
			<< std::endl;
  aboba.BeRepaired(10000);
  print_trap_hp(aboba);
  std::cout << aboba.GetName() << ": You made me very angry" << std::endl;
  for (int i = 0; i < 4; ++i) {
	aboba.VaulthunterDotExe(ladoba.GetName());
	ladoba.TakeDamage(50);
  }
  aboba.VaulthunterDotExe(ladoba.GetName());
  print_trap_ep(aboba);
  std::cout << ladoba.GetName() << ": Ohhhh myyyyyy, that's hurt" << std::endl;
  print_trap_hp(ladoba);
}
