//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include "ConvertToFloat.hpp"
#include <limits>
#include <cmath>
#include <sstream>

ConvertToFloat::ConvertToFloat(double value, bool impossible) :
    ConverterToType(impossible) {
  if (!impossible) {
    if (!IsOverflowed(value))
      value_ = static_cast<float>(value);
    else
      impossible_ = true;
  }

  ConvertToFloat::buildPrintableType();
}

void ConvertToFloat::buildPrintableType() {
  std::ostringstream ostr;
  ostr << "float: ";
  if (impossible_) {
    ostr << "impossible";
  }
  else {
    ostr << value_;
    if (value_ - floor(value_) == 0)
      ostr << ".0";
    ostr << "f";
  }
  to_print_ = ostr.str();
}

std::string const &ConvertToFloat::GetPrintableType() {
  return to_print_;
}

bool ConvertToFloat::IsOverflowed(double value) {
  if (value > std::numeric_limits<float>::max() ||
      value < -std::numeric_limits<float>::max()) {
    if (value >= std::numeric_limits<float>::infinity() ||
        value <= -std::numeric_limits<float>::infinity())
      return false;
    return true;
  }
  return false;
}

float ConvertToFloat::GetValue() const {
  return value_;
}

ConvertToFloat::~ConvertToFloat() {}

