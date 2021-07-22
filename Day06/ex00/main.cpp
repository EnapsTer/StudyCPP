//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include <iostream>
#include <Converter.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Error: Invalid arguments" << std::endl;
    return 1;
  }

  Converter converter(argv[1]);
  converter.PrintConvertedToAllTypes();
}