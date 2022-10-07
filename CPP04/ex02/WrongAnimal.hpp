/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:26:29 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 16:26:30 by agrenon          ###   ########.fr       */
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
    virtual void    makeSound(void) const;

    std::string getType(void) const;
    void        setType(std::string type);
};

#endif