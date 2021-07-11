//
// Created by Андре Шагиджанян on 11.07.2021.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
 protected:
  std::string type_;
 public:
  WrongAnimal();
  WrongAnimal(std::string &type);
  const std::string &GetType() const;
  void MakeSound() const;
};

#endif
