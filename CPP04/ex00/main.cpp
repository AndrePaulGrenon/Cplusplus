/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:51:39 by agrenon           #+#    #+#             */
/*   Updated: 2022/09/28 15:14:26 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "colours.hpp"

int main(void)
{
    std::cout << BRED "\n\tConstructor called \t\n" CLEAR << std::endl;


    const Animal* meta = new Animal();
    const Animal *i =  new Dog();
    const Animal  *j = new Cat();
    const WrongAnimal* monstre = new WrongCat();
    

    std::cout << BRED "\n\tShow Types \n" CLEAR << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << monstre->getType() << " " << std::endl;


    std::cout << BRED "\n\tMake Sounds \t\n" CLEAR << std::endl;

    j->makeSound();
    i->makeSound();
    meta->makeSound();
    monstre->makeSound();
    

    std::cout << BRED "\n\tDestructor called \t\n" CLEAR << std::endl;
    delete  j;
    delete  i;
    delete  meta;
    delete  monstre;
    
    return (0);
}