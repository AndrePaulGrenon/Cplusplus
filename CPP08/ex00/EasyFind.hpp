#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <stdexcept>
#include <iterator>
#include <string>
#include <iostream>
#include <algorithm>

template<typename T>
const typename T::iterator    easyFind(T &contain, const int toFind)
{
    typename T::iterator it = std::find(contain.begin(), contain.end(), toFind);

    if (it == contain.end())
        throw std::exception();
    return (it);
}

#endif