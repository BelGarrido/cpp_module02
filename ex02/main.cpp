#include "fixed.hpp"

int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  //a = 0
  std::cout << a << std::endl;
  // a = 1
  std::cout << ++a << std::endl;
  //a = 1
  std::cout << a << std::endl;
  //a = 1
  std::cout << a++ << std::endl;
  // = 2
  std::cout << a << std::endl;
  //10.1016
  std::cout << b << std::endl;

  std::cout << Fixed::max( a, b ) << std::endl;
  std::cout << Fixed::min( a, b ) << std::endl;
  return 0;
}
