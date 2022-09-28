#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("Default")
{
    this->ClapTrap::setName(this->_name + "_clap_name");
    this->setHitPoints(FragTrap::_hit_points);
    this->setEnergyPoints(ScavTrap::_energy_points);
    this->setAttackDamage(FragTrap::_attack_damage);
    std::cout << "A" BBLU " DIAMOND  💎 " CLEAR "named " << this->_name << "  was created!" << std::endl;
    std::cout << "   Ps: ClapTrap is now renamed: " BLU << ClapTrap::getName() << CLEAR << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    this->ClapTrap::setName(this->_name + "_clap_name");
    this->setHitPoints(FragTrap::_hit_points);
    this->setEnergyPoints(ScavTrap::_energy_points);
    this->setAttackDamage(FragTrap::_attack_damage);
    std::cout << "A" BBLU " DIAMOND 💎 " CLEAR "named " << this->_name << "  was created!" << std::endl;
    std::cout << "   Ps: ClapTrap is now renamed: " BLU << ClapTrap::getName() << CLEAR << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & object)
{
    this->setName(object.getName());
    this->setEnergyPoints(object.getEnergyPoints());
    this->setHitPoints(object.getHitPoints());
    this->setAttackDamage(object.getAttackDamage());
    std::cout << "A" BBLU " DIAMOND 💎 " CLEAR "named " << this->_name << "  was created!" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "A" BBLU " DIAMOND  " CLEAR "named " << this->_name << "  is destroyed! 💥 " << std::endl;
    return ;
}

DiamondTrap&    DiamondTrap::operator=(DiamondTrap const &rhs)
{

    this->ClapTrap::setName(rhs.ClapTrap::getName());
    this->setEnergyPoints(rhs.getEnergyPoints());
    this->setHitPoints(rhs.getHitPoints());
    this->setAttackDamage(rhs.getAttackDamage());
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "WhoAmi ?   You are " << this->_name << " and your sub-objet is : " << ClapTrap::_name << std::endl;

}
//Override actack function
void    DiamondTrap::attack(std::string const &target) 
{
    ScavTrap::attack(target);
    return ;
};