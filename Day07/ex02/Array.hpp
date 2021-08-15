//
// Created by Андре Шагиджанян on 22.07.2021.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array {
 private:
  T *data_;
  unsigned int size_;
 public:

  Array() : data_(NULL), size_(0) {}

  Array(unsigned int size) : size_(0) {
    if (size == 0)
      throw ArrayIndexException("Can't allocate 0 elements");
    try {
      data_ = new T[size];
    } catch (std::bad_alloc & e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
    size_ = size;
  }

  Array(Array const &other) : size_(0) {
    try {
      data_ = new T[other.size_];
    } catch (std::bad_alloc & e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
    size_ = other.size_;
    for (unsigned int i = 0; i < size_; ++i)
      data_[i] = other.data_[i];
  }

  Array &operator=(Array const &other){
    if (this == &other)
      return *this;
	delete[] data_;

    size_ = 0;
    try {
      data_ = new T[other.size_];
    } catch (std::bad_alloc & e) {
      std::cerr << "Error: " << e.what() << std::endl;
    }
    size_ = other.size_;
    for (unsigned int i = 0; i < size_; ++i)
      data_[i] = other.data_[i];
    return *this;
  }

  virtual ~Array() {
      delete []data_;
  }

  T &operator[](unsigned int index) {
    if (index >= size_)
      throw ArrayIndexException();
    return data_[index];
  }

  unsigned int Size() {
    return size_;
  }


 class ArrayIndexException : public std::exception {
  private:
    std::string m_error_;
  public:

    ArrayIndexException() throw() : m_error_(std::string("Out of range")) {};
    ArrayIndexException(std::string const &m_error) throw() : m_error_(m_error) {};
    virtual ~ArrayIndexException() throw() {};

    const char * what() const throw() {
      return m_error_.c_str();
    }

  };
};

#endif
