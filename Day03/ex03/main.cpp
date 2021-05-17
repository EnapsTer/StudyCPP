//
// Created by Arborio Herlinda on 5/13/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
  srand(time(0));
  FragTrap frag_trap("Garik");
  ScavTrap scav_trap("Jorik");
  ClapTrap clap_trap("Ashotik");
  NinjaTrap ninja_trap("Tolik");

  std::cout << "FragTrap attack" << std::endl;
  frag_trap.RangedAttack(scav_trap.GetName());
  scav_trap.TakeDamage(frag_trap.GetRangedAttackDamage());
  frag_trap.MeleeAttack(clap_trap.GetName());
  clap_trap.TakeDamage(frag_trap.GetMeleeAttackDamage());
  frag_trap.RangedAttack(ninja_trap.GetName());
  ninja_trap.TakeDamage(frag_trap.GetRangedAttackDamage());

  std::cout << "ScavTrap attack" << std::endl;
  scav_trap.RangedAttack(frag_trap.GetName());
  frag_trap.TakeDamage(scav_trap.GetRangedAttackDamage());
  scav_trap.MeleeAttack(scav_trap.GetName());
  clap_trap.TakeDamage(frag_trap.GetMeleeAttackDamage());
  scav_trap.RangedAttack(ninja_trap.GetName());
  ninja_trap.TakeDamage(scav_trap.GetRangedAttackDamage());


  std::cout << "ClapTrap attack" << std::endl;
  clap_trap.RangedAttack(frag_trap.GetName());
  frag_trap.TakeDamage(clap_trap.GetRangedAttackDamage());
  clap_trap.MeleeAttack(scav_trap.GetName());
  scav_trap.TakeDamage(clap_trap.GetMeleeAttackDamage());
  clap_trap.RangedAttack(ninja_trap.GetName());
  scav_trap.TakeDamage(clap_trap.GetRangedAttackDamage());

  std::cout << "NinjaTrap attack" << std::endl;
  ninja_trap.RangedAttack(frag_trap.GetName());
  frag_trap.TakeDamage(ninja_trap.GetRangedAttackDamage());
  ninja_trap.MeleeAttack(scav_trap.GetName());
  scav_trap.TakeDamage(ninja_trap.GetMeleeAttackDamage());
  ninja_trap.RangedAttack(clap_trap.GetName());
  clap_trap.TakeDamage(ninja_trap.GetRangedAttackDamage());

  std::cout << "FragTrap hp: "<< frag_trap.GetHitPoints() << std::endl;
  std::cout << "ScavTrap hp: "<< scav_trap.GetHitPoints() << std::endl;
  std::cout << "ClapTrap hp: "<< clap_trap.GetHitPoints() << std::endl;
  std::cout << "NinjaTrap hp: "<< ninja_trap.GetHitPoints() << std::endl;

  frag_trap.BeRepaired(100001);
  scav_trap.BeRepaired(1);
  clap_trap.BeRepaired(50);
  ninja_trap.BeRepaired(20);

  frag_trap.VaulthunterDotExe(scav_trap.GetName());
  scav_trap.ChallengeNewcomer();

  ninja_trap.NinjaShoebox(clap_trap);
  ninja_trap.NinjaShoebox(frag_trap);
  ninja_trap.NinjaShoebox(scav_trap);
  ninja_trap.NinjaShoebox(ninja_trap);
}