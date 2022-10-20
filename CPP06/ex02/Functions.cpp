#include "lib.hpp"
#include "colours.hpp"

Base    *generate(void)
{
    int abc =  rand() % 3;
    Base    *base;

    switch(abc)
    {
        case (A_CLASS):
            base = new A();
            break;
        case(B_CLASS):
            base = new B();
            break;
        case(C_CLASS):
            base = new C();
            break;
        default:
            base = nullptr;
            break;
    }
    return (base);
}

void    identify(Base *p)
{
    A   *a = dynamic_cast<A *>(p);
    B   *b = dynamic_cast<B *>(p);
    C   *c = dynamic_cast<C *>(p);
    
    if (a)
        std::cout << BMAG "Points" CLEAR << " to an A Class" << std::endl;
    if (b)
        std::cout <<  BMAG "Points" CLEAR << "to an B Class" << std::endl;
    if (c)
        std::cout <<  BMAG "Points" CLEAR << " to an C Class" << std::endl;
    return ;
}

void    identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << BBLU "Refers " CLEAR << "to an A Class" << std::endl;
    }
    catch(const std::exception& e)
    {
       
    }
    try
    {
        B &a = dynamic_cast<B &>(p);
        std::cout << BBLU "Refers " CLEAR << "to an B Class" << std::endl;
    }
    catch(const std::exception& e)
    {
        
    }
    try
    {
        C &a = dynamic_cast<C &>(p);
        std::cout << BBLU "Refers " CLEAR << "to an C Class" << std::endl;
    }
    catch(const std::exception& e)
    {
       
    }
    return ;
}