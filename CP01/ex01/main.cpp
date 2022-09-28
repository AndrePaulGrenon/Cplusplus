#include "Zombie.hpp"

int main(void)
{
    Zombie *zom;
    int nZom;

    nZom = 2;
    zom = zombieHorde(nZom, "Marcel");
    for (size_t i = 0; i < nZom && zom; i++)
        zom[i].announce();

    delete [] zom;
    return (0);
}