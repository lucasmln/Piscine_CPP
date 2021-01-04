#include "span.hpp"


Span::Span(): size(0)
{
}

Span::Span(unsigned int n): size(n)
{
}

Span::Span(Span const &s)
{
	size = s.size;
}

Span::~Span()
{
}

Span		&Span::operator=(Span const &s)
{
	this->size = s.size;
	this->tab = s.tab;
	return (*this);
}

void		Span::addNumber(int nb)
{
	if (tab.size() >= size)
		throw Span::NoSpace();
	tab.push_back(nb);
}

void		Span::addNumber(int start, int end)
{
	int		i = -1;

	if (start > end)
		throw Span::NotEnoughElem();
	if (size < tab.size() + (end - start))
		throw Span::NoSpace();
	while (++i < end)
		tab.push_back(i);
}

int			Span::shortestSpan()
{
	unsigned int	i;
	int				min;

	if (tab.size() <= 1)
		throw Span::NotEnoughElem();
	i = -1;
	min = 0;
	std::sort(tab.begin(), tab.end());
	while (++i + 1 < tab.size())
	{
		if (std::abs(tab[i] - tab[i + 1]) < min || i == 0)
			min = std::abs(tab[i] - tab[i + 1]);
	}
	return (min);
}

int			Span::longestSpan()
{
	int		min;
	int		max;

	if (tab.size() <= 1)
		throw Span::NotEnoughElem();
	min = *std::min_element(tab.begin(), tab.end());
	max = *std::max_element(tab.begin(), tab.end());
	return (max - min);
}

Span::NoSpace::NoSpace() throw () {}
Span::NoSpace::~NoSpace() throw () {}
Span::NoSpace::NoSpace(NoSpace const & copy) throw() 
{
	*this = copy;
}

Span::NoSpace &Span::NoSpace::operator=(NoSpace const & ope) throw() 
{
	(void) ope; return *this;
}

const char* Span::NoSpace::what() const throw() 
{ 
	return "No space left\n";
}

Span::NotEnoughElem::NotEnoughElem() throw () {}
Span::NotEnoughElem::~NotEnoughElem() throw () {}
Span::NotEnoughElem::NotEnoughElem(NotEnoughElem const & copy) throw()
{
	*this = copy;
};

Span::NotEnoughElem & Span::NotEnoughElem::operator=(NotEnoughElem const & ope) throw()
{
	(void) ope; return *this;
}

const char* Span::NotEnoughElem::what() const throw()
{
	return ("Not enough elements \n");
};
