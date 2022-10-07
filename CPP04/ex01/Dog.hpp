#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *_brain;
public:
    Dog(void);
    Dog(Dog const & rhs);
    ~Dog(void);

    Dog&    operator=(Dog const & rhs);

    void    makeSound(void) const;

};

#endif