#include <iostream>

class Parent{
public:
    Parent(/* args */);
    virtual ~Parent();
};

class Enfant1 : public Parent
{
public:
 Enfant1(/* args */);
     Enfant1();
};

class Enfant2 : public Parent
{
public:
 Enfant2(/* args */);
     Enfant2();
};



int main(void)
{
    std::cout << "SALUT LE GRAND" << std::endl;
    Enfant1 JB;

    Parent * Poli = &JB;

    Enfant1 *c = dynamic_cast<Enfant1 *>(Poli);

    return (0);
}