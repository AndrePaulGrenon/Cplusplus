#include "Convert.Class.hpp"

Convert::Convert(std::string s) :  _index(-1) , _d(0), _i(0), _f(0)
{
    int a;
    try
    {
        a = this->_detectLiteral(s);
        this->_index = a;
        /* code */
    }
    catch(const std::exception& e)
    {
        a = 4;
        std::cerr << e.what() << std::endl;
    }
    switch (a)
    {
    case CHAR:
        fromChar(s);
        break;
    case INT:
        fromInt(s);
        break;
    case FLOAT:
        fromFloat(s);
        break;
    case DOUBLE:
        fromDouble(s);
        break;
    default:
        printFunction();
        break;
    }
}

Convert::Convert(Convert const &convert) : _index(-1), _c(convert.getChar()), _i(convert.getInt()), _f(convert.getFloat()), _d(convert.getDouble())
{
    return ;
}

Convert::~Convert(void)
{

}

Convert &Convert::operator=(Convert const &rhs)
{
    this->setChar(rhs.getChar());
    this->setInt(rhs.getInt());
    this->setFloat(rhs.getFloat());
    this->setDouble(rhs.getDouble());
    return (*this);
}

//TRANSLATE FROM 


void    Convert::fromChar(const std::string str)
{
    this->setChar(str[0]);
    this->setInt(static_cast<int>(this->getChar()));
    this->setFloat(static_cast<float>(this->getChar()));
    this->setDouble(static_cast<double>(this->getChar()));
    return ;
}

void    Convert::fromInt(const std::string str)
{
    this->setInt(std::stoi(str));
    this->setChar(static_cast<char>(this->getInt()));
    this->setFloat(static_cast<float>(this->getInt()));
    this->setDouble(static_cast<double>(this->getInt()));
    return ;
}

void    Convert::fromFloat(const std::string str)
{
    this->setFloat(std::stof(str));
    if (this->getFloat() < 0 || this->getFloat() > 255 || isnan(this->getFloat()))
           std::cout << "Char : Impossible" << std::endl;
    else
        this->setChar(static_cast<char>(this->getFloat()));
    if (this->getFloat() < INT_MAX && this->getFloat() > INT_MIN && isnan(this->getFloat()) == false)
        this->setInt(static_cast<int>(this->getFloat()));
    else
        std::cout << "Int : Impossible" << std::endl;
    this->setDouble(static_cast<double>(this->getFloat()));
    return ;
}

void    Convert::fromDouble(const std::string str)
{
    this->setDouble(std::stod(str));
    if (this->getDouble() < 0 || this->getDouble() > 255 || isnan(this->getDouble()))
           std::cout << "Char : Impossible" << std::endl;
    else
        this->setChar(static_cast<char>(this->getDouble()));
    if (this->getDouble() < INT_MAX && this->getDouble() > INT_MIN && isnan(this->getDouble()) == false)
        this->setInt(static_cast<int>(this->getDouble()));
    else
        std::cout << "Int : Impossible" << std::endl;
    this->setFloat(static_cast<double>(this->getDouble()));
    return ;
}

//LITERAL CHECK

const int   Convert::_detectLiteral(std::string const str) const
{
    float   f;

    f = std::stof(str);
    if (isnan(f) || str == "nan" || str == "inf" || str == "-inf" || str == "-inff" || str == "inff" || f >= INT_MAX || f <= INT_MIN || str.find('f') != std::string::npos)
        return (FLOAT);

    if (str[0] && str[1] == '\0' && str[0] < 48 && str[0] > 57)
        return (CHAR);

    if (str.find('.') == std::string::npos && str.find('f') == std::string::npos && (f < INT16_MAX || f > INT16_MIN))
        return(INT);

    if (str[0] > 26 && str[0] < 127 && str[str.length() - 1] == f)
        return (FLOAT);

    if (str[0] > 26 && str[0] < 127) // && str.find_first_of('.') == str.find_last_not_of('.'))
        return (DOUBLE);

    return(-1);
}

//PRINT FUNCTION;
void    Convert::printFunction(void)
{
    if (this->getChar() > 26 && this->getChar() < 127)
        std::cout << "Char : "<< this->getChar() << std::endl;
    else
        std::cout << "Char: Non Displayable" << std::endl;
    std::cout << "Int : " << this->_i << std::endl;
    if (this->getFloat() == 0)
        std::cout << "Float : " << this->_f << ".0f" << std::endl;
    else
        std::cout << "Float : " << this->_f << "f" << std::endl;
    if (this->getDouble() == 0)
        std::cout << "Double : " << this->_d << ".0" << std::endl;
    else
        std::cout << "Double : " << this->_d << std::endl;
}

//ACCESSORS - SET

void    Convert::setChar(char const &c)
{
    this->_c = c;
    if (c > 26 && c < 127)
        std::cout << "Char : "<< c << std::endl;
    else
        std::cout << "Char: Non Displayable" << std::endl;
}
    
void    Convert::setInt(int const &i)
{
    this->_i = i;
    std::cout << "Int : " << this->_i << std::endl;
}
    
void    Convert::setFloat(float const &f)
{
    this->_f = f;
    if (this->_index == INT || static_cast<float>(static_cast<int>(f)) == f)
        std::cout << "Float : " << this->_f << ".0f" << std::endl;
    else
        std::cout << "Float : " << this->_f << "f" << std::endl;
}
    
void    Convert::setDouble(double const &d)
{
    this->_d = d;

    if (this->_index == INT || static_cast<double>(static_cast<int>(d)) == d)
        std::cout << "Double : " << this->_d << ".0" << std::endl;
    else
        std::cout << "Double : " << this->_d << std::endl;
}

//ACCESSORS - GET

const char      &Convert::getChar(void) const
{
    return (this->_c);
}
    
const int       &Convert::getInt(void) const
{
    return (this->_i);
}
    
const float     &Convert::getFloat(void) const
{
    return (this->_f);
}
    
const double    &Convert::getDouble(void) const
{
     return (this->_d);
}