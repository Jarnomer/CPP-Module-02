#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) { std::cout << "Default constructor called\n"; }

Fixed::~Fixed(void) { std::cout << "Deconstructor called\n"; }

Fixed::Fixed(const Fixed &f) {
  std::cout << "Copy constructor called\n";
  _value = f._value;
}

Fixed &Fixed::operator=(const Fixed &f) {
  std::cout << "Copy assignment operator called\n";
  if (this == &f)
    return *this;
  _value = f._value;
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";
  return _value;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function\n";
  _value = raw;
}
