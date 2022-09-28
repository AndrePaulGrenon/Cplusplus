#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & object);
    FragTrap&   operator=(FragTrap const & rhs);
    ~FragTrap(void);

    void    highFivesGuys(void);
};

#endif