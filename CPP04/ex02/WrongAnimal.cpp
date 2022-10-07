#include "WrongAnimal.hpp"

//CONSTRUCTORS

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl; 
    return ;
}
WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{

    return ;
}

//DESTRUCTOR

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl; 
    return ;
}

//OPERATOR OVERLOAD

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{

    return (*this);
}

//MEMBER FUNCTION

void        WrongAnimal::makeSound(void) const
{
    std::cout << "BLURP BRLURP... ARRRRRRGGGGGGKRRRRRR (Undefined WrongAnimal sound)" << std::endl; 
    return ;
}

//SET - GET FUNCTIONS

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void        WrongAnimal::setType(std::string type)
{
    this->_type = type;
    return ;
}