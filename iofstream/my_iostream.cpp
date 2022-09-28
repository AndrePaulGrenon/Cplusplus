#include <iostream>
#include <fstream>
#include <string>

void    passe_fonctions(std::string & str)
{

    std::cout << str << std::endl;
    str += " Water";
    return;
}

int main(void)
{
    std::string str1 = "Love";
    std::string& str2 = str1;
    std::ifstream ifs("numbers");
    unsigned int dst, dst2;

    ifs >> dst >> dst2;
    std::cout << dst << " " << dst2 << std::endl;

    std::ofstream ofs("test.out");

    ofs << "J'apprend le CPP et c'est très plaisant" << std::endl;
    ofs << dst << "et autre chose" << dst2 << std::endl;


    passe_fonctions(str2);
    return(0);
}