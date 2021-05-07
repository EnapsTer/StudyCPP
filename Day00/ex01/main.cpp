#include <iostream>
#include "PhoneBook.hpp"

Contact input_contact() {
  Contact contact;
  std::string string;

  std::cout << "enter the name value: ";
  std::cin  >> string;
  contact.SetName(string);

  std::cout << "enter the last name value: ";
  std::cin >> string;
  contact.SetLastName(string);

  std::cout << "enter the nickname value: ";
  std::cin >> string;
  contact.SetNickname(string);

  std::cout << "enter the login value: ";
  std::cin >> string;
  contact.SetLogin(string);

  std::cout << "enter the postal address value: ";
  std::cin >> string;
  contact.SetPostalAddress(string);

  std::cout << "enter the email address value: ";
  std::cin >> string;
  contact.SetEmail(string);

  std::cout << "enter the phone address value: ";
  std::cin >> string;
  contact.SetPhone(string);

  std::cout << "enter the birthday address value: ";
  std::cin >> string;
  contact.SetBirthday(string);

  std::cout << "enter the favorite meal value: ";
  std::cin >> string;
  contact.SetFavoriteMeal(string);

  std::cout << "enter the underwear color value: ";
  std::cin >> string;
  contact.SetUnderwearColor(string);

  std::cout << "enter the darkest secret value: ";
  std::cin >> string;
  contact.SetDarkestSecret(string);

  std::cout << std::endl;

  return contact;
}

void search_command(PhoneBook &phone_book) {
  std::string id;

  if (phone_book.GetContactCount() == 0) {
    std::cout << std::endl <<"no contacts in the table" << std::endl << std::endl;
  } else {
    phone_book.ShowAllContacts();
    std::cin >> id;
    phone_book.ShowContact(id);
  }
}

int main() {
  PhoneBook phone_book;
  std::string command;

  while (1) {
    std::cin >> command;

    if (std::cin.eof())
      break;
    if (command == "ADD") {
      if (phone_book.IsFull())
        std::cout << "Can't add more than 8 contacts" << std::endl;
      else
        phone_book.AddContact(input_contact());
    } else if (command == "SEARCH") {
      search_command(phone_book);
    } else if (command == "EXIT") {
      break;
    } else if (command != "\n") {
      std::cout << "wrong command" << std::endl;
    }
  }
  return 0;
}
