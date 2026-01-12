#include "fixed.hpp"

Fixed Fixed::operator+(const Fixed& other) const {
  Fixed result;
  result.setRawBits(this->getRawBits() + other.getRawBits());
  return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
  Fixed result;
  result.setRawBits(this->getRawBits() - other.getRawBits());
  return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
  Fixed result;
  long temp;
  temp = ((long)this->getRawBits() * (long)other.getRawBits());
  result.setRawBits(temp >> _fractional);
  return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
  Fixed result;
  long temp;
  temp = (this->getRawBits() << _fractional) / other.getRawBits();
  result.setRawBits(temp);
  return (result);
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

Fixed &Fixed::operator--() {
  this->_integer = this->_integer - 1;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed copy(*this);
  this->_integer = this->_integer - 1;
  return copy;
}
