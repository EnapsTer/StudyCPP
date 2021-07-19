//
// Created by Arborio Herlinda on 7/18/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  void Action() const;
 public:
  PresidentialPardonForm(std::string const &target);
  PresidentialPardonForm(PresidentialPardonForm const &other);
  PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
  virtual ~PresidentialPardonForm();
};

#endif
