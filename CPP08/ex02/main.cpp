#include "mutantstack.hpp"
#include <list>

int main()
{

	std::cout << "\nsubject test : " << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "\nmy test : " << std::endl;

	std::cout << "\nCreate list with value : 75.1, 23.2, 65.3, 42.4, 13.5" << std::endl;
	MutantStack<double> mylist;

	std::cout << "Try empty with empty stack : " << mylist.empty() << std::endl;
	mylist.push(75.1);
	mylist.push(23.2);
	mylist.push(65.3);
	mylist.push(42.4);
	mylist.push(13.5);
	
	std::cout << "Try empty with no empty stack : " << mylist.empty() << std::endl;

	std::cout << "\nCopy the precedente list, pop the last value and push 1000" << std::endl;
	MutantStack<double> copylist(mylist);

	std::cout << "copy.top() before pop : "<< copylist.top() << std::endl;
	copylist.pop();
	std::cout << "copy.top() after pop : "<< copylist.top() << std::endl;
	copylist.push(1000);
	std::cout << "\ncopylist contains: \n";
	for (MutantStack<double>::const_iterator it = copylist.begin() ; it != copylist.end(); it++)
		std::cout << ' ' << *it << std::endl ;

	std::cout << "\nmylist contains: \n";
	for (MutantStack<double>::const_iterator it = mylist.begin() ; it != mylist.end(); it++)
		std::cout << ' ' << *it << std::endl ;
	std::cout << "\nmylist contains in reverse : \n";
	for (MutantStack<double>::const_reverse_iterator it = mylist.rbegin() ; it != mylist.rend(); it++)
		std::cout << ' ' << *it << std::endl ;
	std::cout << "\nchanging all the value to 10 : \n";
	for (MutantStack<double>::reverse_iterator it = mylist.rbegin() ; it != mylist.rend(); it++)
	{
		*it = 10 ;
		std::cout << ' ' << *it << std::endl ;
	}
	std::cout << "\nchanging all the value to -12 : \n";
	for (MutantStack<double>::iterator it = mylist.begin() ; it != mylist.end(); it++)
	{
		*it = -12 ;
		std::cout << ' ' << *it << std::endl ;
	}
	return 0;
}
