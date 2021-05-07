//
// Created by Arborio Herlinda on 5/6/21.
//

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
  contact_count_ = 0;
}

int PhoneBook::GetContactCount() const {
  return contact_count_;
}

void PhoneBook::AddContact(Contact contact) {
  if (contact_count_ == 8)
    std::cout << "Can't add more than 8 contacts" << std::endl;
  else
    contacts_[contact_count_++] = contact;
}

void PhoneBook::ShowContact(std::string &s_id) {
  if (s_id.length() > 1 || !isdigit(s_id.at(0))) {
    std::cout << "Invalid ID" << std::endl;
  } else {
    int id;
    id = atoi(s_id.c_str());
    if  (id == 0 || id > contact_count_)
      std::cout << "Invalid ID" << std::endl;
    else
      contacts_[id - 1].ShowContact();
  }
}

void PhoneBook::ShowAllContacts() {
  std::cout << std::endl << std::setw(10) << "index" << "|";
  std::cout << std::setw(10) << "first name" << "|";
  std::cout << std::setw(10) << "last name" << "|";
  std::cout << std::setw(10) << "nickname" << "|" << std::endl;
  for (int i = 0; i < contact_count_; i++) {
    std::cout << std::setw(10) << i + 1 << "|";
    std::cout << std::setw(10) << Contact::GetSubContactStr(contacts_[i].GetName()) << "|";
    std::cout << std::setw(10) << Contact::GetSubContactStr(contacts_[i].GetLastName()) << "|";
    std::cout << std::setw(10) << Contact::GetSubContactStr(contacts_[i].GetNickname()) << "|";
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

bool PhoneBook::IsFull() const {
  return contact_count_ == 8;
}
