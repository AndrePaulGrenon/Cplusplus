#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

#include <iostream>

class Sample
{

public:

    Sample(void);
    ~Sample(void);

    static int GetNbInst(void);
private:
    static int _nbInst;

}; 
#endif