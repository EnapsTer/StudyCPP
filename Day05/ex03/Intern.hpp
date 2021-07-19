//
// Created by Андре Шагиджанян on 19.07.2021.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define FORMS_COUNT 3

class Intern {
 private:
  typedef Form *(Intern::*constructor)(const std::string &target);
  static constructor constructors[FORMS_COUNT];

  static const std::string form_names_[FORMS_COUNT];

  Form *GetNewShrubberyCreationForm(std::string const &target);
  Form *GetNewRobotomyRequestForm(std::string const &target);
  Form *GetNewPresidentialPardonForm(std::string const &target);
 public:
   Intern();
   virtual ~Intern();
   Intern(Intern const &other);
   Intern &operator=(Intern const &other);

   Form *MakeForm(std::string const &name, std::string const &target);

   class FormDoesNotExistException : public std::exception{
    private:
     std::string m_error_;
    public:
     FormDoesNotExistException();
     virtual ~FormDoesNotExistException() throw();
     const char * what() const throw();
   };
};

#endif
