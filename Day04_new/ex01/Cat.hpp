//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain *brain_;
 public:
  Cat();
  ~Cat();
  const std::string &GetType() const;
  virtual void MakeSound() const;
};

#endif
