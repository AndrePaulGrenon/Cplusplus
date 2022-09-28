#include "sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "I'm ALIVE ! !  !" << std::endl;
    Sample::_nbInst += 1;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "I'm DEAD!" <<  std::endl;
   Sample::_nbInst -= 1;
    return ;
}

int     Sample::GetNbInst(void)
{
    return (Sample::_nbInst);
}

int     Sample::_nbInst = 0;