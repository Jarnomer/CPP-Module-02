#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  cout << a << endl;
  cout << ++a << endl;
  cout << a << endl;
  cout << a++ << endl;
  cout << a << endl;

  cout << b << endl;

  cout << (a == b) << endl;
  cout << (a != b) << endl;
  cout << (a <= b) << endl;
  cout << (a > b) << endl;
  cout << (a <= b) << endl;
  cout << (a > b) << endl;

  cout << (b - 3.0f) << endl;
  cout << (b + 3.0f) << endl;
  cout << (b / 2) << endl;
  cout << (b * 2) << endl;

  a = 0;
  cout << a << endl;
  cout << --a << endl;
  cout << a << endl;
  cout << a-- << endl;
  cout << a << endl;

  /* cout << Fixed::max(a, b) << endl; */
  return 0;
}
