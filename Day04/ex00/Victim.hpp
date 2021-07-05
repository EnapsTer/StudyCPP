//
// Created by Arborio Herlinda on 7/1/21.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <ostream>

class Victim {
 protected:
  Victim();
 private:
  std::string name_;
 public:
  Victim(std::string const &name);
  virtual ~Victim();
  Victim(Victim const &other);
  Victim &operator=(Victim const &other);

  const std::string &GetName() const;
  void SetName(const std::string &name);

  virtual void GetPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &object);

#endif
