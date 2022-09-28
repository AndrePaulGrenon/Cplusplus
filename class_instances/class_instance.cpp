#include <iostream>
#include "New_born.class.hpp"

int main(void)
{
    New_born instance;

    instance.cry();
    std::cout << "VARIALBE FOO: [" << instance.foo << "]" << std::endl;

    return(0);
}