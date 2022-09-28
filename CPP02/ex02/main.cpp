#include "Fixed.hpp"
#include "colours.hpp"

int main(void)
{
    Fixed a(5);
    Fixed b(26);
    Fixed c(2);
    Fixed d(2.5f);
    Fixed e(5);

    std::cout << BRED "\n\tPrint Fixed values: \t\n" CLEAR << std::endl;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "e is " << e << std::endl;

    std::cout << BRED "\n\t Comparison operators (<, > , == , !=)\n" CLEAR << std::endl;

    if (a < b)
        std::cout << "C is < than B" << std::endl;
    if (e == a)
        std::cout << "E is equal to A" << std::endl;
    if (b > a)
        std::cout << "B is greater than A" << std::endl;
    if (d != e)
        std::cout << "D is not equal to E" << std::endl;

    std::cout << BRED "\n\tArythmetic operators (+, - , * , /)\n" CLEAR << std::endl;

    std::cout << "a / b : " << a / b << std::endl;
    std::cout << "b / c: " << b / c << std::endl;
    std::cout << "c + a :  " << c + a << std::endl;
    std::cout << "a - d - c - b :  " << a - d - c - b << std::endl;
    std::cout << "d * a :  " << d * a << std::endl;

    std::cout << BRED "\n\tIncrementaiton and Decrementation values: \t\n" CLEAR << std::endl;

    std::cout << "++a is  " << ++a << std::endl;
    std::cout << "--b is " << --b << std::endl;
    std::cout << "c++ is " << c++ << "  then  " << c << std::endl;
    std::cout << "d-- is " << d-- << "  then  " << d << std::endl;

    std::cout << BRED "\n\tMIN MAX function test\t\n" CLEAR << std::endl;

    std::cout << "a.min(a,b) : " << a.min(a, b) << std::endl;
    std::cout << "b.min(c,d): " << b.min(c, d) << std::endl;
    std::cout << "c.max(d, e): " << c.max(d, e) << std::endl;
    std::cout << "d.max(d, b): " << c.max(d, b) << std::endl;

    std::cout << BRED "\n\tExercices\t\n" CLEAR << std::endl;
    Fixed f(0);
    Fixed const g(Fixed(5.05f) * Fixed(2));
    std::cout << f << std::endl;
    std::cout << ++f << std::endl;
    std::cout << f << std::endl;
    std::cout << f++ << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << Fixed::max(f, g) << std::endl;

    return (0);
}