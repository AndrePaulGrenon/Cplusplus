#ifndef SPAN_H
#define SPAN_H

#pragma once

#include <set>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span
{
public:
    Span(const unsigned int a);
    Span(const Span &span);
    ~Span(void);

    //OVERLOAD OPERATORS
    Span  &operator=(const Span   &rhs);
    int   operator[](int j);

    //MEMBER FUNCTIONS
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
    void         addNumber(const int n);

    //ERROR CLASS;
    class SPANFULLException: public std::exception
    {
        private:
        public:
            virtual const char* what() const throw() { return ("SPAN::FULLException: Span can't take more data");}
    };

    class OUTOFBOUNDSException: public std::exception
    {
        private:
        public:
            virtual const char* what() const throw() { return ("SPAN::OUTOFBOUNDSException: Span index is out of bounds");}
    };
    
    //ADD NUMBER OVERRIDE using TEMPLATE to access iterators
    template<class InputIterator>
    void        addNumber(InputIterator begin, InputIterator end)
    {
        try
        {
            while (begin != end)
            {
                this->addNumber(*begin);
                begin++;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    //ACCESSORS
    const   unsigned int    &getMaxN(void) const;
    const std::set<int>     &getSet(void) const;
    void                    setSet(const std::set<int> &set);
    const unsigned int      &getN(void) const;
    void                    setN(const unsigned int n);



private:
    std::set<int>       _set;
    const unsigned int  _maxN;
    unsigned int        _n;
};

#endif