/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:50 by agrenon           #+#    #+#             */
/*   Updated: 2022/10/18 15:59:30 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//CONSTRUCTORS

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl; 
    return ;
}

WrongCat::WrongCat(WrongCat const & rhs)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl; 
    return ;
}

//DESTRUCTORS

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl; 
    return ; 
}

//OPERATOR OVERLOAD

 WrongCat&    WrongCat::operator=(WrongCat const & rhs)
{
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Meooooww Meow Meow.... prrrrrrrrr (wrong cat)" << std::endl; 
    return ;
}
