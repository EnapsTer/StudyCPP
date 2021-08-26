//
// Created by Андре Шагиджанян on 25.08.2021.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
 class MutantStack : public std::stack<T> {
  public:
   typedef typename std::stack<T>::container_type::iterator
       iterator;
   typedef typename std::stack<T>::container_type::reverse_iterator
       reverse_iterator;
   typedef typename std::stack<T>::container_type::const_iterator
       const_iterator;
   typedef typename std::stack<T>::container_type::const_reverse_iterator
       const_reverse_iterator;

   MutantStack() : std::stack<T>() {}

   MutantStack(MutantStack const &other) : std::stack<T>(other) {}

   MutantStack &operator=(MutantStack const &other) {
     std::stack<T>::operator=(other);
     return *this;
   }

   virtual ~MutantStack() {}

   iterator begin() {
     return this->c.begin();
   }

   const_iterator begin() const {
     return this->c.begin();
   }

   reverse_iterator rbegin() {
     return this->c.rbegin();
   }

   const_reverse_iterator rbegin() const {
     return this->c.rbegin();
   }

   iterator end() {
     return this->c.end();
   }

   const_iterator end() const {
     return this->c.end();
   }

   reverse_iterator rend() {
     return this->c.rend();
   }

   const_reverse_iterator rend() const {
     return this->c.rend();
   }
};

#endif
