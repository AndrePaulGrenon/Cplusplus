#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string new_type)
{
    this->_type = new_type;
    return ;
}