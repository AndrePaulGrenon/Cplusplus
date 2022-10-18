/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:25 by agrenon           #+#    #+#             */
/*   Updated: 2022/10/18 16:11:24 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTORS

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl; 
    this->_brain = new Brain();
    return ;
}

Cat::Cat(Cat const & rhs)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl; 
    this->_brain = new Brain(*rhs._brain);
    return ;
}

//DESTRUCTORS

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl; 
    return ; 
}

//OPERATOR OVERLOAD

 Cat&    Cat::operator=(Cat const & rhs)
 {
     this->_brain = rhs._brain;
    return (*this);
 }

//MEMBER FUNCTION

 void        Cat::makeSound(void) const
{
    std::cout << "Meooooww Meow Meow.... prrrrrrrrr" << std::endl; 
    return ;
}