#include <iostream>
#include "New_born.class.hpp"

New_born::New_born(void)
{
    std::cout << "JE SUIS CAPABLE DE VIVRE" << std::endl;
    this->foo = 55;
    return ;
}

New_born::~New_born(void)
{
   std::cout << "JE MEURT PRÉCOCEMENT DE SUICIDE INFANTILE À L'AGE DE : " << this->foo - 42 << " ans" << std::endl;
    return ;
}

void    New_born::cry(void)
{

    std::cout << "LA VIE EST TROP DÛRE DONC JE PLEURE !" << std::endl;
    this->foo++;
    return ;
}