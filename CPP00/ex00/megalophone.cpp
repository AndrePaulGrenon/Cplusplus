#include <iostream>
#include <string>
#include <cctype>

int main (int argc, char **argv)
{
    int i;

    if (argv[1])
    {
        std::string str = argv[1];
        for ( i = 0; i < str.length(); i++)
            std::cout << (char) std::toupper(str[i]);
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}