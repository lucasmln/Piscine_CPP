#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const  &m): std::stack<T>(m) {};
		virtual ~MutantStack()	{};

		MutantStack		&operator=(MutantStack const &m) {
			return (std::stack<T>::operator=(m));
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin()  { return std::stack<T>::c.begin(); };
		const_iterator cbegin() const  { return std::stack<T>::c.cbegin(); };
		iterator end()  { return std::stack<T>::c.end(); };
		const_iterator cend() const  { return std::stack<T>::c.cend(); };
		reverse_iterator rbegin()  { return std::stack<T>::c.rbegin(); };
		reverse_iterator rend()  { return std::stack<T>::c.rend(); };
		const_reverse_iterator crbegin() const { return std::stack<T>::c.rbegin(); };
		const_reverse_iterator crend() const { return std::stack<T>::c.rend(); };
};

#endif
