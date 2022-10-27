#ifndef SPAN_H
#define SPAN_H

#pragma once

#include <deque>

class Span
{
public:
    Span(const unsigned int a);
    Span(const Span &span);
    ~Span(void);

    const Span  &operator=(const Span   &rhs);

    void    addNumber(int n);

private:
    std::deque<int>    _tab;
    const unsigned int  _maxN;
};

#endif