#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void)
{   
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

int PhoneBook::GetMyIndex(void)
{
    return (PhoneBook::_MyIndex);
}

void PhoneBook::SetMyIndex(int index)
{
    PhoneBook::_MyIndex = index; 
}

int PhoneBook::_MyIndex = 0;
