//
// Created by Arborio Herlinda on 8/15/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>

class NotFoundException : public std::exception {
 private:
  std::string m_error_;
 public:
  NotFoundException() throw() : m_error_(std::string("Element not found.")){}
  virtual ~NotFoundException() throw() {}
  const char* what() const throw() {return m_error_.c_str();};
};

template<typename T>
typename T::const_iterator Easyfind(T &container, const int element) {
  typename T::iterator iter;
  iter = std::find(container.begin(), container.end(), element);
  if (iter == container.end())
    throw NotFoundException();
  return (iter);
}

#endif
