//
// Created by Arborio Herlinda on 5/5/21.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
class Contact {
 private:
  std::string name_;
  std::string last_name_;
  std::string nickname_;
  std::string login_;
  std::string postal_address_;
  std::string email_;
  std::string phone_;
  std::string birthday_;
  std::string favorite_meal_;
  std::string underwear_color_;
  std::string darkest_secret_;

 public:
  static std::string GetSubContactStr(const std::string& str);
  const std::string &GetName() const;
  void SetName(const std::string &name);
  const std::string &GetLastName() const;
  void SetLastName(const std::string &last_name);
  const std::string &GetNickname() const;
  void SetNickname(const std::string &nickname);
  const std::string &GetLogin() const;
  void SetLogin(const std::string &login);
  const std::string &GetPostalAddress() const;
  void SetPostalAddress(const std::string &postal_address);
  const std::string &GetEmail() const;
  void SetEmail(const std::string &email);
  const std::string &GetPhone() const;
  void SetPhone(const std::string &phone);
  const std::string &GetBirthday() const;
  void SetBirthday(const std::string &birthday);
  const std::string &GetFavoriteMeal() const;
  void SetFavoriteMeal(const std::string &favorite_meal);
  const std::string &GetUnderwearColor() const;
  void SetUnderwearColor(const std::string &underwear_color);
  const std::string &GetDarkestSecret() const;
  void SetDarkestSecret(const std::string &darkest_secret);
  void   ShowContact();
};

#endif
