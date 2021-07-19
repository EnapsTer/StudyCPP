cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

include_directories(includes)

add_executable(ex03 main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp Intern.cpp Intern.hpp)
