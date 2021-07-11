//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  const std::string &GetType() const;
  virtual void MakeSound() const;
};

#endif
