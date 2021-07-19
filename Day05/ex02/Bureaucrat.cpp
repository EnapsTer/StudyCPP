//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
      name_(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) :
      name_(other.name_), grade_(other.grade_) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this == &other)
    return (*this);
  std::string *name_p = const_cast<std::string *>(&name_);
  *name_p = other.name_;
  grade_ = other.grade_;
  return (*this);
}

const std::string &Bureaucrat::GetName() const {
  return name_;
}

int Bureaucrat::GetGrade() const {
  return grade_;
}

void Bureaucrat::Upgrade() {
  if (grade_ - 1 < 1)
    throw GradeTooHighException();
  --grade_;
}

void Bureaucrat::Downgrade() {
  if (grade_ + 1 > 150)
    throw GradeTooLowException();
  ++grade_;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::SignForm(Form &form) {
  if (form.IsASigned()) {
    std::cout << "Form is already signed" << std::endl;
	return;
  }

  try {
    form.BeSigned(*this);
    std::cout << name_ << " sign form " << form.GetName() << " with grade "
    									<< grade_ << std::endl;
  } catch (std::exception & e) {
	std::cout << name_ << " can't sign " << form.GetName() << ", because "
			  << e.what() << std::endl;
  }
}

void Bureaucrat::ExecuteForm(Form const &form) {
  try {
    form.Execute(*this);
    std::cout << name_ << " executes form " << form.GetName() <<
        " with grade " << grade_ << std::endl;
  } catch (std::exception & e) {
    std::cout << name_ << " can't execute form " << form.GetName() <<
        " because of " << e.what() << std::endl;
  }
}

Bureaucrat::GradeTooHighException::GradeTooHighException() :
          m_error_(std::string("Bureaucrat maximum grade 1")) {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return (m_error_.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() :
          m_error_(std::string("Bureaucrat minimum grade 150")) {}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return (m_error_.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

std::ostream &operator << (std::ostream &out, const Bureaucrat &other) {
  out << "My name is " << other.GetName()
          << ". My grade is " << other.GetGrade() << std::endl;
  return (out);
}

