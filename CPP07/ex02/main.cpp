#include <stdexcept>
#include <iostream>
# include <unistd.h>
#include "colours.hpp"
#include "Array.hpp"


int main(int argc, char **argv)
{
    std::cout << BRED "CHANGE VALUES" CLEAR << std::endl;
  
    Array<int>  array;
     Array<int>  array1(12);
    Array<int>  array2(array1);
    int *a = new int();
  
    std::cout << "int a : " << a[1000] << std::endl;

    try
    {
        std::cout << "Try accesss array 1: " << array1[1] << std::endl;
        std::cout << "Try accesss array -1: " << array1[-1] << std::endl;
        //std::cout << "Try accesss array 11: " << array1[13] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Array Exception caught - Bad access" << std::endl;

    }
    
    std::cout << BRED "TESTINT getSize" CLEAR << std::endl;

    std::cout << "Array: " << array.getSize()  << "  Array1: " << array1.getSize() << std::endl;

    delete a;
    return (0);
} 