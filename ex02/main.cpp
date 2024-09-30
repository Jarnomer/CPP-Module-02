#include "Colors.hpp"
#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  cout << BOLDRED "\n\nIncrement operators\n\n" << RESET;
  cout << "a: " << a << endl;
  cout << "a: " << ++a << endl;
  cout << "a: " << a << endl;
  cout << "a: " << a++ << endl;
  cout << "a: " << a << endl;

  cout << "b: " << b << endl;

  cout << BOLDRED "\n\nComparison operators\n\n" << RESET;
  cout << "Is a: " << a << " == b: " << b << " -> " << (a == b) << endl;
  cout << "Is a: " << a << " != b: " << b << " -> " << (a != b) << endl;
  cout << "Is a: " << a << " <= b: " << b << " -> " << (a <= b) << endl;
  cout << "Is a: " << a << " < b: " << b << " -> " << (a < b) << endl;
  cout << "Is a: " << a << " >= b: " << b << " -> " << (a >= b) << endl;
  cout << "Is a: " << a << " > b: " << b << " -> " << (a > b) << endl;

  cout << BOLDRED "\n\nArithmetic operators\n\n" << RESET;
  cout << "What is b: " << b << " - 0.3f ?\n" << (b - 3.0f) << "\n\n";
  cout << "\nWhat is b: " << b << " + 0.3f ?\n" << (b + 3.0f) << "\n\n";
  cout << "\nWhat is b: " << b << " / 2 ?\n" << (b / 2) << "\n\n";
  cout << "\nWhat is b: " << b << " * 2 ?\n" << (b * 2) << "\n\n";

  cout << BOLDRED "\n\nDecrement operators\n\n" << RESET;
  a = 0.0f;
  cout << "\n";
  cout << "a: " << a << endl;
  cout << "a: " << --a << endl;
  cout << "a: " << a << endl;
  cout << "a: " << a-- << endl;
  cout << "a: " << a << endl;

  cout << BOLDRED "\n\nMin/Max operators\n\n" << RESET;
  cout << "Max of a: " << a << " b: " << b << " -> " << Fixed::max(a, b)
       << "\n";
  cout << "Min of a: " << a << " b: " << b << " -> " << Fixed::min(a, b)
       << "\n";
  return 0;
}
