#include "Span.hpp"

Span::Span(const unsigned int a) : _maxN(a) , _n(0)
{
    return;
}

Span::Span(const Span &span) : _maxN(span._maxN) , _set(span._set), _n(0)
{
    return ;
}

Span::~Span()
{
    return ;
}

//OVERLOADING

Span  &Span::operator=(const Span   &rhs)
{
    this->_set = rhs._set;
    this->_n = rhs._n;
    return (*this);
}

int   Span::operator[](int j)
{
std::set<int>::iterator it = this->getSet().begin();
   for (size_t i = 1; i < j + 1; i++)
   {
        if (it == this->getSet().end())
            throw OUTOFBOUNDSException();
        it++;
   }
    return (*it);

}


//MEMBER FUNCTIONS

void        Span::addNumber(const int n)
{
    if (this->getSet().size() < this->getMaxN())
    {
        this->_set.insert(n);
        this->setN(getN() + 1);
    }
    else
        throw Span::SPANFULLException();
}

const unsigned int  &Span::getMaxN(void) const
{
    return (this->_maxN);
}
 
const std::set<int> &Span::getSet(void) const
{
    return (this->_set);
}

void    Span::setSet(const std::set<int> &set)
{
    this->_set = set;
}

const unsigned int      &Span::getN(void) const
{
    return (_n);
}

void                    Span::setN(const unsigned int n)
{
    this->_n = n;
    return ;
}

unsigned int Span::shortestSpan(void)
{
    std::set<int>::iterator it = this->getSet().begin();
    std::set<int>::iterator ite =  this->getSet().end();

    int firstValue;
    int lastValue;
    int smallestRange = INT32_MAX;
    if (this->getN() < 2)
        throw Span::SPANFULLException();
    while (it != ite)
    {
        firstValue = *it;
        it++;
        if (it != ite)
        {
            lastValue = *it;
            if (lastValue - firstValue < smallestRange)
                smallestRange = lastValue - firstValue;
        }
    }
    return (smallestRange);
}

unsigned int Span::longestSpan(void)
{
    std::set<int>::iterator it = this->getSet().begin();
    std::set<int>::iterator ite = this->getSet().end();

    int firstValue;
    int lastValue;
    int longestRange = INT32_MIN;
    if (this->getN() < 2)
        throw Span::SPANFULLException();
    while (it != ite)
    {
        firstValue = *it;
        ++it;
        lastValue = *it;
        if (it != ite)
        {
            if (lastValue - firstValue > longestRange)
               longestRange = lastValue - firstValue;
        }
    }
    return (longestRange);
}
