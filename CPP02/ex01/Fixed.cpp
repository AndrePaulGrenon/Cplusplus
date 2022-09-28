#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
    return ;
}

Fixed::Fixed(int const a)
{
    this->setRawBits(a << _bits_fract);
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const a)
{
    this->setRawBits((int) roundf(a * (1 << 8)));
     std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed&  Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return(this->_value);
}

void    Fixed::setRawBits(const int raw)
{
    this->_value = raw;
    return ;
}

int     Fixed::toInt(void) const
{
    return (this->_value >> _bits_fract);
}

float   Fixed::toFloat(void) const
{
    return ( (float)this->_value) / (float) (1 << this->_bits_fract);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    
    o << rhs.toFloat();
    return (o);
}

const int    Fixed::_bits_fract = 8;