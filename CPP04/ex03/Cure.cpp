#include "Cure.hpp"
#include <string>

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
    return ;
}

Cure::Cure(Cure const & rhs) : AMateria(rhs)
{
    std::cout << "Cure copy constructor called" << std::endl;
    return ; 
}
    
Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
    return ;
}

//OVERLOAD OPERATOR

Cure&    Cure::operator=(const Cure & rhs)
{
    return (*this);
}


//OVERRIDE AMATERIA FUNCTIONS

AMateria*   Cure::clone(void) const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* Heals " BRED << target.getName() << CLEAR "'s wounds *" << std::endl;
    return ;
}
