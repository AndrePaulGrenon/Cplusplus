#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:

    Zombie(void);
    Zombie(std::string str);
    ~Zombie();

    void    announce(void);
    void    SetName(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif