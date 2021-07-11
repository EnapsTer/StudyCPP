//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();
  const std::string &GetType() const;
  virtual void MakeSound() const;
};

#endif
