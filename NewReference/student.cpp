#include <iostream>
#include "Student.class.hpp"
#include <string>

void    passe_fonctions(std::string & str)
{

    std::cout << str << std::endl;
    str += " Water";
    return;
}

int main(void)
{
    Student bob;
   // Student * jim = new Student[42];
   // Student& jimRef = jim[0];
    std::string str1 = "Love";
    std::string& str2 = str1;

    passe_fonctions(str2);
    std::cout << bob.GetLoginRef() << std::endl;
    

    //delete [] jim;
    return(0);
}