#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  
  private:
    int _interger;
    static const int _fractional;

  public:
    // DEFAULT CONSTRUCTOR
    Fixed();
    // COPY ASSIGMENT OPERATOR 
    Fixed& operator=(const Fixed &original);
    // COPY CONSTRUCTOR
    Fixed(const Fixed &original);
    // DESTRUCTOR
    ~Fixed();

    //returns the raw value of the fixed-point value.
    int getRawBits(void) const;
    //sets the raw value of the fixed-point number
    void setRawBits(int const raw);
};

#endif