#include "Brain.hpp"

Brain::Brain(void)
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Useless idea";
    std::cout << "Brain constructor called" << std::endl;
    return ;
}

Brain::Brain(Brain const & rhs)
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    std::cout << "Brain constructor called" << std::endl; 
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl; 
    return ;
}

Brain&  Brain::operator=(Brain const & rhs)
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}