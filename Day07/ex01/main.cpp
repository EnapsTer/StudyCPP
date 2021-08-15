//
// Created by Андре Шагиджанян on 22.07.2021.
//

#include <iostream>
#include "Iter.hpp"

int main() {
  int array[] = {1, 2, 3, 4, 5};
  iter(array, 5, print_elem);

  std::cout << std::endl << std::endl;

  char c_arr[] = {'I', 'L', 'V', 'E', 'V', 'S'};
  iter(c_arr, 6, print_elem);

  std::cout << std::endl << std::endl;

  std::string arrs[] = {"sve", "tan", "sevol", "i"};
  iter(arrs, 4, print_elem);

  return 0;
}

//class Awesome {
// public:
//  Awesome( void ) : _n( 42 ) { return; }
//  int get( void ) const { return this->_n; }
// private:
//  int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
//  o << rhs.get();
//  return o;
//}
//
//template< typename T > void print( T const & x) {
//  std::cout << x << std::endl;
//}
//
//int main() {
//  int tab[] = { 0, 1, 2, 3, 4 };
//  Awesome tab2[5];
//
//  iter( tab, 5, print );
//  iter( tab2, 5, print );
//}