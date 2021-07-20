//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include "ConvertToInt.hpp"
#include <limits>
#include <sstream>

ConvertToInt::ConvertToInt(double value, bool impossible) :
    ConverterToType(impossible) {
  if (!impossible) {
    if (!IsOverflowed(value))
      value_ = static_cast<int>(value);
    else
      impossible_ = true;
  }

  ConvertToInt::buildPrintableType();
}

void ConvertToInt::buildPrintableType() {
  std::ostringstream ostr;
  ostr << "int: ";
  if (impossible_) {
    ostr << "impossible";
  }
  else {
    ostr << value_;
  }
  to_print_ = ostr.str();
}

std::string const &ConvertToInt::GetPrintableType() {
  return to_print_;
}

bool ConvertToInt::IsOverflowed(double value) {
  if (value > std::numeric_limits<int>::max() ||
      value < std::numeric_limits<int>::min() ||
      value != value)
    return true;
  return false;
}

int ConvertToInt::GetValue() const {
  return value_;
}

ConvertToInt::~ConvertToInt() {}
