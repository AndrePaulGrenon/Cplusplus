/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:47 by agrenon           #+#    #+#             */
/*   Updated: 2022/10/18 15:39:48 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & rhs);
    ~WrongAnimal(void);

    WrongAnimal&    operator=(WrongAnimal const & rhs);
    
    void    makeSound(void) const;

    std::string getType(void) const;
    void        setType(std::string type);
};

#endif