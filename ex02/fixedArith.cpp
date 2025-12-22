#include "fixed.hpp"

Fixed Fixed::operator+(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  Fixed result;
  result.setRawBits(this->getRawBits() + other.getRawBits());
  return result;
}

Fixed Fixed::operator-(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  Fixed result;
  result.setRawBits(this->getRawBits() - other.getRawBits());
  return result;
}

Fixed Fixed::operator*(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  Fixed result;
  result.setRawBits((this->getRawBits() * other.getRawBits())/ power(2, Fixed::getFractional()));
  return result;
}

Fixed Fixed::operator/(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  Fixed result;
  result.setRawBits((this->getRawBits() / other.getRawBits()) * power(2, Fixed::getFractional()));
  return result;
}

//_____________________________________________________

Fixed &Fixed::operator++() {
  this->_integer = this->_integer + 1;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed copy(*this);
  this->_integer = this->_integer + 1;
  return copy;
}

//______________________________________________________

int power(int base, int exp) {
  int result = 1;
  for(int i = 0; i < exp; i++) {
    result = result * base;
  }
  return result;
}
