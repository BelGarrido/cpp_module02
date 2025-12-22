#include "fixed.hpp"

int main( void ) {
//constructor default
  Fixed a; // 0
//  a.setRawBits(5);
//constructor copy
  Fixed b( a ); // creamos b con el valor de a
//constructor default
  Fixed c; // 0
//copy operator assigment
//c.operator=(b);
  c = b;
  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;
  return 0;
}
