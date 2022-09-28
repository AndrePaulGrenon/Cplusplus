#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;
    
    if (N > 0)
    {
        zombieHorde = new Zombie[N];

        for (size_t i = 0; i < N; i++)
        {
            zombieHorde[i].SetName(name);
        }
    }
    else
        zombieHorde = NULL;
    return (zombieHorde);
}