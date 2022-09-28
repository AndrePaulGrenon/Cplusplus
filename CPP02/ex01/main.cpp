#include "Fixed.hpp"
#include "colours.hpp"

int main(void)
{
    std::cout << BRED"\n\t\t Constructors and Copies\n" CLEAR << std::endl;

    Fixed a;
    Fixed const b( 10.5f );
    Fixed const c( 42.42f );
    Fixed const d( b );

   
    a = Fixed(1234.4321f);

    std::cout << BRED "\n\tPrint Fixed values: \t\n" CLEAR << std::endl;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << BRED "\n\tPrint toInt values : \t\n" CLEAR << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;


    std::cout << BRED "\n\tPrint toFLoat values: \t\n" CLEAR << std::endl;
    
    std::cout << "a.toFloat() : "<< a.toFloat() << std::endl;
    std::cout << "b.toFloat() : "<< b.toFloat() << std::endl;
    std::cout << "c.toFloat() : "<< c.toFloat() << std::endl;
    std::cout << "d.tofloat: "<< d.toFloat() << std::endl;

    std::cout << BRED "\n\t\tDestructors\n" CLEAR << std::endl;

    return (0);
}