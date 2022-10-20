#include <stdexcept>
#include <iostream>
#include "colours.hpp"
#include "Convert.Class.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Err: Invalid number of args" << std::endl;
        return (1);
    }
    std::string str = argv[1];
    Convert Foo(str);
    return (0);
} 