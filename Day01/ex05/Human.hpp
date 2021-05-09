//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human {
 private:
  const Brain brain_;
 public:
  Human();
  const Brain &getBrain() const;
  std::string identify();
};

#endif
