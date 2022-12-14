#include "Bureaucrat.hpp"

void    Bureaucrat::throwExcept(void) const
{
    if (this->_grade > 150)
        throw Bureaucrat::GTLException();
    else if (this->_grade < 1)
        throw Bureaucrat::GTHException();
    return ;
}

Bureaucrat::Bureaucrat() : _name("Pure Public Servant with no life") , _grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& publicServant) : _name(publicServant.getName()) , _grade(150)
{
    return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name) , _grade(grade)
{
   this->throwExcept();
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

//OPERATORE OVERLOAD

Bureaucrat&     Bureaucrat::operator=(const Bureaucrat& publicServant)
{
    this->_grade = publicServant.getGrade();
    return (*this);
}


Bureaucrat  &Bureaucrat::operator++(void)
{
    this->getPromotion();
    return (*this);
}

Bureaucrat  &Bureaucrat::operator--(void)
{
    this->getDemoted();
    return (*this);
}

Bureaucrat  Bureaucrat::operator++(int)
{
    Bureaucrat  temp = *this;

    ++*this;
    return (temp);
}

Bureaucrat  Bureaucrat::operator--(int)
{
    Bureaucrat  temp = *this;

    --*this;
    return (temp);
}

std::ostream&   operator<<(std::ostream &o, const Bureaucrat & publicServant)
{
    o << publicServant.getName() << ", bureaucrat grade " << publicServant.getGrade();
    return (o);
}

//MEMBER FUNCTIONS

const std::string Bureaucrat::getName() const
{
    return (this->_name);
}

const int         Bureaucrat::getGrade() const
{
    this->throwExcept();
    return(this->_grade);
}

void    Bureaucrat::getPromotion()
{
    this->_grade = this->_grade - 1;
    if (this->_grade > 150)
        throw Bureaucrat::GTLException();
    else if (this->_grade < 1)
        throw Bureaucrat::GTHException();
    std::cout << this->getName() << " has succesfully been promoted to grade " << this->_grade << std::endl;
    return ;
}

void    Bureaucrat::getDemoted()
{
    this->_grade = this->_grade + 1;
    if (this->_grade > 150)
        throw Bureaucrat::GTLException();
    else if (this->_grade < 1)
        throw Bureaucrat::GTHException();
    std::cout << this->getName() << " has succesfully been demoted to grade " << this->_grade << std::endl;
    return ;
}