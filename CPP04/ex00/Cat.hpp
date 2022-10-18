/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:30 by agrenon           #+#    #+#             */
/*   Updated: 2022/10/18 16:00:31 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
    Cat(void);
    Cat(Cat const & rhs);
    ~Cat(void);

    Cat&    operator=(Cat const & rhs);

    virtual void    makeSound(void) const;

};

#endif