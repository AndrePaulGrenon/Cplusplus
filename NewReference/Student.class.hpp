#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H

class Student 
{
private:
    std::string _login;
public:

    Student(void);
    ~Student(void);

    void    cry(void);
    std::string&     GetLoginRef(void);
};

#endif