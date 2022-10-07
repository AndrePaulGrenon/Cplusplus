#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Garbage.hpp"
#include "colours.hpp"

class Cure : public AMateria
{
private:
    
public:

    Cure(void);
    Cure(Cure const & rhs);
    
    ~Cure(void);

    Cure&   operator=(const Cure & rhs);
    
    AMateria*   clone(void) const;
    void        use(ICharacter &target);


};

#endif