//
// Created by Arborio Herlinda on 7/1/21.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <ostream>
#include "Victim.hpp"

class Sorcerer {
 private:
  Sorcerer();
  std::string name_;
  std::string title_;
 public:
  Sorcerer(std::string const &name,  std::string const &title);
  virtual ~Sorcerer();
  Sorcerer(Sorcerer const &other);
  Sorcerer &operator=(Sorcerer const &other);

  const std::string &GetName() const;
  void SetName(const std::string &name);
  const std::string &GetTitle() const;
  void SetTitle(const std::string &title);

  void Polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &object);

#endif
