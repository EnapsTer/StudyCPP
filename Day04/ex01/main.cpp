//
// Created by Arborio Herlinda on 7/3/21.
//

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
  Character *me = new Character("me");
  std::cout << *me;
  Enemy* b = new RadScorpion();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  me->Equip(pr);
  std::cout << *me;
  me->Equip(pf);
  me->Attack(b);
  std::cout << *me;
  me->Equip(pr);
  std::cout << *me;
  me->Attack(b);
  std::cout << *me;
  me->Attack(b);
  std::cout << *me << std::endl;

  SuperMutant *super_mutant = new SuperMutant();
  me->Equip(pr);
  std::cout << *me;
  me->Equip(pf);
  me->Attack(super_mutant);
  std::cout << *me;
  me->Equip(pr);
  std::cout << *me;
  me->Attack(super_mutant);
  std::cout << *me;
  me->Attack(super_mutant);
  std::cout << *me;
  me->Attack(super_mutant);

  std::cout << std::endl;

  std::cout << "Recover AP for 30 times" << std::endl;
  for (int i = 0; i < 30; ++i)
	me->RecoverAp();

  std::cout << *me << std::endl;

  delete super_mutant;
  delete me;

  return 0;
}