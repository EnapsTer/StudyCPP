//
// Created by Arborio Herlinda on 5/9/21.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
class Brain {
 private:
  int iq_;
 public:
  Brain();
  explicit Brain(int iq);
  std::string identify() const;
  void SetIq(int iq);
};

#endif
