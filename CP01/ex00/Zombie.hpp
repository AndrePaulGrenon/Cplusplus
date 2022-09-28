#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string str);
    ~Zombie();

    void    announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif