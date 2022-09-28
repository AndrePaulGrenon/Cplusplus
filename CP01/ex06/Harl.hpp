#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

#define GRN   "\x1B[32m"
#define Red "\033[0;31m"
#define Clear "\x1B[0m"

class Harl
{
public:
     Harl(void);
    ~Harl(void);

    void    Complain(std::string level);

private:
    void    debug(void);
    void    info(void) ;
    void    warning(void) ;
    void    error(void);
};

#endif