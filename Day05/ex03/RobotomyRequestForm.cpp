//
// Created by Arborio Herlinda on 7/18/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : Form(std::string("RobotomyRequestForm"), 72, 45) {
  SetTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : Form(other){
  SetTarget(other.GetTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  Form::operator=(other);
  SetTarget(other.GetTarget());
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::Action() const {
  std::cout << "Drdrdrdr...Vzzzz...." << std::endl << GetTarget();
  if (rand() % 2)
    std::cout << " has been robotomized!";
  else
    std::cout << " robotization failed(";
  std::cout << std::endl;
}
