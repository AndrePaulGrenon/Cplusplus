#include "myLib.hpp"

int main(void)
{
   std::cout << BRED "\n\tConstructor calls \t\n" CLEAR << std::endl;

    AMateria    *a = new Ice();
    AMateria    *b = new Cure();
    AMateria    *c = new Cure();
    AMateria    *d = new Ice();
    AMateria    *e = new Cure();
    Character   Roger("Roger");
    Character   Bob;

    ICharacter  *Pascal = new Character("Pascal");
    ICharacter  *Booba = new Character("Boobastang");

    std::cout << BRED "\n\t Character equips items ! \t\n" CLEAR << std::endl;
    Roger.equip(a);
    Roger.equip(b);
    Roger.equip(c);
    Roger.equip(d);
    Roger.equip(e);
    
    std::cout << BRED "\n\t Character uses items ! \t\n" CLEAR << std::endl;
    Roger.use(2, *Pascal);
    Roger.use(0, *Pascal);

    std::cout << BRED "\n\t Bob wants to be like Roger ! \t\n" CLEAR << std::endl;

    Bob = Roger;

    std::cout << BRED "\n\t Character unequips items, reequips and reuses \t\n" CLEAR << std::endl;

    Roger.unequip(1);
    Roger.unequip(2);
    Roger.use(1, *Booba);
    Roger.equip(c);
    Roger.equip(b);
    Roger.use(1, *Booba);
    Booba->equip(e);

    std::cout << BRED "\n\t !!!!  --- Exercices tests --- !!!! \t\n" CLEAR << std::endl;

    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria    *temp;

    temp = src->createMateria("ice");
    Booba->equip(temp);
    temp = src->createMateria("cure");
    Booba->equip(temp);


    //std::cout << BRED "\n\tGarbage called \t\n" CLEAR << std::endl;
    //Garbage *top;
    //top->isTop();
    //top->destroyAllGarbages();

    std::cout << BRED "\n\t Destructor calls \t\n" CLEAR << std::endl;
 
    delete src;
    delete Pascal;
    delete Booba;
    return (0);
}