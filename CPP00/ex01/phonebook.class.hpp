
#ifndef PHONE_BOOK_CLASS_H
#define PHONE_BOOK_CLASS_H

# include "contact.class.hpp"

class PhoneBook
{
private:
    static int  _MyIndex;

public:
    PhoneBook(void);
    ~PhoneBook(void);

    static int GetMyIndex(void);
    static void SetMyIndex(int index);
    Contact     _instance[8];
};

void    readline(PhoneBook *phonebook);
#endif