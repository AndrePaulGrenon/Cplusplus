#include "contact.class.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return;
}

void    Contact::SetFirstName(std::string FirstName)
{
    this->_FirstName = FirstName;
}

void    Contact::SetLastName(std::string LastName)
{
    this->_LastName = LastName;
}

void    Contact::SetNickName(std::string NickName)
{
    this->_NickName = NickName;
}

void    Contact::SetNumber(std::string Number)
{
    this->_Number = Number;
}

void    Contact::SetSecret(std::string Secret)
{
    this->_Secret = Secret;
}

std::string    Contact::GetFirstName(void)
{
    return (this->_FirstName);
}

std::string    Contact::GetLastName(void)
{
    return (this->_LastName);
}

std::string    Contact::GetNickName(void)
{
    return (this->_NickName);
}

std::string    Contact::GetNumber(void)
{
    return (this->_Number);
}

std::string    Contact::GetSecret(void)
{
    return (this->_Secret);
}