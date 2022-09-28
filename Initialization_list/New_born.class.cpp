#include <iostream>
#include "New_born.class.hpp"

New_born::New_born(int const m1, char t1, float p1) : membres(m1), type(t1), poids(p1)
{
    std::cout << "JE SUIS CAPABLE DE VIVRE" << std::endl;
    return ;
}

New_born::~New_born(void)
{
   std::cout << "JE MEURT PRÉCOCEMENT DE SUICIDE INFANTILE À L'AGE DE : " << this->membres << " ans" << std::endl;
    return ;
}


//Lorsqu'on écrit une fonction qui ne modifie pas L'instance courrante de notre classe, prendre l'habitude d'écrire const. 
void    New_born::cry(void) const //Cette fonction n'aura pas d'assignation
{

    std::cout << "LA VIE EST TROP DÛRE DONC JE PLEURE !" << std::endl;

    return ;
}