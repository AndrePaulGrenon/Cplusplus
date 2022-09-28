#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>
#include "colours.hpp"

class ClapTrap
{
private:

protected:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & object);
    ~ClapTrap(void);
    
    ClapTrap    &operator=(ClapTrap const & rhs);

    virtual void    attack(const std::string& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

    virtual int             getHitPoints(void) const;
    virtual int             getEnergyPoints(void) const;
    virtual int             getAttackDamage(void) const;  
    virtual std::string     getName(void) const;
    virtual void            setHitPoints(unsigned int amount);
    virtual void            setEnergyPoints(unsigned int amount);
    virtual void            setAttackDamage(unsigned int amount);  
    virtual void            setName(std::string name);
};

#endif