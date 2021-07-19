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
  std::string target_;
  virtual void Action() const = 0;
 public:

  Form(std::string const &name, int sign_grade, int execute_grade);
  Form &operator=(Form const &other);

  virtual ~Form();

  const std::string &GetName() const;
  bool IsASigned() const;
  int GetSignGrade() const;
  int GetExecuteGrade() const;
  const std::string &GetTarget() const;
  void SetTarget(const std::string &target);
  void BeSigned(Bureaucrat const &bureaucrat);

  void Execute(Bureaucrat const &executor) const;

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

 class FormIsNotSigned : public std::exception {
  private:
   std::string m_error_;
  public:
   FormIsNotSigned();
   FormIsNotSigned(std::string const &m_error);
   virtual ~FormIsNotSigned() throw();
   const char* what() const throw();
 };
};


std::ostream &operator << (std::ostream &out, const Form &target);
#endif
