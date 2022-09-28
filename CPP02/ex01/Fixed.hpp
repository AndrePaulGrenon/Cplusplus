#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int32_t             _value;
    static const int    _bits_fract;
public:
    Fixed( void );

    Fixed(int const a);
    Fixed(float const a);

    Fixed(Fixed const & src);
    ~Fixed( void );

    Fixed&  operator=(Fixed const & rhs);
    
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &     operator<<(std::ostream & o, Fixed const & rhs);

#endif