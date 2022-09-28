#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    ScavTrap(void);

public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & object);
    ScavTrap&   operator=(ScavTrap const & rhs);
    ~ScavTrap(void);

    void    guardGate(void);
};

#endif