#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#pragma once

class ShrubberyCreationForm
{
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm & instance);
    ~ShrubberyCreationForm(void);

    ShrubberyCreationForm   &operator=(ShrubberyCreationForm & rhs);
private:

};

#endif