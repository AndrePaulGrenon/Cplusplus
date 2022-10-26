#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void    iter(T *a1, int size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
    {
        f(a1[i]);
    }
}

#endif