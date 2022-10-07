/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:50:52 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//CONSTRUCTORS

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl; 
    return ;
}
Animal::Animal(Animal const &rhs)
{

    return ;
}

//DESTRUCTOR

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl; 
    return ;
}

//OPERATOR OVERLOAD

Animal &Animal::operator=(Animal const &rhs)
{

    return (*this);
}

//MEMBER FUNCTION

void        Animal::makeSound(void) const
{
    std::cout << "aklsdfjnasldjkfsafasgal (Undefined animal sound)" << std::endl; 
    return ;
}

//SET - GET FUNCTIONS

std::string Animal::getType(void) const
{
    return (this->_type);
}

void        Animal::setType(std::string type)
{
    this->_type = type;
    return ;
}