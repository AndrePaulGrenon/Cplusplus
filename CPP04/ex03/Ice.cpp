#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
    return ;
}

Ice::Ice(Ice const & rhs) : AMateria(rhs)
{
    std::cout << "Ice copy constructor called" << std::endl;
    return ; 
}
    
Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
    return ;
}

//OPERATOR OVERLOAD

Ice&    Ice::operator=(const Ice & rhs)
{
    return (*this);
}

//OVERRIDE AMATERIA FUNCTIONS

AMateria*   Ice::clone(void) const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* Shoots an ice bold at " BRED << target.getName() << CLEAR " *" << std::endl;
    return ;
}