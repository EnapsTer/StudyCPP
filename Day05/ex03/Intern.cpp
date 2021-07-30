//
// Created by Андре Шагиджанян on 19.07.2021.
//

#include "Intern.hpp"

const std::string Intern::form_names_[] = {
    std::string("shrubbery creation"),
    std::string("robotomy request"),
    std::string("presidential pardon")
};

Intern::constructor Intern::constructors[] = {
    &Intern::GetNewShrubberyCreationForm,
    &Intern::GetNewRobotomyRequestForm,
    &Intern::GetNewPresidentialPardonForm
};



Intern::FormDoesNotExistException::FormDoesNotExistException():
      m_error_(std::string("Form with this name does not exist")) {}

Intern::FormDoesNotExistException::~FormDoesNotExistException() throw() {}

const char *Intern::FormDoesNotExistException::what() const throw() {
  return m_error_.c_str();
}

Intern::Intern() {}

Form *Intern::GetNewShrubberyCreationForm(std::string const &target) {
  return (new ShrubberyCreationForm(target));
}

Form *Intern::GetNewRobotomyRequestForm(const std::string &target) {
  return (new RobotomyRequestForm(target));
}

Form *Intern::GetNewPresidentialPardonForm(const std::string &target) {
  return (new PresidentialPardonForm(target));
}

Intern::~Intern() {}

Form *Intern::MakeForm(const std::string &name, const std::string &target) {
  for (int i = 0; i < FORMS_COUNT; ++i) {
    if (name == form_names_[i]) {
      Form *form = (this->*constructors[i])(target);
      std::cout << "Intern creates " << form->GetName() << std::endl;
      return form;
    }
  }
  std::cout << "Intern doesn't create " << name << std::endl;
  throw Intern::FormDoesNotExistException();
}

