#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "A yet to be named ClapTrap is created!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "A ClapTrap named " << this->_name << "  was created!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & object) : _name(object._name), 
_hit_points(object._hit_points), 
_energy_points(object._energy_points), 
_attack_damage(object._attack_damage)
{
    std::cout << "A ClapTrap named : " << this->_name << " was created!" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " was Destroyed!" << std::endl;
    return ;
}
    
ClapTrap    &ClapTrap::operator=(ClapTrap const & rhs)
{
    this->_attack_damage = rhs._attack_damage;
    this->_energy_points = rhs._energy_points;
    this->_hit_points = rhs._hit_points;
    this->_name = rhs._name;
    return (*this);
}

//MEMBER FUNCTIONS

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
    std::cout << this->_attack_damage << " points of damage" << std::endl;
    this->_energy_points--;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= amount)
    {
        this->setHitPoints(0);
        std::cout << this->_name << " is dead. Hitpoints = 0" << std::endl;
        return ;
    }
    std::cout << this->_name << " takes " RED << amount << CLEAR " points of damage !" << std::endl;
    this->_hit_points = this->_hit_points - amount;
    this->_energy_points--;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
     std::cout << this->_name << " repares " GRN << amount << CLEAR " hit points !" << std::endl;
    this->_hit_points = this->_hit_points + amount;
    this->_energy_points--;
    return ;
}


//GET - SET MEMBER FUNCTIONS 

int             ClapTrap::getHitPoints(void) const
{
    return (this->_hit_points);
}

int             ClapTrap::getEnergyPoints(void) const
{
    return (this->_energy_points);
}

int             ClapTrap::getAttackDamage(void) const
{
    return (this->_attack_damage);
}  

std::string     ClapTrap::getName(void) const
{
    return (this->_name);
}

void            ClapTrap::setHitPoints(unsigned int amount)
{
    this->_hit_points = amount;
    return ;
}

void            ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->_energy_points = amount;
    return ;
}

void            ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attack_damage = amount;
    return ;
}  

void            ClapTrap::setName(std::string name)
{
    this->_name = name;
    return ;
}