#include "fixed.hpp"

int main() {
  std::cout << "--- Comparison operators ---" << std::endl;
  Fixed a(10);
  Fixed b(20);

  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "a < b  : " << (a < b) << std::endl;
  std::cout << "a > b  : " << (a > b) << std::endl;
  std::cout << "a <= b : " << (a <= b) << std::endl;
  std::cout << "a >= b : " << (a >= b) << std::endl;
  std::cout << "a == b : " << (a == b) << std::endl;
  std::cout << "a != b : " << (a != b) << std::endl;

  std::cout << "\n--- Arithmetic operators ---" << std::endl;
  Fixed c(5.5f);
  Fixed d(2);

  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "c + d = " << (c + d) << std::endl;
  std::cout << "c - d = " << (c - d) << std::endl;
  std::cout << "c * d = " << (c * d) << std::endl;
  std::cout << "c / d = " << (c / d) << std::endl;

  std::cout << "\n--- Increment / Decrement ---" << std::endl;
  Fixed e;

  std::cout << "e = " << e << std::endl;
  std::cout << "++e = " << ++e << std::endl;
  std::cout << "e++ = " << e++ << std::endl;
  std::cout << "e = " << e << std::endl;

  std::cout << "--e = " << --e << std::endl;
  std::cout << "e-- = " << e-- << std::endl;
  std::cout << "e = " << e << std::endl;

  std::cout << "\n--- Min / Max ---" << std::endl;
  Fixed x(3.3f);
  Fixed y(7.7f);

  std::cout << "x = " << x << ", y = " << y << std::endl;
  std::cout << "min(x, y) = " << Fixed::min(x, y) << std::endl;
  std::cout << "max(x, y) = " << Fixed::max(x, y) << std::endl;

  return 0;
}

//____________________ SUBJECT MAIN __

/* int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;

  std::cout << Fixed::max( a, b ) << std::endl;
  std::cout << Fixed::min( a, b ) << std::endl;
  return 0;
} */
