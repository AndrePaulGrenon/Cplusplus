#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->setName("Default_Frag_Trap");
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "A" BGRN " FragTrap " CLEAR "named " << this->getName() << "  was created!" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    this->setName(name);
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "A" BGRN " FragTrap " CLEAR "named " << this->getName() << "  was created!" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & object)
{
    this->setName(object.getName());
    this->setEnergyPoints(object.getEnergyPoints());
    this->setHitPoints(object.getHitPoints());
    this->setAttackDamage(object.getAttackDamage());
     std::cout << "A" BGRN " FragTrap " CLEAR "named " << this->getName() << "  was created!" << std::endl;
    return ;
}

FragTrap&   FragTrap::operator=(FragTrap const & rhs)
{
    this->setName(rhs.getName());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setHitPoints(rhs.getHitPoints());
    this->setAttackDamage(rhs.getAttackDamage());
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << BGRN " FragTrap " CLEAR  << this->getName() << "  was destroyed!" << std::endl;
    return ;
}

void    FragTrap::highFivesGuys(void)
{
    std::string buf;

    std::cout << " FragTrap named " << this->getName() << " is requesting High Fives ! 👋 (y/n)" << std::endl;
    std::cin >> buf;
    if (buf ==  "y")
        std::cout << "HURRAYY ! you are a friend ! 👏 " << std::endl;
    else
        std::cout << "You are not fun ... 👎" << std::endl;
    return ;
}