/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:37 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
    Dog(void);
    Dog(Dog const & rhs);
    ~Dog(void);

    Dog&    operator=(Dog const & rhs);

    void    makeSound(void) const;

};

#endif