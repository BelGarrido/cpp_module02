#include "fixed.hpp"
#include <cmath>

const int Fixed::_fractional = 8;

// CONSTRUCTORS AND DESTRUCTOR

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  _integer = 0;
}

Fixed::Fixed(int const intValue) {
  _integer = intValue * power(2, _fractional);
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatValue) {
  int scalarValue = power(2, _fractional);
  _integer = roundf(floatValue * scalarValue);
  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original) {
  std::cout << "Copy constructor called" << std::endl;
  _integer = original.getRawBits();
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

// GETTER FUNCTIONS

int Fixed::getRawBits(void) const {
  //std::cout << "getRawBits member function called" << std::endl;
  return _integer;
}

int Fixed::getFractional(void) {
  //std::cout << "getRawBits member function called" << std::endl;
  return _fractional;
}

// SETTER FUNCTION

void Fixed::setRawBits(int const raw){
  //std::cout << "setRawBits member function called" << std::endl;
  _integer = raw; 
}

// CONVERSIONS FUNCTIONS

float Fixed::toFloat() const {
  //float value = (float)_integer / power(2, _fractional);
  float value = _integer * (1.0f / power(2, _fractional));
  //std::cout << "toFloat member function called" << std::endl;
  return value;
}

int Fixed::toInt() const {
  int value = _integer / power(2, _fractional);
  //std::cout << "toInt member function called" << std::endl;
  return value;
}

std::ostream& operator<<(std::ostream& output, const Fixed& fixedNumber) {
  // Convert fixed-point number to float and insert into the stream
  output << fixedNumber.toFloat();
  return output;
}