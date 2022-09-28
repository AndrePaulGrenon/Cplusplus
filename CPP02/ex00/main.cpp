#include "Fixed.hpp"
#include "colours.hpp"

int main(void)
{
    std::cout << BRED"\n\t\tCONSTRUCTORS AND COPIES\n" CLEAR << std::endl;

    Fixed   a;
    Fixed   b(a);
    Fixed   c;

    c = a;

    std::cout << BRED "\n\t\tPRINT VALUES\n" CLEAR << std::endl;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << BRED "\n\t\tDestructors\n" CLEAR << std::endl;

    return (0);
}