#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int>		tab;
		unsigned int			size;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &s);
		~Span();

		Span	&operator=(Span const &s);

		void	addNumber(int nb);
		void	addNumber(int start, int end);
		int		shortestSpan();
		int		longestSpan();

		class NotEnoughElem : public std::exception
		{
			public:
				NotEnoughElem() throw ();
				~NotEnoughElem() throw ();
				NotEnoughElem(NotEnoughElem const & copy) throw();
				NotEnoughElem & operator=(NotEnoughElem const & ope) throw();
				virtual const char* what() const throw();
		};

		class NoSpace : public std::exception
		{
			public:
				NoSpace() throw ();
				~NoSpace() throw ();
				NoSpace(NoSpace const & copy) throw();
				NoSpace & operator=(NoSpace const & ope) throw();
				virtual const char* what() const throw();
		};
};

#endif
