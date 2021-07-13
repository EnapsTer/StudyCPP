//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 protected:
  std::string type_;
 public:
  Animal();
  virtual ~Animal();
  virtual const std::string &GetType() const;
  virtual void MakeSound() const = 0;
};

#endif
