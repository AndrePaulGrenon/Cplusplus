#include "Span.hpp"

Span::Span(const unsigned int a) : _maxN(a)
{
    
    return;
}

Span::Span(const Span &span) : _maxN(span._maxN) , _tab(span._tab)
{
    return ;
}

Span::~Span()
{
    return ;
}