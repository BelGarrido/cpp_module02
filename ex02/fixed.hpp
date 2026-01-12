#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  
  private:
    int _integer;
    static const int _fractional;

  public:
    // DEFAULT CONSTRUCTOR
    Fixed();

    // PARAMETERIZED CONSTRUCTOR
    Fixed(int const intValue);
    Fixed(float const floatValue);

    // COPY ASSIGMENT OPERATOR 
    Fixed& operator=(const Fixed &original);

    // COPY CONSTRUCTOR
    Fixed(const Fixed &original);

    // DESTRUCTOR
    ~Fixed();

    //returns the raw value of the fixed-point value
    int getRawBits(void) const;
    static int getFractional(void);

    //sets the raw value of the fixed-point number
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

    // OPERATOR OVERLOADING FUNCTIONS
    // comparison
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator==(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator!=(const Fixed& other);

    // Declared as static because they operate on two Fixed objects
    // and do not depend on a particular instance of the Fixed class.
    // Being static allows us to call them directly on the class, like Fixed::min(a, b),
    // without creating another Fixed object.
    static Fixed& min(Fixed &one, Fixed &two);
    static Fixed& max(Fixed &one, Fixed &two);
    static const Fixed& min(const Fixed &one, const Fixed &two);
    static const Fixed& max(const Fixed &one, const Fixed &two);

    // arithmetic
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    //increment and decrement
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
};

// INSERTION OVERLOAD
std::ostream& operator<<(std::ostream& output, const Fixed& fixedNumber);

#endif