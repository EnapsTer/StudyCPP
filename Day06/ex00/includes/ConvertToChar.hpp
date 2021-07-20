//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTTOCHAR_HPP
#define CONVERTTOCHAR_HPP

#include "ConverterToType.hpp"

class ConvertToChar : public ConverterToType {
 private:
  char value_;
  bool printable_;
  void buildPrintableType();
 public:
  ConvertToChar(double value, bool impossible);
  std::string const &GetPrintableType();
  ~ConvertToChar();
  static bool IsOverflowed(double value);
  static bool IsPrintable(char value);
  char GetValue() const;
};

#endif
