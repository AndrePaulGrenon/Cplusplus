#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template<typename T>
class Array
{
private:
    T               *_tab;
    unsigned int    _size;
public:
    Array<T>(void) : _tab(NULL), _size(0) { std::cout<< "array constructor called with void " << std::endl;}
    Array<T>(unsigned int n): _tab(new T[n]), _size(n) {std::cout<< "array construtctor called with unsigned int" << std::endl;}

    Array<T>(const Array & array) 
    { 
        int length = array.getSize();

        std::cout << "Lenght in copy constructor: " << length << std::endl;
        _tab = new T[length];
        for(size_t j = 0; j < length; j++)
            _tab[j] = array._tab[j];
    }

    ~Array(void) {}

    Array &operator=(const Array &rhs) {
        if (_tab) 
            delete [] _tab;
            
        int length = rhs.getSize();
        std::cout << "Lenght in assignment operator : " << length << std::endl;
        _tab = new T[length];
        for(size_t j = 0; j < length; j++)
            _tab[j] = rhs._tab[j];
        return (*this);
    }

    const T &operator[](unsigned int idx ) const 
    {
        if (idx >= getSize())
            throw std::exception(); 
        return (_tab[idx]);
    }
    const unsigned int   &getSize() const {return (_size); }
};

#endif