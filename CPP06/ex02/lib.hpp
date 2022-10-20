#ifndef LIB_H
#define LIB_H

enum
{
    A_CLASS,
    B_CLASS,
    C_CLASS,
};

#include <string>
#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

void    identify(Base *p);
void    identify(Base &p);
Base    *generate(void);

#endif