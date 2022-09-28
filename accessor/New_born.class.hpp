#ifndef NEW_BORN_CLASS_H
#define NEW_BORN_CLASS_H

#include <iostream>

class New_born 
{
public:

    New_born(int v);
    ~New_born(void);

    int     GetFoo(void) const;
    void    SetFoo(int v);
    int     Compare(New_born *other) const;
private:
    int _foo;
};

#endif