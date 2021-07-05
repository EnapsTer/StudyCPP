//
// Created by Arborio Herlinda on 7/1/21.
//

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int main()
{
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");
  std::cout << robert << jim << joe;
  robert.Polymorph(jim);
  robert.Polymorph(joe);
  return 0;
}