#ifndef PAIR_H
#define PAIR_H

#include <iomanip>
#include <iostream>

template<typename T, typename U>
class Pair
{
private:
    T const &_lhs;
    U const &_rhs;
    Pair<T, U>(void);

public:
    Pair<T, U>(const T &lhs, const U &rhs) : _lhs(lhs), _rhs(rhs) {
        std::cout << "Generic template" << std::endl;
    }
 
    ~Pair<T, U>() {}

    T const &getLhs(void) const {return this->_lhs;}
    U const &getRhs(void) const {return this->_rhs;}

};


#endif