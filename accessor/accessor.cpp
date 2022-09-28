
#include "New_born.class.hpp"

int main(void)
{
    New_born instance(777);
    New_born instance2(666);
    int     equal;

    instance.SetFoo(999);
    equal = instance2.Compare(&instance);
    std::cout << "My New foo is : [" << instance.GetFoo() << "]" << std::endl;
    std::cout << "Compare: [" << equal << "]" << std::endl;
    return(0);
}