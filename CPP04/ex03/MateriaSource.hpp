#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "colours.hpp"

class MateriaSource : public IMateriaSource
{
protected:
    AMateria    *_inventory[4];

public:
    //Constructor
    MateriaSource(void);
    MateriaSource(const MateriaSource & rhs);
    //Destructor
    ~MateriaSource(void);

    //Operator overload
    MateriaSource&  operator=(const MateriaSource & rhs);

    //Member functions
    void            learnMateria(AMateria *m);
    AMateria        *createMateria(std::string const &type);
};


#endif