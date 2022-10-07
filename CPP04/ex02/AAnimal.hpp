#ifndef AANIMAL_H
#define AANIMAL_H

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string _type;
    AAnimal(void);

public:
    AAnimal(AAnimal const & rhs);
    virtual ~AAnimal(void);

    AAnimal&             operator=(AAnimal const & rhs);
    virtual void        makeSound(void) const = 0;

    std::string getType(void) const;
    void        setType(std::string type);

};

#endif