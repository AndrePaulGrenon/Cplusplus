#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(Animal const & rhs);
    virtual ~Animal(void);

    Animal&             operator=(Animal const & rhs);
    virtual void        makeSound(void) const;

    std::string getType(void) const;
    void        setType(std::string type);

};

#endif