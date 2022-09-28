#include <iostream>
#include "Student.class.hpp"

Student::Student(void)
{
    this->_login = "Pyroman666";
    std::cout << "Mon Log: " << this->_login << std::endl;
    return ;
}

Student::~Student(void)
{
    this->_login = "The house has burned";
    std::cout << "Est mort avec log: " << this->_login << std::endl;
    return ;
}

void    Student::cry(void)
{
    this->_login = "The house is on Fire";
    std::cout << "Étudier est trop dur ! Mon log est : " 
    << this->_login << std::endl;
    return ;
}

std::string&     Student::GetLoginRef(void)
{
    return(this->_login); 
}
