//
// Created by Arborio Herlinda on 7/1/21.
//

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim {
 private:
  Peon();
 public:
  Peon(std::string const &name);
  virtual ~Peon();
  Peon(Peon const &other);
  Peon &operator=(Peon const &other);

  virtual void GetPolymorphed() const;
};

#endif
