# include "Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " s'est fait exploser la tête" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}