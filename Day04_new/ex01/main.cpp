//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define ZOO_SIZE 10

int main() {
  Animal **animals = new Animal*[ZOO_SIZE];
  for (int i = 0; i < ZOO_SIZE; ++i) {
    if (i % 2 == 0)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
    animals[i]->MakeSound();
    std::cout << std::endl;
  }
  for (int i = 0; i < ZOO_SIZE; ++i)
   delete animals[i];
  delete [] animals;
}