//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTTODOUBLE_HPP
#define CONVERTTODOUBLE_HPP

#include "ConverterToType.hpp"

class ConvertToDouble : public ConverterToType {
 private:
  double value_;
  void buildPrintableType();
 public:
  ConvertToDouble(double value, bool impossible);
  std::string const &GetPrintableType();
  ~ConvertToDouble();
  static bool IsOverflowed(double value);
  double GetValue() const;
};

#endif
