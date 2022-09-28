#include "Harl.hpp"

int message_selection(std::string str)
{
    int a;

    a = -1;
    if (str == "DEBUG")
        a = 0;
    if (str == "INFO")
        a = 1;
    if (str == "WARNING")
        a = 2;
    if (str == "ERROR")
        a = 3;
    return a;
}

void switch_this(int a)
{
    Harl harl;

    switch (a)
    {
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    case 0:
        harl.Complain("DEBUG");
    case 1:
        harl.Complain("INFO");
    case 2:
        harl.Complain("WARNING");
    case 3:
        harl.Complain("ERROR");
    }
}

int main(int argc, char **argv)
{
    std::string str;
    int a = -1;

    if (argc != 2)
    {
        if (argc < 2)
            std::cout << Red "ERROR: No arguments,";
        else
            std::cout << Red "ERROR: Too many arguments,";
        std::cout << " correct usage: ./Harlfilter <ARGUMENT>\n" Clear << std::endl;
        std::cout << GRN << "ARGUMENT type :\n\n" << Clear << "DEBUG\nINFO\nWARNING\nERROR" << std::endl;
        return (1);
    }
    str = argv[1];
    a = message_selection(str);
    if (a >= 0)
        std::cout << "[" << str << "]\n" << std::endl;
    switch_this(a);
    return (0);
}