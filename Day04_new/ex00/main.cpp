//
// Created by Андре Шагиджанян on 11.07.2021.
//

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->GetType() << " " << std::endl;
  std::cout << i->GetType() << " " << std::endl;

  std::cout << std::endl;

  i->MakeSound();
  j->MakeSound();
  meta->MakeSound();

  std::cout << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
  std::cout << std::endl;

  const WrongAnimal *wrong_animal = new WrongAnimal();
  const WrongAnimal *wrong_cat = new WrongCat();

  std::cout << wrong_animal->GetType() << std::endl;
  std::cout << wrong_cat->GetType() << std::endl;

  std::cout << std::endl;

  wrong_animal->MakeSound();
  wrong_cat->MakeSound();
}