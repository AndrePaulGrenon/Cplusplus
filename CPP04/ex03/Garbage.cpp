#include "Garbage.hpp"

Garbage::Garbage(AMateria *disgust) : _disgust(disgust) , _next(nullptr)
{
    std::cout << "Garbage Created!" << std::endl;
    return ;
}
Garbage::Garbage(const Garbage & rhs) : _disgust(rhs._disgust) , _next(rhs._next)
{
    std::cout << "Garbage Created!" << std::endl;
    return ;
}
Garbage::~Garbage(void)
{
    if (this->_disgust)
        delete  this->_disgust;
    std::cout << "AMaterial Deleted from the garbage !" << std::endl;
    std::cout << RED "Garbage Deleted!" CLEAR<< std::endl;
    return ;
}

Garbage     *Garbage::nextGar(void)
{
    return (this->_next);
}

Garbage*    Garbage::isTop(void)
{
    std::cout << "Top Garbage Created!" << std::endl;
    return (Garbage::_garbageTop);
}

void        Garbage::destroyAllGarbages(void)
{
    Garbage     *temp;
    Garbage     *imminentDeath;

    temp = Garbage::_garbageTop->_next;
    while (temp)
    {
        imminentDeath = temp;
        temp = temp->nextGar();
        if (imminentDeath)
            delete imminentDeath;
    }
    std::cout << BGRN "All Garbages Cleared !" CLEAR<< std::endl;
    return ;
}

void        Garbage::addGarbage(AMateria  *trash)
{
    Garbage     *temp;

    if (!Garbage::_garbageTop)
    {
        Garbage::_garbageTop = new Garbage(trash);
        return ;
    }
    temp = Garbage::_garbageTop;
    while (temp)
    {
        if (!temp->nextGar())
            break;
        temp = temp->nextGar();
    }
    temp->_next = new Garbage(trash);
     std::cout << "New Garbage added to the list !" << std::endl;
    return ;
}

Garbage&    Garbage::operator=(const Garbage & rhs)
{
    this->_disgust = rhs._disgust;
    this->_next = rhs._next;
    return (*this);
}

Garbage     *Garbage::_garbageTop = nullptr;