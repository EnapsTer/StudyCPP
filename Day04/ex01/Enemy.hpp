//
// Created by Arborio Herlinda on 7/3/21.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy {
 protected:
  Enemy();
  int hp_;
  std::string type_;
 public:
  Enemy(int hp, std::string const &type);
  Enemy(Enemy const &other);
  Enemy &operator=(Enemy const &other);
  virtual ~Enemy();

  int GetHp() const;
  const std::string &GetType() const;
  void SetHp(int hp);
  void SetType(std::string const &type);

  virtual void TakeDamage(int hp);
};
#endif
