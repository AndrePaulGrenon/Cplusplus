#ifndef CONVERT_CLASS_H
#define CONVERT_CLASS_H

#pragma once

#include <iostream>
#include <string>
#include <limits>

enum
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class Convert
{
public:
    Convert(std::string s);
    Convert(Convert const &convert);
    ~Convert(void);

    Convert &operator=(Convert const &rhs);

    void    setStr(std::string const &str);
    void    setChar(char const &c);
    void    setInt(int const &i);
    void    setFloat(float const &f);
    void    setDouble(double const &d);
    
    const std::string   &getStr(void) const;
    const char          &getChar(void) const;
    const int           &getInt(void) const;
    const float         &getFloat(void) const;
    const double        &getDouble(void) const;

    void    fromChar(const std::string str);
    void    fromInt(const std::string str);
    void    fromFloat(const std::string str);
    void    fromDouble(const std::string str);
    
    void    printFunction(void);

private:
    std::string _str;
    char        _c;
    int         _i;
    float       _f;
    double      _d;
    const int   _detectLiteral(std::string const str) const;
};

#endif