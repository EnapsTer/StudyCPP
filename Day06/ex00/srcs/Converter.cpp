//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include <iostream>
#include "Converter.hpp"
#include "ConverterToType.hpp"
#include "ConvertToChar.hpp"
#include "ConvertToInt.hpp"
#include "ConvertToFloat.hpp"
#include "ConvertToDouble.hpp"

Converter::Converter(const std::string &value) {
  if (value.length() == 3 && value[0] == '\'' && value[2] == '\'') {
    value_ = static_cast<double>(value[1]);
  }
  else if (value.length() == 0 || haveUppercaseLetter(value)
  		|| value == "-nanf" || value == "-nan") {
    impossible_ = true;
  }
  else {
    char *end_ptr = NULL;
    value_ = strtod(value.c_str(), &end_ptr);
    int remainder_size = strlen(end_ptr);

    if (remainder_size > 1 || (remainder_size == 1 && end_ptr[0] != 'f'))
      impossible_ = true;
    else
      impossible_ = false;
  }

  InitializeTypes();
}

void Converter::InitializeTypes() {
  types_ = new ConverterToType*[TYPES_COUNT];

  types_[0] = new ConvertToChar(value_, impossible_);
  types_[1] = new ConvertToInt(value_, impossible_);
  types_[2] = new ConvertToFloat(value_, impossible_);
  types_[3] = new ConvertToDouble(value_, impossible_);
}

Converter::Converter(const Converter &other) :
              value_(other.value_), impossible_(other.impossible_) {}

Converter &Converter::operator=(const Converter &other) {
  if (this == &other)
    return *this;
  value_ = other.value_;
  impossible_ = other.impossible_;
  return *this;
}

Converter::~Converter() {
  for (int i = 0; i < TYPES_COUNT; ++i)
    delete types_[i];
  delete [] types_;
}

void Converter::PrintConvertedToAllTypes() const {
  for (int i = 0; i < TYPES_COUNT; ++i) {
    std::cout << types_[i]->GetPrintableType() << std::endl;
  }
}

bool Converter::haveUppercaseLetter(const std::string &str) {
  for (unsigned int i = 0; i < str.length(); ++i) {
    if (isupper(str[i]))
      return true;
  }
  return false;
}


