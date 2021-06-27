//
// Created by Arborio Herlinda on 5/9/21.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string getFilename(char *argv) {
  std::string str(argv);
  std::stringstream filename;
  std::transform(str.begin(), str.end(), str.begin(), toupper);
  filename << str << ".replace";
  return filename.str();
}

bool isValidArgs(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Invalid count of arguments" << std::endl;
	return false;
  }
  for (int i = 1; i < argc; i++) {
    if (std::string(argv[i]).empty()) {
	  std::cout << "Arguments contains empty string" << std::endl;
	  return false;
	}
  }

  return true;
}

std::string replaceStrToAnotherStr(
	const std::string &str,const std::string& s1, const std::string& s2) {
  std::string replaced_str(str);
  size_t pos = 0;
  while ((pos = replaced_str.find(s1, pos)) != std::string::npos) {
	replaced_str.replace(pos, s1.length(), s2);
	pos += s2.length();
  }
  return replaced_str;
}

int main(int argc, char **argv) {
  if (!isValidArgs(argc, argv))
    return 1;
  std::string s1(argv[2]);
  std::string s2(argv[3]);

  std::ifstream in(argv[1], std::ios_base::in);
  if (!in.is_open()) {
   std::cout << "Can't open file" << std::endl;
   return 1;
  }

  std::ofstream out(getFilename(argv[1]),
					std::ios_base::trunc | std::ios_base::in);
  if (in.is_open()) {
    std::string str;
    while (getline(in, str)) {
      out << replaceStrToAnotherStr(str, s1, s2) << std::endl;
    }
  }
  else
	std::cout << "Can't open file" << std::endl;
  in.close();
  out.close();
  return 0;
}