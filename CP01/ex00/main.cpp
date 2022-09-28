#include "Zombie.hpp"

int main(void)
{
    Zombie *zom;

    zom = newZombie("leo");
    randomChump("moreno");

    zom->announce();
    delete zom;

    return (0);
}