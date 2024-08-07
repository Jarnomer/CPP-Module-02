#include "Fixed.hpp"
#include "Colors.hpp"

Fixed::Fixed(void) {
  cout << BOLDCYAN << "Default" << BOLDMAGENTA << " constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
  _value = 0;
}

Fixed::Fixed(const int value) {
  cout << BOLDCYAN << "Int" << BOLDMAGENTA << " constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
  _value = value << _fBits;
}

Fixed::Fixed(const float value) {
  cout << BOLDCYAN << "Float" << BOLDMAGENTA << " constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
  _value = roundf(value * (1 << _fBits));
}

Fixed::~Fixed(void) {
  cout << BOLDRED << "De" << BOLDMAGENTA << "constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
}

Fixed::Fixed(const Fixed &f) {
  cout << BOLDCYAN << "Copy" << BOLDMAGENTA << " constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
  _value = f._value;
}

Fixed &Fixed::operator=(const Fixed &f) {
  cout << BOLDCYAN << "Copy" << BOLDMAGENTA << " assignment operator" << RESET;
  cout << GREEN << " called" << endl << RESET;
  if (this == &f)
    return *this;
  _value = f._value;
  return *this;
}

int Fixed::getRawBits(void) const {
  cout << BOLDYELLOW << "getRawBits" << BOLDCYAN << " member function" << RESET;
  cout << GREEN << " called" << endl << RESET;
  return _value;
}

void Fixed::setRawBits(int const raw) {
  cout << BOLDYELLOW << "setRawBits" << BOLDCYAN << " member function" << RESET;
  cout << GREEN << " called" << endl << RESET;
  _value = raw;
}

float Fixed::toFloat(void) const { return (float)_value * (1 << _fBits); }

int Fixed::toInt(void) const { return _value << _fBits; }
