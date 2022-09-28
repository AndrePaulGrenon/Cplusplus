#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::string str;

    while ( str != "EXIT" &&  str!= "exit")
    {
        harl.Complain("DEBUG");
        harl.Complain("INFO");
        harl.Complain("WARNING");
        harl.Complain("ERROR");
        std::cout << str << std::endl;
        getline(std::cin, str);
    }
    return (0);
}