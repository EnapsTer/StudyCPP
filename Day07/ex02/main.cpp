//
// Created by Андре Шагиджанян on 22.07.2021.
//

#include <iostream>
#include "Array.hpp"

int main() {
  Array<int> array(8);
  std::cout << "Int array: " << std::endl;
  for (unsigned int i = 0; i < array.Size(); ++i) {
    array[i] = i * i;
    std::cout << array[i] << " ";
  }
  std::cout << std::endl << std::endl;

  Array<int> array1(array);
  array1[0] = -10;

  std::cout << "Copied int array1: " << std::endl;
  for (unsigned int i = 0; i < array1.Size(); ++i) {
    std::cout << array1[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Int array: " << std::endl;
  for (unsigned int i = 0; i < array.Size(); ++i) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl << std::endl;

  Array<char> str1(26);
  std::cout << "Alphabet array: " << std::endl;
  for (unsigned int i = 0; i < str1.Size(); ++i) {
    str1[i] = static_cast<char>(i + 97);
    std::cout << str1[i];
  }
  std::cout << std::endl;

  try {
    str1[26] = 'A';
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  try {
    str1[-1] = 'A';
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  Array<char> str2(26);
  for (unsigned int i = 0; i < str2.Size(); ++i) {
    str2[i] = static_cast<char>(i + 65);
  }
  str1 = str2;

  for (unsigned int i = 0; i < str1.Size(); ++i) {
    std::cout << str1[i];
  }
  std::cout << std::endl << std::endl;

  Array<std::string> strs(3);
  std::cout << "Strings array len of " << strs.Size() << ": " << std::endl;

  strs[0] = "I";
  strs[1] = "loves";
  strs[2] = "shawarma";
  for (unsigned int i = 0; i < strs.Size(); ++i)
    std::cout << strs[i] << " ";

  std::cout << std::endl;

  try {
    Array<char> test(0);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

}


//#define MAX_VAL 750
//int main(int, char**)
//{
//  {
//
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//	  const int value = rand();
//	  numbers[i] = value;
//	  mirror[i] = value;
//	}
//	//SCOPE
//	{
//	  Array<int> tmp = numbers;
//	  Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//	  if (mirror[i] != numbers[i])
//	  {
//		std::cerr << "didn't save the same value!!" << std::endl;
//		return 1;
//	  }
//	}
//	try
//	{
//	  numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//	  std::cerr << e.what() << '\n';
//	}
//	try
//	{
//	  numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//	  std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//	  numbers[i] = rand();
//	}
//	delete [] mirror;//
//  }
//
//  return 0;
//}