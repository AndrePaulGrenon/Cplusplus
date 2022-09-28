#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <string>

class Fixed
{
private:
    int                 _value;
    static const int    _bits_fract;
public:
    Fixed( void );
    Fixed(Fixed const & src);
    ~Fixed( void );

    int     getRawBits(void) const;
    void    setRawBits(const int raw);

    Fixed&  operator=(Fixed const & rhs);
};

#endif