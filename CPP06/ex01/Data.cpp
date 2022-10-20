#include "Data.hpp"

Data::Data() : _name("Unknown data type")
{

    return ;
}

Data::Data(const std::string &name) : _name(name)
{
    return ;
}

Data::Data(const Data & data)
{

    return ;
}

Data::~Data()
{

    return ;
}

Data&   Data::operator=(const Data& rhs)
{
    this->setName(rhs.getName());
    return (*this);
}

void    Data::setName(const std::string name)
{
    this->_name = name;
    return ;
}


const std::string&    Data::getName() const
{
    return (this->_name);
}