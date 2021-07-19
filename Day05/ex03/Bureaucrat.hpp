//
// Created by Андре Шагиджанян on 16.07.2021.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
 private:
  const std::string name_;
  int grade_;
 protected:
  Bureaucrat();
 public:
  Bureaucrat(std::string const &name, int grade);
  Bureaucrat(Bureaucrat const &other);
  Bureaucrat &operator=(Bureaucrat const &other);

  virtual ~Bureaucrat();

  const std::string &GetName() const;
  int GetGrade() const;

  void Upgrade();
  void Downgrade();
  void SignForm(Form &form);
  void ExecuteForm(Form const &form);

  class GradeTooHighException : public std::exception {
   private:
    std::string m_error_;
   public:
    GradeTooHighException();
    virtual ~GradeTooHighException() throw();
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   private:
    std::string m_error_;
   public:
    GradeTooLowException();
    virtual ~GradeTooLowException() throw();
    const char* what() const throw();
  };
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &target);

#endif
