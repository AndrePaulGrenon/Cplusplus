#ifndef  ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Garbage.hpp"
#include "colours.hpp"
#include <string>
#include <iostream>

class Ice : virtual public AMateria
{
private:

public:
    Ice(void);
    Ice(Ice const & rhs);
    ~Ice(void);

    Ice&    operator=(const Ice & rhs);

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};

#endif 