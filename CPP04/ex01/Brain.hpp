#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain(void);
    Brain(Brain const & rhs);

    ~Brain(void);

    Brain&  operator=(Brain const & rhs);
};

#endif