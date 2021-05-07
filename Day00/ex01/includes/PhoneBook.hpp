//
// Created by Arborio Herlinda on 5/5/21.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
 private:
  Contact contacts_[MAX_CONTACTS];
  int contact_count_;

 public:
  PhoneBook();
  int  GetContactCount() const;
  void AddContact(Contact contact);
  void ShowContact(std::string &s_id);
  void ShowAllContacts();
  bool IsFull() const;
};

#endif
