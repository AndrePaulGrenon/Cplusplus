#include <stdexcept>
#include <iostream>
# include <unistd.h>
#include "colours.hpp"
#include "Iter.hpp"

template<typename T>
void    nToPrint(const T &t)
{
    std::cout << "Printf this ma man : " << t << std::endl;
}

void    setRandom(const int &i)
{
    srand(time(NULL));
    int a = reinterpret_cast<int>(rand() % 1000);
    std::cout << a << std::endl;
    return ;
}

void    setRandom(const double &i)
{
     srand(time(NULL));
    std::cout << (rand() % 1000) << std::endl;
    return ;
}


int main(int argc, char **argv)
{
    std::cout << BRED "CHANGE VALUES" CLEAR << std::endl;
    
    int *a =  new int[2];
    double  *d = new double[2];

    for (size_t i = 0; i < 2; i++)
    {
        a[i] = i;
        d[i] = i + 42;
        std::cout << "INT a[" << i << "]= " << a[i] << std::endl;
        std::cout << "DOUBLE d[" << i << "]= " << d[i] << std::endl;
    }

    std::cout << BRED "TESTINT TEMPLATE FUNCTION : template<typename T> nToPrintf(const T &t)" CLEAR << std::endl;

    iter<int>(a, 2, &nToPrint);
    iter<double>(d, 2, &nToPrint);

    std::cout << "d[0] = " << d[0] << std::endl;
    std::cout << "d[1] = " << d[1] << std::endl;

    std::cout << BRED "TESTINT NORMAL FUNCTION: void setRandom(int &i)  values between 0 and 1000" CLEAR << std::endl;

    iter<int>(a, 2, &setRandom);
    iter<double>(d, 2, &setRandom);
    std::cout << "a[0]= " << a[0] << std::endl;
    std::cout << "d[0]= " << d[0] << std::endl;
    
    delete [] a;
    delete [] d;
    
    return (0);
} 