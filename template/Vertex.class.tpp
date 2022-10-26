#ifndef VERTEX_H
#define VERTEX_H

#include <iomanip>
#include <iostream>

#pragma once


template<typename T = float>
class Vertex
{
public:
    Vertex<T>(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
    ~Vertex() {}

    T const & getX(void) const {return this->_x;}
    T const &getY(void) const {return this->_y;}
    T const &getZ(void) const {return this->_z;}

private:
    T const _x;
    T const _y;
    T const _z;
    Vertex(void);
};


template <typename T>
std::ostream    &operator<<(std::ostream &o, Vertex< T > const &v)
{
    o << std::setiosflags(std::ios::fixed);
    o << "Vertex( ";
    o << v.getX() << ", ";
    o << v.getY() << ", ";
    o << v.getZ() << " )";
    return o;
}

#endif

