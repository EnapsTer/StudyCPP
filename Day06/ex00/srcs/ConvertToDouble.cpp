//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include "ConvertToDouble.hpp"
#include <limits>
#include <cmath>
#include <sstream>

ConvertToDouble::ConvertToDouble(double value, bool impossible) :
                    ConverterToType(impossible) {
  if (!impossible_) {
    if (!IsOverflowed(value))
      value_ = value;
    else
      impossible_ = true;
  }

  ConvertToDouble::buildPrintableType();
}

void ConvertToDouble::buildPrintableType() {
  std::ostringstream ostr;
  ostr << "double: ";
  if (impossible_) {
    ostr << "impossible";
  }
  else {
    ostr << value_;
    if (value_ - floor(value_) == 0)
      ostr << ".0";
  }
  to_print_ = ostr.str();
}

std::string const &ConvertToDouble::GetPrintableType() {
  return to_print_;
}

bool ConvertToDouble::IsOverflowed(double value) {
  if (value > std::numeric_limits<double>::max() ||
      value < -std::numeric_limits<double>::max()) {
    if (value >= std::numeric_limits<double>::infinity() ||
        value <= -std::numeric_limits<double>::infinity())
      return false;
    return true;
  }
  return false;
}

double ConvertToDouble::GetValue() const {
  return value_;
}

ConvertToDouble::~ConvertToDouble() {}

