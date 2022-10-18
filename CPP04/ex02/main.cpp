#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "colours.hpp"

int main(void)
{
    std::cout << BRED "\n\tConstructor called \t\n" CLEAR << std::endl;

    //const AAnimal *i =  new AAnimal();
    const AAnimal  *j = new Cat();
    const AAnimal *tony = new Dog();

    std::cout << BRED "\n\tShow Types \n" CLEAR << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << tony->getType() << " " << std::endl;
   
    std::cout << BRED "\n\tMake Sounds \t\n" CLEAR << std::endl;

    j->makeSound();
    tony->makeSound();


    std::cout << BRED "\n\tDestructor called \t\n" CLEAR << std::endl;
    delete  j;
    delete  tony;
   // delete  i;
    
    return (0);
}