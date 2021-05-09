//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>

int main() {
  std::string str("HI THIS IS BRAIN");

  std::string *pointer_to_string = &str;
  std::string &reference_to_string = str;

  std::cout << "original string: " << str << std::endl;
  std::cout << "pointer to string: " << *pointer_to_string << std::endl;
  std::cout << "reference to string: " << reference_to_string << std::endl;
}