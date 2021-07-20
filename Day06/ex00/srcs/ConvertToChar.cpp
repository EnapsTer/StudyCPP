//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include "ConvertToChar.hpp"
#include <limits>
#include <sstream>

ConvertToChar::ConvertToChar(double value, bool impossible) :
    ConverterToType(impossible) {
  if (!impossible) {
    if (!IsOverflowed(value)) {
      value_ = static_cast<char>(value);
      printable_ = IsPrintable(value_);
    }
    else {
      impossible_ = true;
    }
  }

  ConvertToChar::buildPrintableType();
}

void ConvertToChar::buildPrintableType() {
  std::ostringstream ostr;
  ostr << "char: ";
  if (impossible_) {
    ostr << "impossible";
  }
  else if (!printable_) {
    ostr << "Non displayable";
  }
  else {
    ostr << '\'' << value_ << '\'';
  }
  to_print_ = ostr.str();
}

std::string const &ConvertToChar::GetPrintableType() {
  return to_print_;
}

bool ConvertToChar::IsOverflowed(double value) {
  if (value > std::numeric_limits<char>::max() ||
      value < std::numeric_limits<char>::min() ||
      value != value)
    return true;
  return false;
}

bool ConvertToChar::IsPrintable(char value) {
  if (value < 32 || value > 126)
    return false;
  else
    return true;
}

char ConvertToChar::GetValue() const {
  return value_;
}

ConvertToChar::~ConvertToChar() {}

