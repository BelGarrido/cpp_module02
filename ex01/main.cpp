#include "fixed.hpp"

int main() {

  std::cout << "--- Default constructor ---" << std::endl;
  Fixed a;
  std::cout << "a = " << a << std::endl;  // usa operator<<

  std::cout << "\n--- Int constructor ---" << std::endl;
  Fixed b(10);
  std::cout << "b = " << b << std::endl;
  std::cout << "b toInt() = " << b.toInt() << std::endl;
  std::cout << "b toFloat() = " << b.toFloat() << std::endl;

  std::cout << "\n--- Float constructor ---" << std::endl;
  Fixed c(42.4222222f);
  std::cout << "c = " << c << std::endl;
  std::cout << "c toInt() = " << c.toInt() << std::endl;
  std::cout << "c toFloat() = " << c.toFloat() << std::endl;

  std::cout << "\n--- Copy constructor ---" << std::endl;
  Fixed d(c);
  std::cout << "d = " << d << std::endl;

  std::cout << "\n--- Assignment operator ---" << std::endl;
  a = b;
  std::cout << "a = " << a << std::endl;

  return 0;
}

//___________________________ MIN_FP_POSIBLE__

/*   float n = 1.0f/256;
  std::cout << n << std::endl;
  std::cout << 42.42f + n << std::endl;
  Fixed const m( 42.42f + n );
  std::cout << "m is " << m << std::endl 
  std::cout << std::fixed << std::setprecision(8); */

//____________________________ SUBJECT MAIN __

/* int main( void ) {
  Fixed a;
  Fixed const b( 10 );
  Fixed const c( 42.42f );
  Fixed const d( b );
  a = Fixed( 1234.4321f );
  
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;

  return 0;
} */
