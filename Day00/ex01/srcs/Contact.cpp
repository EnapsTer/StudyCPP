//
// Created by Arborio Herlinda on 5/6/21.
//

#include "Contact.hpp"
#include <iostream>
#include "PhoneBook.hpp"

const std::string &Contact::GetName() const {
  return name_;
}

void Contact::SetName(const std::string &name) {
  name_ = name;
}

const std::string &Contact::GetLastName() const {
  return last_name_;
}

void Contact::SetLastName(const std::string &last_name) {
  last_name_ = last_name;
}

const std::string &Contact::GetNickname() const {
  return nickname_;
}

void Contact::SetNickname(const std::string &nickname) {
  nickname_ = nickname;
}

const std::string &Contact::GetLogin() const {
  return login_;
}

void Contact::SetLogin(const std::string &login) {
  login_ = login;
}

const std::string &Contact::GetPostalAddress() const {
  return postal_address_;
}

void Contact::SetPostalAddress(const std::string &postal_address) {
  postal_address_ = postal_address;
}

const std::string &Contact::GetEmail() const {
  return email_;
}

void Contact::SetEmail(const std::string &email) {
  email_ = email;
}

const std::string &Contact::GetPhone() const {
  return phone_;
}

void Contact::SetPhone(const std::string &phone) {
  phone_ = phone;
}

const std::string &Contact::GetBirthday() const {
  return birthday_;
}

void Contact::SetBirthday(const std::string &birthday) {
  birthday_ = birthday;
}

const std::string &Contact::GetFavoriteMeal() const {
  return favorite_meal_;
}

void Contact::SetFavoriteMeal(const std::string &favorite_meal) {
  favorite_meal_ = favorite_meal;
}

const std::string &Contact::GetUnderwearColor() const {
  return underwear_color_;
}

void Contact::SetUnderwearColor(const std::string &underwear_color) {
  underwear_color_ = underwear_color;
}

const std::string &Contact::GetDarkestSecret() const {
  return darkest_secret_;
}

void Contact::SetDarkestSecret(const std::string &darkest_secret) {
  darkest_secret_ = darkest_secret;
}

std::string Contact::GetSubContactStr(const std::string& str) {
  if (str.length() > 9) {
	return str.substr(0, 9) + ".";
  }
  else {
	return str;
  }
}

void Contact::ShowContact() {
  std::cout << "name: " << name_ << std::endl;
  std::cout << "last name: " << last_name_ << std::endl;
  std::cout << "nickname: " << nickname_ << std::endl;
  std::cout << "login: " << login_ << std::endl;
  std::cout << "postal address: " << postal_address_ << std::endl;
  std::cout << "email address: " << email_ << std::endl;
  std::cout << "phone number: " << phone_ << std::endl;
  std::cout << "birthday date: " << birthday_ << std::endl;
  std::cout << "favorite meal: " << favorite_meal_ << std::endl;
  std::cout << "underwear color: " << underwear_color_ << std::endl;
  std::cout << "darkest secret: " << darkest_secret_ << std::endl;
}
