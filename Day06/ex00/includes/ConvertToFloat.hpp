//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTTOFLOAT_HPP
#define CONVERTTOFLOAT_HPP

#include "ConverterToType.hpp"

class ConvertToFloat : public ConverterToType {
 private:
  float value_;
  void buildPrintableType();
 public:
  ConvertToFloat(double value, bool impossible);
  std::string const &GetPrintableType();
  ~ConvertToFloat();
  static bool IsOverflowed(double value);
  float GetValue() const;
};

#endif
