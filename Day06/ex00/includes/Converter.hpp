//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include "ConverterToType.hpp"
#include "ConvertToChar.hpp"
#include "ConvertToInt.hpp"
#include "ConvertToFloat.hpp"
#include "ConvertToDouble.hpp"

#define TYPES_COUNT 4

class Converter {
 private:
  double value_;
  bool impossible_;
  ConverterToType **types_;

  void InitializeTypes();
  static bool haveUppercaseLetter(std::string const &str);
 public:

  Converter(std::string const &value);
  Converter(Converter const &other);
  Converter &operator=(Converter const &other);
  virtual ~Converter();


  void PrintConvertedToAllTypes() const;
};

#endif
