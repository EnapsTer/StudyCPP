//
// Created by Arborio Herlinda on 5/7/21.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony {
 private:
  int age_;
  std::string name_;
  std::string color_;
  std::string gender_;
 public:
  Pony();
  int GetAge() const;
  void SetAge(int age);
  std::string GetName() const;
  void SetName(const std::string &name);
  std::string GetColor() const;
  void SetColor(const std::string &color);
  std::string GetGender() const;
  void SetGender(const std::string &gender);
  ~Pony();
  void Eat() const;
  void Think() const;
  void Sleep() const;
};

#endif
