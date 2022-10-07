/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:35 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//CONSTRUCTORS

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl; 
    return ;
}

Dog::Dog(Dog const & rhs)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl; 
    return ;
}

//DESTRUCTORS

Dog::~Dog(void)
{
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