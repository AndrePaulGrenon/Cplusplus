#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : _x(0) , _y(0)
{
    return ; 
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
    return ;
}
Point::Point(Point const & point) : _x(point._x), _y(point._y)
{
    return ;
}

Point::~Point()
{
    return ;
}

Fixed   Point::getX(void) const
{
    return Fixed(this->_x);
}

Fixed   Point::getY(void) const
{
    return Fixed(this->_y);
}

std::ostream    &operator<<(std::ostream & o, Point const & rhs)
{
    o << "x: " << rhs.getX() << " y: " << rhs.getY();
    return (o);
}
