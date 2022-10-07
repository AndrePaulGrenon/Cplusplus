#include "Dog.hpp"

//CONSTRUCTORS

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl; 
    this->_brain = new Brain();
    return ;
}

Dog::Dog(Dog const & rhs)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl; 
    this->_brain = new Brain(*rhs._brain);
    return ;
}

//DESTRUCTORS

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl; 
    return ; 
}

//OPERATOR OVERLOAD

 Dog&    Dog::operator=(Dog const & rhs)
 {

    return (*this);
 }

//MEMBER FUNCTION

 void        Dog::makeSound(void) const
{
    std::cout << "Wooff Woof Woof grrrrrrrrrr ..." << std::endl; 
    return ;
}