#include "Character.hpp"
#include "Garbage.hpp"


// CONSTRUCTORS

Character::Character(void) : _name("Unknown Stranger")
{
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    std::cout << "Character " BBLU<< this->_name << CLEAR " called into service!" << std::endl;
    return;
}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Character " BBLU << this->_name << CLEAR " called into service !" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    return;
}


Character::Character(Character const &rhs) : _name(rhs._name)
{
    std::cout << "Character Constructor called !" << std::endl;
    for (size_t i = 0; i < 4; i++)
        if (_inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
    return;
}

// DESTUCTORS

Character::~Character(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    
    std::cout << "Character " BBLU << this->getName() << CLEAR " Destructor called !" << std::endl;
    return;
}

// OPERATOR OVERLOAD

Character &Character::operator=(const Character &rhs)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            std::cout << "AMateria destoyed on Character Copy Operator" << std::endl;
        }
        if (!rhs._inventory[i])
            this->_inventory[i] = nullptr;
        else
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
    this->_name = rhs.getName();
    std::cout << "Character Copy operator called !" << std::endl;
    return (*this);
}

std::string const   &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (size_t i = 0; i < 4; i++)
        if  (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            std::cout << "Item " << m->getType() << " equipped successfully !" << std::endl;
            return ;
        }
    std::cout << "Inventory is full !" << std::endl;
    return ;
}

void    Character::unequip(int idx)
{
    if (idx >= 0  && idx < 4 && this->_inventory[idx])
    {
        std::cout << "Item " <<this->_inventory[idx]->getType() << " sucessfully unequiped !" << std::endl;
        //Garbage::addGarbage(this->_inventory[idx]);
        this->_inventory[idx] = nullptr;
        return ;
    }
    std::cout << "No Item to unequip at this index!" << std::endl;
    return ;
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        this->_inventory[idx]->use(target);
        return ;
    }
    std::cout << this->_name << " has no item in this index " << std::endl;
    return ;
}