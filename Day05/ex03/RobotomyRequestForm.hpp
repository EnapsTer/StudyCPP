//
// Created by Arborio Herlinda on 7/18/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  void Action() const;
 public:
  RobotomyRequestForm(std::string const &target);
  RobotomyRequestForm(RobotomyRequestForm const &other);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
  virtual ~RobotomyRequestForm();
};

#endif
