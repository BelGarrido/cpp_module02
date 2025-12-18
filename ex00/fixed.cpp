#include "fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed(int const raw) {
  std::cout << "Paremeterized constructor called" << std::endl;
  _interger = raw;
}

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  _interger = 0;
}

Fixed::Fixed(const Fixed &original) {
  std::cout << "Copy constructor called" << std::endl;
  _interger = original.getRawBits();
}

//ClassName& operator=(const ClassName& other);
Fixed& Fixed::operator=(const Fixed& original) {
  std::cout << "Copy assigment operator called" << std::endl;
  this->_interger = original.getRawBits();
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return _interger;
}

void Fixed::setRawBits(int const raw){
  std::cout << "setRawBits member function called" << std::endl;
  _interger = raw; 
}



/* Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called */