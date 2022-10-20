#include <stdexcept>
#include <iostream>
#include <string>
#include "stdint.h"
#include "colours.hpp"
#include "Data.hpp"


uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data *data1 = new Data("Leo");
    uintptr_t ptr = 0;
    Data *receiver = nullptr;

    std::cout << BRED "DATA INFO " CLEAR<< std::endl;
    std::cout << "Data Leo Adresse : " << data1 << " name : " << data1->getName() << std::endl;
    std::cout << "Data pointer receiver : " << receiver << std::endl;
    std::cout << "Uintptr_t value : " << ptr << std::endl;

    std::cout << BRED "AFTER SERIALIZE" CLEAR<< std::endl;
    ptr = serialize(data1);
    std::cout << "Uintptr_t value : " << ptr << std::endl;

    std::cout << BRED "AFTER DESERIALIZE" CLEAR<< std::endl;
    receiver = deserialize(ptr);
    std::cout << "Receiver points to : " << receiver << " receiver points to name : " << receiver->getName()<< std::endl;

    return(0);
} 