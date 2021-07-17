//
// Created by Андре Шагиджанян on 16.07.2021.
//

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main() {

  try {
    Bureaucrat b("Garik", 190);
    std::cout << b;
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat b("Garik", 30);
    Form f("Job contract", 100, 80);
    b.SignForm(f);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat b("Stas", 4);
	Form f("Country privacy contract", 1, 1);
	b.SignForm(f);
	for (int i = 0; i < 3; ++i)
      b.Upgrade();
	b.SignForm(f);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
	Form f("Country privacy contract", 1123, 1);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
	Form f("Country privacy contract", 123, 0);
  } catch (std::exception & e) {
	std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}