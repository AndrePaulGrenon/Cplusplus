#ifndef GARBAGE_H
#define GARBAGE_H

#include "AMateria.hpp"
#include "colours.hpp"

class Garbage
{
protected:
    Garbage         *_next;
    AMateria        *_disgust;
public:
    Garbage(AMateria *disgust);
    Garbage(const Garbage & rhs);
    ~Garbage();

    static Garbage  *_garbageTop;
    Garbage         *nextGar();
    static Garbage* isTop(void);
    void            destroyAllGarbages(void);
    static void     addGarbage(AMateria  *trash);
    Garbage&        operator=(const Garbage & rhs);
};


#endif