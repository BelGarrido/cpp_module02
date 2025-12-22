#include "fixed.hpp"

bool Fixed::operator>(const Fixed& other) const {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) {
  //std::cout << " > operator called" << std::endl;
  return this->getRawBits() != other.getRawBits();
}

//______________________________________________________

Fixed& Fixed::min(Fixed &one, Fixed &two) {
  return one < two ? one : two;
}

Fixed& Fixed::max(Fixed &one, Fixed &two) {
  return one > two ? one : two;
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &two) {
  return one._integer < two._integer ? one : two;
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &two) {
  return one._integer > two._integer ? one : two;
}
