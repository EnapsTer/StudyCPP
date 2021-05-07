//
// Created by Arborio Herlinda on 5/7/21.
//

#include <iostream>
#include "Pony.hpp"

void ponyOnTheStack() {
  std::cout << "Pony on the stack" << std::endl;
  Pony pony;
  pony.SetName("Biba");
  pony.SetAge(12);
  pony.SetColor("Black");
  pony.SetGender("Women");
  pony.Eat();
  pony.Think();
  pony.Sleep();
}

void ponyOnTheHeap() {
  std::cout << "Pony on the heap" << std::endl;
  Pony *pony = new Pony;
  pony->SetName("Boba");
  pony->SetAge(11);
  pony->SetColor("Pink");
  pony->SetGender("Man");
  pony->Eat();
  pony->Think();
  pony->Sleep();
  delete pony;
}

int main () {
  ponyOnTheStack();
  std::cout << std::endl;
  ponyOnTheHeap();
};