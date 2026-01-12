#include "fixed.hpp"

const int Fixed::_fractional = 8;

// DEFAULT CONSTRUCTOR
Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  _interger = 0;
}

// COPY CONSTRUCTOR
Fixed::Fixed(const Fixed &original) {
  std::cout << "Copy constructor called" << std::endl;
  _interger = original.getRawBits();
}

// DESTRUCTOR
Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

// COPY ASSIGMENT OPERATOR OVERLOAD
Fixed& Fixed::operator=(const Fixed& original) {
  std::cout << "Copy assigment operator called" << std::endl;
  this->_interger = original.getRawBits();
  return *this;
}

// GETTERS
int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return _interger;
}

// SETTER
void Fixed::setRawBits(int const raw){
  std::cout << "setRawBits member function called" << std::endl;
  _interger = raw; 
}
