/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:25 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTORS

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl; 
    return ;
}

Cat::Cat(Cat const & rhs)
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl; 
    return ;
}

//DESTRUCTORS

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl; 
    return ; 
}

//OPERATOR OVERLOAD

 Cat&    Cat::operator=(Cat const & rhs)
 {

    return (*this);
 }

//MEMBER FUNCTION

 void        Cat::makeSound(void) const
{
    std::cout << "Meooooww Meow Meow.... prrrrrrrrr" << std::endl; 
    return ;
}