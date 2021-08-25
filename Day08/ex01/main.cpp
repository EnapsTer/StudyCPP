//
// Created by Андре Шагиджанян on 25.08.2021.
//

#include <iostream>
#include <list>
#include <vector>
#include "Span.hpp"

int main() {
  Span sp = Span(5);
  sp.AddNumber(5);
  sp.AddNumber(3);
  sp.AddNumber(17);
  sp.AddNumber(9);
  sp.AddNumber(11);
  std::cout << sp.ShortestSpan() << std::endl;
  std::cout << sp.LongestSpan() << std::endl;

  std::cout << std::endl;

  try {
    Span sp = Span(10000);
    for (int i = 0; i < 10000; ++i)
      sp.AddNumber(i);
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (std::exception & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Span sp = Span(1001);
    for (int i = 0; i < 1001; ++i)
      sp.AddNumber(i * i);
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (std::exception & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Span sp = Span(1001);
    for (int i = 0; i < 1005; ++i)
      sp.AddNumber(i * i);
  } catch (std::exception & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Span sp = Span(1);
    for (int i = 0; i < 1; ++i)
      sp.AddNumber(i * i);
    std::cout << "Shortest span: " << sp.ShortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.LongestSpan() << std::endl;
  } catch (std::exception & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }
}
