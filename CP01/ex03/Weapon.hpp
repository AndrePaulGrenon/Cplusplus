#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>

#define Red \033[0;31m
#define RESET "\x1B[0m"

class Weapon
{
private:
    std::string _type; 
public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);

    std::string getType(void);
    void        setType(std::string ntype);
};


#endif