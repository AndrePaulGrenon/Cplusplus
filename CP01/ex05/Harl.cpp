#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void)
{
    return;
}

Harl::~Harl(void)
{
    return;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
    return;
}
void Harl::info(void)
{
    static int index = 0;
    std::string STR[3] = {"I cannot believe adding extra bacon costs more money.",
        "You didn't put enough bacon in my burger !",
        " This bacon is not the tastiest anyway ..."};

    std::cout << STR[index % 3] << std::endl;
    index++;
    return;
}
void Harl::warning(void)
{
    static int index = 0;
    std::string STR[3] = {"I think I deserve to have some extra bacon for free. ",
        " I'm not sastified with this kind of service young man. ",
        " Don't you want to respect your customers ?"};

    std::cout << STR[index % 3] << std::endl;
    index++;
    return;
}
void Harl::error(void)
{
    static int index = 0;
    std::string STR[3] = {"This is unacceptable !",
        " I want to speak to the manager now.",
        " I will review the shit out of this restaurant !"};

    std::cout << STR[index % 3] << std::endl;
    index++;
    return;
}

void Harl::Complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++)
        if (level == option[i])
        {
            (this->*f[i])();
            return;
        }
    return;
}