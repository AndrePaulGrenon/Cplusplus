#include "MateriaSource.hpp"

// Constructor

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource contructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
    std::cout << "MateriaSource contructor called" << std::endl;
    return;
}

// Destructor
MateriaSource::~MateriaSource(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << BMAG "MateriaSource destructor called" CLEAR<< std::endl;
    return;
}

// Operator overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    return (*this);
}

// Member functions
void MateriaSource::learnMateria(AMateria *m)
{
    for (size_t i = 0; i < 4; i++)
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            std::cout << "Item " << m->getType() << " equipped to MateriaSource successfully !" << std::endl;
            return;
        }
    std::cout << "Materia Source Inventory is full ! Copy failed !" << std::endl;
    return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 4; i++)
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
            return (this->_inventory[i]->clone());
    return (nullptr);
}