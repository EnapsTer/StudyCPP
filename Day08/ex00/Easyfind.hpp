//
// Created by Arborio Herlinda on 8/15/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>

template<typename T>
typename T::const_iterator Easyfind(const T &container, const int element) {
  class NotFoundException : std::exception {
   private:
    std::string m_error_;
   public:
    NotFoundException() : m_error_(std::string("Element not found.")){}
    virtual ~NotFoundException() throw() {}
	const char* what() const throw() {return m_error_.c_str()};
  };

  typename T::iterator iter;
  iter = std::find(container.begin(), container.end(), element);
  if (iter == container.end())
    throw NotFoundException();
  return (iter);
}

#endif
