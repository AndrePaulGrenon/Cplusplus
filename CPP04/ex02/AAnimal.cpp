#include "AAnimal.hpp"

//CONSTRUCTORS

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal constructor called" << std::endl; 
    return ;
}
AAnimal::AAnimal(AAnimal const &rhs)
{
    return ;
}

//DESTRUCTOR

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl; 
    return ;
}

//OPERATOR OVERLOAD

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{

    return (*this);
}

//MEMBER FUNCTION

void        AAnimal::makeSound(void) const
{
    std::cout << "aklsdfjnasldjkfsafasgal (Undefined AAnimal sound)" << std::endl; 
    return ;
}

//SET - GET FUNCTIONS

std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void        AAnimal::setType(std::string type)
{
    this->_type = type;
    return ;
}