//
// Created by Андре Шагиджанян on 17.07.2021.
//

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 private:
  std::string const name_;
  bool signed_;
  const int sign_grade_;
  const int execute_grade_;
 public:

  Form(std::string const &name, int sign_grade, int execute_grade);
  Form(Form const &other);
  Form &operator=(Form const &other);

  virtual ~Form();

  const std::string &GetName() const;
  bool IsASigned() const;
  const int GetSignGrade() const;
  const int GetExecuteGrade() const;

  void BeSigned(Bureaucrat const &bureaucrat);

  class GradeTooHighException : public std::exception {
   private:
    std::string m_error_;
   public:
    GradeTooHighException();
    GradeTooHighException(std::string const &m_error);
    virtual ~GradeTooHighException() throw();
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   private:
    std::string m_error_;
   public:
    GradeTooLowException();
    GradeTooLowException(std::string const &m_error);
    virtual ~GradeTooLowException() throw();
    const char* what() const throw();
  };
};

#endif
