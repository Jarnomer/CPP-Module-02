#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed {
public:
  Fixed(void);
  Fixed(const Fixed &f);
  Fixed &operator=(const Fixed &f);
  ~Fixed(void);
  int getRawBits(void) const;
  void setRawBits(int const raw);

private:
  int _value;
  static const int _fBits = 8;
};

#endif
