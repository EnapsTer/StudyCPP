//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void print_trap(const ClapTrap &object) {
  std::cout << std::endl << "=================Trap=================" << std::endl;
  std::cout << "name = " << object.GetName() << std::endl;
  std::cout << "hp = " << object.GetHitPoints() << std::endl;
  std::cout << "energy points = " << object.GetEnergyPoints() << std::endl;
  std::cout << "melee attack = " << object.GetMeleeAttackDamage() << std::endl;
  std::cout << "ranged attack = " << object.GetRangedAttackDamage() << std::endl;
  std::cout << "armor damage reduction = " << object.GetArmorDamageReduction() << std::endl;
  std::cout << "======================================" << std::endl << std::endl;
}

int main() {
  srand(time(0));
  SuperTrap super_trap("Deniska");
  FragTrap frag_trap("Stasik");
  NinjaTrap ninja_trap("Oleg");

  print_trap(super_trap);
  super_trap.RangedAttack(frag_trap.GetName());
  frag_trap.TakeDamage(super_trap.GetRangedAttackDamage());
  print_trap(frag_trap);

  ninja_trap.MeleeAttack(super_trap.GetName());
  super_trap.TakeDamage(ninja_trap.GetMeleeAttackDamage());
  frag_trap.MeleeAttack(super_trap.GetName());
  super_trap.TakeDamage(frag_trap.GetMeleeAttackDamage());
  print_trap(super_trap);

  super_trap.BeRepaired(10000);
  print_trap(super_trap);
  super_trap.VaulthunterDotExe(frag_trap.GetName());
  super_trap.NinjaShoebox(ninja_trap);
  print_trap(super_trap); // TODO global tests
}