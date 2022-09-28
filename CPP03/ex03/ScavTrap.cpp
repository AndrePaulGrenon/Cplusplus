#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    this->setName("Default_scav_trap");
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "A" BMAG " ScavTrap " CLEAR "named " << this->_name << "  was created!" << std::endl;
    return ;    
}

ScavTrap::ScavTrap(std::string name)
{
    this->setName(name);
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "A" BMAG " ScavTrap " CLEAR "named " << this->_name << "  was created!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & object)
{
    this->setName(object.getName());
    this->setEnergyPoints(object.getEnergyPoints());
    this->setHitPoints(object.getHitPoints());
    this->setAttackDamage(object.getAttackDamage());
     std::cout << "A" BMAG " ScavTrap " CLEAR "named " << this->_name << "  was created!" << std::endl;
    return ;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & rhs)
{
    this->setName(rhs.getName());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setHitPoints(rhs.getHitPoints());
    this->setAttackDamage(rhs.getAttackDamage());
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << BMAG " ScavTrap " CLEAR  << this->_name << "  was destroyed!" << std::endl;
    return ;
}

void    ScavTrap::guardGate(void)
{
    std::cout << " 🛡 ScavTrap named " << this->getName() << " is on Guard Duty ! 🛡 " << std::endl;
    return ;
}