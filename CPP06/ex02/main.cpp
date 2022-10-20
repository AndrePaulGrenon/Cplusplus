#include "lib.hpp"

int main(void)
{
    srand(time(NULL));
    Base *ptr = generate();
    Base &ref = *ptr;
    identify(ptr);
    identify(ref);
    delete ptr;
    ptr = generate();
    identify(ptr);
    identify(ref);
    delete ptr;
    ptr = generate();
    identify(ptr);
    identify(ref);
    delete ptr;

   return(0);
} 