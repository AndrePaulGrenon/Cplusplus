#include "DiamondTrap.hpp"


int main(void)
{
     std::cout << BRED "\n\t Constructor called \t\n" CLEAR << std::endl;

    DiamondTrap instance(" Allo" );
    DiamondTrap instance1("Molotov Machine");
    DiamondTrap instance2(void);

    std::cout << BRED "\n\t Attacks and Copy operator\n" CLEAR << std::endl;
     instance.attack(instance.getName());
    instance1.attack(instance.getName());
    

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

    std::cout << BRED "\n\t HighFive Funtion \t\n" CLEAR << std::endl;
    instance.whoAmI();
    instance1.whoAmI();

    std::cout << BRED "\n\t HighFive Funtion \t\n" CLEAR << std::endl;
    instance.highFivesGuys();

    return (0);
}