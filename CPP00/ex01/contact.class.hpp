#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>

class Contact
{
private:
std::string _FirstName;
std::string _LastName;
std::string _NickName;
std::string _Number;
std::string _Secret;

public:
    Contact(void);
    ~Contact(void);

    void    SetFirstName(std::string FirstName);
    void    SetLastName(std::string LastName) ;
    void    SetNickName(std::string NickName);
    void    SetNumber(std::string Number);
    void    SetSecret(std::string Secret);
    
    std::string    GetFirstName(void);
    std::string    GetLastName(void);
    std::string    GetNickName(void);
    std::string    GetNumber(void);
    std::string    GetSecret(void);
};

#endif