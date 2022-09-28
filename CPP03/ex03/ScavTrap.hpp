#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap :  virtual public ClapTrap
{
private:

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & object);
    ScavTrap&   operator=(ScavTrap const & rhs);
    ~ScavTrap(void);

    void    guardGate(void);
};

#endif