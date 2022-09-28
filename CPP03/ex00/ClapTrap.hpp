#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>
#include "colours.hpp"

class ClapTrap
{
private:
    ClapTrap(void);
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;
public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & object);
    ~ClapTrap();
    
    ClapTrap    &operator=(ClapTrap const & rhs);

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    int             getHitPoints(void) const;
    int             getEnergyPoints(void) const;
    int             getAttackDamage(void) const;  
    std::string     getName(void) const;
    void            setHitPoints(unsigned int amount);
    void            setEnergyPoints(unsigned int amount);
    void            setAttackDamage(unsigned int amount);  
    void            setName(std::string name);
};

#endif