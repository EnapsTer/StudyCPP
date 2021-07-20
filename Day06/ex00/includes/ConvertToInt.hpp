//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTTOINT_HPP
#define CONVERTTOINT_HPP

#include "ConverterToType.hpp"

class ConvertToInt : public ConverterToType {
 private:
  int value_;
  void buildPrintableType();
 public:
  ConvertToInt(double value, bool impossible);
  std::string const &GetPrintableType();
  ~ConvertToInt();
  static bool IsOverflowed(double value);
  int GetValue() const;
};

#endif
