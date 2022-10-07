#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
    std::string         _type;

public:
    AMateria(std::string const &type);
    AMateria(const AMateria & rhs);
    virtual ~AMateria(void);

    AMateria&           operator=(const AMateria & rhs);
    
    std::string const   &getType() const;
    
    virtual AMateria    *clone() const = 0;
    virtual void        use(ICharacter &target) = 0;
};

#endif