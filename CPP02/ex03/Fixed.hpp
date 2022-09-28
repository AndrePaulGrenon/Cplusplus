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

    //Assignation operator Overload
    Fixed    &operator=(Fixed const & rhs); 

    //Comparison operators Overload
    
    bool    operator==(Fixed const &rhs) const;
    bool    operator!=(Fixed const &rhs) const;
    bool    operator>=(Fixed const & rhs) const;
    bool    operator<=(Fixed const & rhs) const;
    bool    operator>(Fixed const & rhs) const;
    bool    operator<(Fixed const & rhs) const;
    
    //Arythmetics operators Overload
    Fixed  operator+(Fixed const & rhs) const;
    Fixed  operator-(Fixed const & rhs) const;
    Fixed  operator*(Fixed const & rhs) const;
    Fixed  operator/(Fixed const & rhs) const;

  //  Incrementation and decrementation operator Overload
    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator++(int);
    Fixed   operator--(int);

    //Member functions
    int     getRawBits(void) const;
    void    setRawBits(const int raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    //Class functions
    static Fixed   &min(Fixed & nb1, Fixed & nb2);
    static const Fixed   &min(Fixed const & nb1, Fixed const & nb2);
    static Fixed   &max(Fixed & nb1, Fixed & nb2);
    static const Fixed   &max(Fixed const & nb1, Fixed const & nb2);

};

std::ostream &     operator<<(std::ostream & o, Fixed const & rhs);

#endif