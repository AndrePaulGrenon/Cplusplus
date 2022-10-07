#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include <string>
#include <iostream>

class Cat : public AAnimal
{
private:
    Brain   *_brain;
public:
    Cat(void);
    Cat(Cat const & rhs);
    ~Cat(void);

    Cat&    operator=(Cat const & rhs);

    void    makeSound(void) const;
};

#endif