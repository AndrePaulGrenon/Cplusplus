#include <stdexcept>
#include <iostream>
#include "colours.hpp"
#include <iterator>
#include <ctime>
#include <vector>
#include "Span.hpp"

int main(int argc, char **argv)
{
  
    std::srand(unsigned (std::time(0)));

    Span   span(22);
    int     myInt[] = {1, 2, 3 , 4};

    span.addNumber(213312);
    span.addNumber(1);
    span.addNumber(7);
    span.addNumber(15);
    span.addNumber(55);
    span.addNumber(-40);

    Span span2(10000);


    span2.addNumber(span.getSet().begin(), span.getSet().end());
    std::vector<int> vec(10000);
    for (size_t i = 0; i < 10000; i++)
    {
        vec.push_back(i);
    }
    
    span2.addNumber(vec.begin(), vec.end());
    
    std::set<int>::iterator it;
    std::set<int>::iterator ite = span2.getSet().end();

    for (it = span2.getSet().begin(); it != ite; ++it)
    {
        std::cout << *it << std::endl;
    }
    
    try
    {
        span.addNumber(7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << BRED "Operator Overload brackets: " CLEAR << std::endl;
        std::cout << "Access throught brackets : " << span2[9999] << std::endl; 
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    std::cout << BRED "Other functions: " CLEAR << std::endl;

    std::cout << "Longest Span : " << span2.longestSpan() << std::endl;
    std::cout << "Shortest Span : " << span2.shortestSpan() << std::endl;

    return (0);
} 