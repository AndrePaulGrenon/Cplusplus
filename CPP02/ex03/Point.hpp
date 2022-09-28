#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class   Point
{
private:
   Fixed const  _x;
   Fixed const  _y;
public:
    Point(void);
    Point(Fixed const x, Fixed const y);
    Point(Point const & point);

    ~Point(void);
    Fixed   &operator=(Point & rhs);

    //Member functions
    Fixed   getX(void) const;
    Fixed   getY(void) const;
}; 

std::ostream    &operator<<(std::ostream & o, Point const & rhs);

#endif