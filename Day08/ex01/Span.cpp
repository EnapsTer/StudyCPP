//
// Created by Андре Шагиджанян on 25.08.2021.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : n_(n) {}

Span::Span(const Span &other) : multiset_(other.multiset_), n_(other.n_){}

Span &Span::operator=(const Span &other) {
  if (this == &other)
    return *this;
  multiset_ = other.multiset_;
  n_ = other.n_;
  return *this;
}

Span::~Span() {}

void Span::AddNumber(int number) {
  if (multiset_.size() > n_)
    throw SpanException("Storage is full");
  multiset_.insert(number);
}

int Span::ShortestSpan() {
  if (multiset_.size() <= 1)
    throw SpanException("Not valid storage");
  std::multiset<int>::iterator iter1 = multiset_.begin();
  std::multiset<int>::iterator iter2 = multiset_.begin();
  iter2++;
  int shortest = LongestSpan();
  for (; iter2 != multiset_.end(); ++iter1, ++iter2) {
    if (*iter2 - *iter1 < shortest)
      shortest = *iter2 - *iter1;
  }

  return shortest;
}

int Span::LongestSpan() {
  if (multiset_.size() <= 1)
    throw SpanException("Not valid storage");
  std::multiset<int>::iterator begin = multiset_.begin();
  std::multiset<int>::iterator end = multiset_.end();
  --end;
  return (*end - *begin);
}

SpanException::SpanException() throw() {}

SpanException::SpanException(std::string m_error) throw() : m_error_(m_error){}

const char *SpanException::what() const throw() {
  return m_error_.c_str();
}

SpanException::~SpanException() throw() {}
