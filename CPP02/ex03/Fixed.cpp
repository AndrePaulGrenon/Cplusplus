#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->setRawBits(0);
    return;
}

Fixed::Fixed(int const a)
{
    this->setRawBits(a << _bits_fract);
    return;
}

Fixed::Fixed(float const a)
{
    this->setRawBits((int)roundf(a * (1 << 8)));
    return;
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
    return;
}

Fixed::~Fixed(void)
{
    return;
}

//ASSIGNATION OPERATOR

Fixed   &Fixed::operator=(Fixed const &rhs) 
{
    this->_value = rhs.getRawBits();
    return (*this);
}

// COMPARISON OPERATORS

bool    Fixed::operator==(Fixed const &rhs) const
{
    if (this->_value == rhs._value)
        return (true);
    return (false);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    if (this->_value != rhs._value)
        return (true);
    return (false);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    if (this->_value >= rhs._value)
        return (true);
    return (false);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    if (this->_value <= rhs._value)
        return (true);
    return (false);
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    if (this->_value > rhs._value)
        return (true);
    return (false);
}
bool    Fixed::operator<(Fixed const &rhs) const
{
    if (this->_value < rhs._value)
        return (true);
    return (false);
}

// ARYTHMETIC OPERATORS

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

// INCREMENT AND DECREMENT OPERATORS

Fixed &Fixed::operator++(void)
{
    this->_value = this->_value + 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_value = this->_value - 1;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   temp(*this);

    ++*this;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed   temp(*this);

    --*this;
    return (temp);
}

//CLASS FUNCTIONS MIN AND MAX

Fixed   &Fixed::min(Fixed & nb1, Fixed & nb2) 
{
    if (nb1 <= nb2)
        return (nb1);
    return  (nb2);
}
const Fixed   &Fixed::min(Fixed const & nb1, Fixed const & nb2) 
{
    if (nb1 <= nb2)
        return (nb1);
    return  (nb2);
}
Fixed   &Fixed::max(Fixed & nb1, Fixed & nb2) 
{
    if (nb1 >= nb2)
        return (nb1);
    return  (nb2);
}
const Fixed   &Fixed::max(Fixed const & nb1, Fixed const & nb2) 
{
    if (nb1 >= nb2)
        return (nb1);
    return (nb2);
}

// Get, set toINT and toFLOAT FUNCTIONS

int Fixed::getRawBits(void) const
{
    int a = this->_value;
    return (a);
}

void Fixed::setRawBits(const int raw)
{
    this->_value = raw;
    return;
}

int Fixed::toInt(void) const
{
    return (this->_value >> _bits_fract);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value) / (float)(1 << this->_bits_fract);
}

// COUT OVERLOAD

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{

    o << rhs.toFloat();
    return (o);
}

const int Fixed::_bits_fract = 8;