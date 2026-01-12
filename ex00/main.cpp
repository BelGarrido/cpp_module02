#include "fixed.hpp"

int main( void ) {

  // DEFAULT CONSTRUCTOR (0)
  Fixed a;
  // COPY CONSTRUCTOR, CREATE B WITH A VALUES
  Fixed b( a );
  // DEFAULT CONSTRUCTOR (0)
  Fixed c;
  // COPY ASSIGENT OPERATOR OVERLOAD
  c = b;
  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;

  return 0;
}
