//
// Created by Андре Шагиджанян on 17.07.2021.
//

#include "Form.hpp"


bool Form::IsASigned() const {
  return signed_;
}

const int Form::GetSignGrade() const {
  return sign_grade_;
}

const int Form::GetExecuteGrade() const {
  return execute_grade_;
}

const std::string &Form::GetName() const {
  return name_;
}

Form::Form(const std::string &name, int sign_grade, int execute_grade) :
           name_(name), signed_(false),
           sign_grade_(sign_grade), execute_grade_(execute_grade) {
  if (sign_grade_ > 150 || execute_grade_ > 150)
    throw Form::GradeTooLowException();
  if (sign_grade_ < 1 || execute_grade_ < 1)
    throw Form::GradeTooHighException();
}

Form::Form(const Form &other) :
            name_(other.name_), signed_(other.signed_),
            sign_grade_(other.sign_grade_),
            execute_grade_(other.execute_grade_) {}

Form &Form::operator=(const Form &other) {
  if (this == &other)
    return *this;
  *this = Form(other); // TODO спросить gdrive
  return *this;
}

Form::~Form() {}

void Form::BeSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.GetGrade() > sign_grade_)
    throw Form::GradeTooLowException(std::string("Too low grade for sign"));;

}


