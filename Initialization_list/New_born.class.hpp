#ifndef NEW_BORN_CLASS_H
#define NEW_BORN_CLASS_H

class New_born 
{
public:

    int     public_foo;
    char    type;
    float   poids;

    New_born(int const m1, char t1, float p1);
    ~New_born(void);

private: 

    int     private_foo;
    void    private_cry(void) const;
};

#endif