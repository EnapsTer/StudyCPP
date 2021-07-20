//
// Created by Андре Шагиджанян on 20.07.2021.
//

#ifndef CONVERTERTOTYPE_HPP
#define CONVERTERTOTYPE_HPP

#include <string>

class ConverterToType{
 protected:
  bool impossible_;
  std::string to_print_;
  virtual void buildPrintableType() = 0;
 public:
  ConverterToType(bool impossible);
  virtual ~ConverterToType();
  virtual std::string const &GetPrintableType() = 0;
};

#endif
