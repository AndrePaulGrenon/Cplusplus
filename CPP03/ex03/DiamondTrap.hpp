#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const & object);
    ~DiamondTrap(void);

    DiamondTrap&    operator=(DiamondTrap const &rhs);
    void            attack(std::string const &target);
    void            whoAmI(void);
};

#endif