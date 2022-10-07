#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
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