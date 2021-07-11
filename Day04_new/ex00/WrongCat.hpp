//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  const std::string &GetType() const;
  void MakeSound() const;
};

#endif
