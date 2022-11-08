#include <stdexcept>
#include <iostream>
#include "colours.hpp"
#include "EasyFind.hpp"
#include <list>
#include <vector>
#include <iterator>

int main(int argc, char **argv)
{
    std::list<int>              dlst1;
    std::vector<int>            vec1(3, 7);
    std::vector<int>::iterator	it2;

    vec1.push_back(111);
    dlst1.push_back(8);
    dlst1.push_back(9);
    dlst1.push_back(11);

    std::cout << BRED "TRY LIST EASYFIND" CLEAR << std::endl;
    try
    {
        std::list<int>::iterator    it;
        it = easyFind(dlst1, 7); 
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no such element in the container" << std::endl;
    }

    try
    {
        std::list<int>::iterator    it;
        it = easyFind(dlst1, 8); 
        std::cout << "Number " << *it << " was found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no such element in the container" << std::endl;
    }

    std::cout << BRED "TRY VECTOR EASYFIND" CLEAR << std::endl;
    try
    {
        std::vector<int>::iterator    it;
        it = easyFind(vec1, 7); 
        std::cout << "Number " << *it << " was found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no such element in the container" << std::endl;
    }

    try
    {
        std::vector<int>::iterator    it;
        it = easyFind(vec1, 112); 
        std::cout << "Number: " << *it << " was found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no such element in the container" << std::endl;
    }

    return (0);
} 