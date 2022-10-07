#include "AMateria.hpp"

 AMateria::AMateria(std::string const &type) : _type(type)
 {
    std::cout << "AMateria constructor called" << std::endl;
    return ;
 }

 AMateria::AMateria(const AMateria & rhs) : _type(rhs._type)
 {
    std::cout << "AMateria constructor called" << std::endl;
    return ;
 }

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
    return ;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

AMateria&   AMateria::operator=(const AMateria & rhs)
{

    return (*this);
}

void AMateria::use(ICharacter &target)
{
    return ;
}