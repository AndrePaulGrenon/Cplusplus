#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#pragma once
#include <stack>
#include <iterator>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack(void) {}
    MutantStack(const MutantStack &mutantstack) {}
    ~MutantStack(){}


	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }

	const_iterator begin() const { return (std::stack<T>::c.begin()); }
	const_iterator end() const { return (std::stack<T>::c.end()); }

    MutantStack &operator=(const MutantStack &rhs);
private:

};

#endif