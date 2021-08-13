//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include "Intern.hpp"

int main() {
  srand(time(0));

  Intern intern;

  try {
    Form *form = intern.MakeForm("shrubbery creation", "home");
    std::cout << *form;
    Bureaucrat b("Garik", 100);
    std::cout << b;
    b.SignForm(*form);
    b.ExecuteForm(*form);
	delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form *form = intern.MakeForm("form", "home");
    std::cout << *form;
	delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form *form = intern.MakeForm("robotomy request", "home");
    std::cout << *form;
    Bureaucrat b("Stas", 100);
    std::cout << b;
    b.SignForm(*form);
    b.ExecuteForm(*form);
	delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form *form = intern.MakeForm("robotomy request", "peach");
    std::cout << *form;
    Bureaucrat b("Stas", 50);
    std::cout << b;
    b.SignForm(*form);
    b.ExecuteForm(*form);
    delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form *form = intern.MakeForm("robotomy request", "peach");
    std::cout << *form;
    Bureaucrat b("Yarik", 45);
    std::cout << b;
    b.SignForm(*form);
    b.ExecuteForm(*form);
    delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form *form = intern.MakeForm("presidential pardon", "VVP");
    std::cout << *form;
    Bureaucrat b("VVP", 2);
    std::cout << b;
    b.SignForm(*form);
    b.ExecuteForm(*form);
	delete form;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;
}