// "Copyright 2021 <aherlind>"

#include <iostream>

std::string get_string_from_array(int argc, char **argv) {
  std::string ret_str;

  for (int i = 1; i < argc; i++) {
    ret_str.append(argv[i]);
  }
  return (ret_str);
}

int main(int argc, char **argv) {
  std::string str(get_string_from_array(argc, argv));
  if (str.empty()) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  } else {
    std::transform(str.begin(), str.end(), str.begin(), toupper);
    std::cout << str << std::endl;
  }
  return 0;
}
