//
// Created by Arborio Herlinda on 7/18/21.
//

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form(std::string("ShrubberyCreationForm"), 145, 137) {
  SetTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : Form(other){
  SetTarget(other.GetTarget());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  Form::operator=(other);
  SetTarget(other.GetTarget());
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::Action() const {
  std::ofstream fs(GetTarget() + "_shrubbery", std::ofstream::out);
  if (fs.is_open()) {
    fs << "        _-_          " << std::endl;
    fs << "     /~~   ~~\\      " << std::endl;
    fs << "  /~~         ~~\\    " << std::endl;
    fs << " {               }   " << std::endl;
    fs << "  \\  _-     -_  /    " << std::endl;
    fs << "    ~  \\\\ //  ~      " << std::endl;
    fs << " _- -   | |   _- _  " << std::endl;
    fs << "   _-   | |    -_     " << std::endl;
    fs << "       // \\\\       " << std::endl;
  }
  fs.close();
}
