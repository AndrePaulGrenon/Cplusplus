#include "New_born.class.hpp"

New_born::New_born(int v) : _foo(v)
{
    std::cout << "It is created" << std::endl;
    return ;
}

New_born::~New_born(void)
{
    std::cout << "It is destroyed" << std::endl;
    return;
}

int New_born::GetFoo(void) const
{
    return (this->_foo);
}

void    New_born::SetFoo(int v)
{
    if (v >= 0)
        this->_foo = v;
    return ;
}

int     New_born::Compare(New_born *other) const
{   
    if (this->_foo > other->GetFoo())
        return (1);
    if (this->_foo < other->GetFoo())
        return (-1);
    return (0);
}