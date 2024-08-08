#include "Fixed.hpp"
#include "Colors.hpp"

#define LOG(s1, s2)                            \
  cout << BOLDCYAN << s1 << BOLDMAGENTA << s2  \
       << GREEN << " called" << endl << RESET;

Fixed::Fixed(void) {
  LOG("Default", " constructor")
  _value = 0;
}

Fixed::Fixed(const int value) {
  LOG("Int", " constructor")
  _value = value << _fBits;
}

Fixed::Fixed(const float value) {
  LOG("Float", " constructor")
  _value = roundf(value * (1 << _fBits));
}

Fixed::~Fixed(void){LOG("De", "constructor")}

Fixed::Fixed(const Fixed &f) {
  LOG("Copy", " constructor")
  _value = f._value;
}

Fixed &Fixed::operator=(const Fixed &f) {
  LOG("Copy", " assignment operator")
  if (this == &f)
    return *this;
  _value = f._value;
  return *this;
}

int Fixed::getRawBits(void) const {
  LOG("getRawBits", " member function")
  return _value;
}

void Fixed::setRawBits(int const raw) {
  LOG("setRawBits", " member function")
  _value = raw;
}

float Fixed::toFloat(void) const { return (float)_value / (1 << _fBits); }

int Fixed::toInt(void) const { return _value >> _fBits; }

ostream &operator<<(ostream &out, const Fixed &f) { return out << f.toFloat(); }
