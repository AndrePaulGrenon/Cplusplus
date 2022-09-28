#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap(void);

public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & object);
    FragTrap&   operator=(FragTrap const & rhs);
    ~FragTrap(void);

    void    highFivesGuys(void);
};

#endif