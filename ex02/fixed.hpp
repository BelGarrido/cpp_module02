#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  
  private:
    int _integer;
    static const int _fractional;

  public:
    // DEFAULT CONSTRUCTOR
    Fixed();
    // PARAMETERIZED CONSTRUCTOR
    Fixed(int const intValue);
    // PARAMETERIZED CONSTRUCTOR
    Fixed(float const floatValue);
    // COPY ASSIGMENT OPERATOR 
    Fixed& operator=(const Fixed &original);
    // COPY CONSTRUCTOR
    Fixed(const Fixed &original);
    // DESTRUCTOR
    ~Fixed();

    //returns the raw value of the fixed-point value.
    int getRawBits(void) const;
    static int getFractional(void);

    //sets the raw value of the fixed-point number
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};


std::ostream& operator<<(std::ostream& output, const Fixed& fixedNumber);

#endif