//
// Created by Андре Шагиджанян on 20.07.2021.
//

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
  std::string name;
  int age;
  std::string terrible_thing;
};

uintptr_t serialize(Data* ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
  Data *data;

  data = reinterpret_cast<Data *>(raw);
  return (data);
}


int main(int argc, char **argv) {
  Data *data = new Data;
  data->name = "Gref";
  data->age = 57;
  data->terrible_thing = "loves pizza with pineapple";

  std::cout << "Data before serialization" << std::endl;

  std::cout << data->name << " at age " <<
            data->age << " " << data->terrible_thing
            << std::endl << std::endl;

  uintptr_t serialized_data = serialize(data);
  std::cout << "serialized data row - " << serialized_data;
  std::cout << std::endl << std::endl;

  Data *deserialized_data = deserialize(serialized_data);

  std::cout << deserialized_data->name << " at age " <<
            deserialized_data->age << " " <<
            deserialized_data->terrible_thing;

  delete data;
  return 0;
}