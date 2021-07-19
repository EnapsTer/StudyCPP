//
// Created by Андре Шагиджанян on 17.07.2021.
//

#include "Form.hpp"


bool Form::IsASigned() const {
  return signed_;
}

int Form::GetSignGrade() const {
  return sign_grade_;
}

int Form::GetExecuteGrade() const {
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

Form &Form::operator=(const Form &other) {
  if (this == &other)
    return *this;
  std::string *name_p = const_cast<std::string *>(&name_);
  *name_p = other.name_;

  int *sign_grade_p = const_cast<int *>(&sign_grade_);
  *sign_grade_p = other.sign_grade_;

  int *execute_grade_p = const_cast<int *>(&execute_grade_);
  *execute_grade_p = other.execute_grade_;

  signed_ = other.signed_;
  return *this;
}

Form::~Form() {}

void Form::BeSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.GetGrade() > sign_grade_)
    throw Form::GradeTooLowException(std::string("Too low grade for sign"));;
  signed_ = true;
}

void Form::Execute(const Bureaucrat &executor) const {
  if (!signed_)
	throw Form::FormIsNotSigned();
  if (executor.GetGrade() > execute_grade_) {
	throw Form::FormIsNotSigned(
		std::string("Form not signed! Need more grade.")
	);
  }
  Action();
}

const std::string &Form::GetTarget() const {
  return target_;
}

void Form::SetTarget(const std::string &target) {
  target_ = target;
}

Form::GradeTooHighException::GradeTooHighException() :
					m_error_(std::string("Form maximum grade 1")) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(const std::string &m_error) :
					m_error_(m_error) {}

const char *Form::GradeTooHighException::what() const throw() {
  return m_error_.c_str();
}

Form::GradeTooLowException::GradeTooLowException() :
					m_error_(std::string("Form minimum grade 150")) {}

Form::GradeTooLowException::GradeTooLowException(const std::string &m_error) :
					m_error_(m_error) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
  return m_error_.c_str();
}

std::ostream &operator << (std::ostream &out, const Form &other) {
  out << "Form " << other.GetName();
  if (other.IsASigned())
    out << " is signed.";
  else
    out << " is not signed.";
  out << " Required sign grade is " << other.GetSignGrade()
      << ". Required execute grade is " << other.GetExecuteGrade();
  out << std::endl;
  return (out);
}

Form::FormIsNotSigned::FormIsNotSigned() :
					m_error_(std::string("Form not signed!")){}

Form::FormIsNotSigned::~FormIsNotSigned() throw() {}

const char *Form::FormIsNotSigned::what() const throw() {
  return (m_error_.c_str());
}

Form::FormIsNotSigned::FormIsNotSigned(std::string const &m_error) :
					m_error_(m_error) {}
