//
// Created by Arborio Herlinda on 5/7/21.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

// TODO Werror

class Zombie {
 private:
  std::string name_;
  std::string type_;

 public:
  Zombie();
  Zombie(std::string &name, std::string &type);
  void SetName(const std::string &name);
  std::string GetName() const;
  void SetType(const std::string &type);
  std::string GetType() const;
  void Announce();
};

#endif
