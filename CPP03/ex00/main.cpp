#include "ClapTrap.hpp"

int main(void)
{
    std::cout << BRED "\n\t Constructor called \t\n" CLEAR << std::endl;

    ClapTrap instance("Spaghetti Monster");
    ClapTrap instance1("Noodle Blob");
    ClapTrap instance2(instance1);

    std::cout << BRED "\n\t Attacks \n" CLEAR << std::endl;

    instance.attack(instance1.getName());
    instance1.attack(instance.getName());
    instance2.attack("STEVE");
    instance2 = instance;

    std::cout << BRED "\n\t Take Damage and Repare \t\n" CLEAR << std::endl;

    instance.takeDamage(5);
    instance1.takeDamage(7);
    std::cout << instance.getName() << " hitpoints left : " GRN << instance.getHitPoints();
    std::cout << CLEAR " energy points left : " BLU << instance.getEnergyPoints() << CLEAR << std::endl;
    std::cout << instance1.getName() << CLEAR " hitpoints left : " GRN << instance1.getHitPoints();
    std::cout << CLEAR " energy points left : " BLU << instance1.getEnergyPoints() << CLEAR << std::endl << std::endl;
    instance.beRepaired(3);
    instance1.beRepaired(4);
    std::cout << std::endl << instance.getName() << " hitpoints left : " GRN<< instance.getHitPoints();
    std::cout << CLEAR " energy points left : " BLU << instance.getEnergyPoints() << CLEAR << std::endl;
    std::cout << instance1.getName() << CLEAR " hitpoints left : " GRN << instance1.getHitPoints();
    std::cout << CLEAR " energy points left : " BLU << instance1.getEnergyPoints() << CLEAR << std::endl << std::endl;

    std::cout << BRED "\n\tDestructor called \t\n" CLEAR << std::endl;
    
    return (0);
}