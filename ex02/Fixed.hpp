#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::roundf;

class Fixed {
public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed &f);
  ~Fixed(void);
  Fixed &operator=(const Fixed &f);
  bool operator==(const Fixed &f) const;
  bool operator!=(const Fixed &f) const;
  bool operator<=(const Fixed &f) const;
  bool operator>=(const Fixed &f) const;
  bool operator<(const Fixed &f) const;
  bool operator>(const Fixed &f) const;
  Fixed operator+(const Fixed &f) const;
  Fixed operator-(const Fixed &f) const;
  Fixed operator*(const Fixed &f) const;
  Fixed operator/(const Fixed &f) const;
  Fixed &min(Fixed &a, Fixed &b);
  const Fixed &min(const Fixed &a, const Fixed &b);
  Fixed &max(Fixed &a, Fixed &b);
  const Fixed &max(const Fixed &a, const Fixed &b);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

private:
  int _value;
  static const int _fBits = 8;
};

ostream &operator<<(ostream &out, const Fixed &f);

#endif
