#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "colours.hpp"

int main(void)
{
    std::cout << BRED "\n\tConstructor called \t\n" CLEAR << std::endl;

    const Animal *i =  new Dog();
    const Animal  *j = new Cat();
    

    std::cout << BRED "\n\tShow Types \n" CLEAR << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
   
    std::cout << BRED "\n\tMake Sounds \t\n" CLEAR << std::endl;

    j->makeSound();
    i->makeSound();


    std::cout << BRED "\n\tDestructor called \t\n" CLEAR << std::endl;
    delete  j;
    delete  i;
    
    return (0);
}