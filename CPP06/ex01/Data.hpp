#ifndef DATA_H
#define DATA_H

#include <string>

#pragma once

class Data
{
public:
    Data();
    Data(const std::string &name);
    Data(const Data & data);

    ~Data();

    Data&   operator=(const Data& rhs);

//ACCESSORS
    void                setName(const std::string name);
    const std::string&  getName() const;

private:
    std::string _name;
};

#endif