#include <stdio.h>

int     gl_var = 1;
int     f(void) {return 2;}

namespace   Bar 
{    
    int gl_var = 39;
    int f(void) {return 35;}
}

namespace Foo
{
    int gl_var = 4;
    int ft(void) {return 5;}
}

namespace   Muf = Bar;

int main(void)
{
    
    printf("foo %d\n", Muf::gl_var);    
    printf("bar %d\n", Bar::f());    
    printf("No %d\n", gl_var);    
    return(0);
}