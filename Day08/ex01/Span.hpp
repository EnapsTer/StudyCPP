//
// Created by Андре Шагиджанян on 25.08.2021.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <string>

class Span {
 private:
  std::multiset<int> multiset_;
  unsigned int n_;
  Span();
 public:
  Span(unsigned int n);
  Span(const Span &other);
  Span &operator=(const Span &other);
  virtual ~Span();

  void AddNumber(int number);
  int ShortestSpan();
  int LongestSpan();
};

class SpanException : public std::exception{
 private:
  std::string m_error_;
  SpanException() throw();
 public:
  SpanException(std::string m_error) throw();
  virtual ~SpanException() throw();
  const char * what() const throw();
};

#endif

