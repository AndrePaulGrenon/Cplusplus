#include <string>
#include <iostream>
#include <iomanip>

int main(void)
{
    std::string brainTxt = "HI THIS IS BRAIN";
    std::string *stringPTR = &brainTxt;
    std::string& stringREF = brainTxt;

    std::cout << "ADRESSES:" << std::endl << std::setw(12) << "string: " << &brainTxt << std::endl;
    std::cout << std::setw(12) << "stringPTR: " << &stringPTR << std::endl;
    std::cout << std::setw(12) << "stringREF: " << &stringREF << std::endl << std::endl;

    std::cout << "VALEURS:" << std::endl << std::setw(12) << "string: " << brainTxt << std::endl;
    std::cout << std::setw(12) << "stringPTR: " << *stringPTR << std::endl;
    std::cout << std::setw(12) << "stringREF: " << stringREF << std::endl;

    return (0);
}