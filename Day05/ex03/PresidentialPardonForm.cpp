//
// Created by Arborio Herlinda on 7/18/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
                : Form(std::string("PresidentialPardonForm"), 25, 5) {
  SetTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
                : Form(other){
  SetTarget(other.GetTarget());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  Form::operator=(other);
  SetTarget(other.GetTarget());
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::Action() const {
  std::cout << GetTarget()
            << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

