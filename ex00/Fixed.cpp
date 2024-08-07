#include "Colors.hpp"
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
  cout << BOLDCYAN << "Default" << BOLDMAGENTA << " constructor" << RESET;
  cout << GREEN << " called" << endl << RESET;
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
