#include "span.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "\nsubject test : " << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << "\nmy test : " << std::endl;

	Span test(8);

	std::cout << "\ntrying with vector of size 8" << std::endl;
	for (int i = 0; i < 8 ; i++)
	{
		test.addNumber(i * (i % 2 == 0 ? i : -i));
		std::cout << i << ": " << i * (i % 2 == 0 ? i : -i) << "|";
	}
	std::cout << std::endl;
	std::cout << "Shortest : " << test.shortestSpan() << std::endl;
	std::cout << "Longest : " << test.longestSpan() << std::endl;

	Span a = Span(1001);
	std::cout << "\ntrying to put 1002 element in a vector of size 1001"  << std::endl;
	try
	{
		a.addNumber(0, 1002);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << "\ntrying to put 1001 element in a vector of size  1001"  << std::endl;

	a.addNumber(0, 1001);
	std::cout << "shortest Span : "<< a.shortestSpan() << std::endl;
	std::cout << "longest Span : " << a.longestSpan() << std::endl;


	std::cout << "\ntrying to know the shortest span in a vector with no value "  << std::endl;

	Span c = Span(5);
	try
	{
		std::cout << "shortest Span : "<< c.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << "\ntrying to know the longest span in a vector with no value "  << std::endl;

	try
	{
		std::cout << "longest Span : "<< c.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	c.addNumber(2);

	std::cout << "\ntrying to know the shortest span in a vector with 1 value "  << std::endl;
	try
	{
		std::cout << "shortest Span : "<< c.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	std::cout << "\ntrying to know the longestest span in a vector with 1 value "  << std::endl;
	try
	{
		std::cout << "longest Span : "<< c.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	

Span d = Span(15000);
	std::cout << "\ncreation of a vector of size 15000 filled with random  "  << std::endl;
	for (int i = 0; i < 15000; i++)
	{
		d.addNumber((rand() % 1000000000));
	}
	std::cout << "shortest Span : "<< d.shortestSpan() << std::endl;
	std::cout << "longest Span : " << d.longestSpan() << std::endl; 
}
