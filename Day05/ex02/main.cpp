//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main() {
  srand(time(0));

  try {
    Bureaucrat b("Garik", 190);
    std::cout << b;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat b("Garik", 120);
    std::cout << b;
    ShrubberyCreationForm form("Home");
    b.SignForm(form);
    b.ExecuteForm(form);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat b("Garik", 120);
    std::cout << b;
    ShrubberyCreationForm form("Home");
    b.ExecuteForm(form);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat b("Stas", 72);
    std::cout << b;
    RobotomyRequestForm form("Home");
    b.SignForm(form);
    b.ExecuteForm(form);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat b("Yarik", 20);
    std::cout << b;
    RobotomyRequestForm form("Apple");
    b.SignForm(form);
    b.ExecuteForm(form);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat b("Vovka P", 1);
    std::cout << b;
    PresidentialPardonForm form("Vovka P");
    b.SignForm(form);
    b.ExecuteForm(form);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }



  return 0;
}