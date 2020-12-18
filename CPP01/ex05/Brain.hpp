#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	private:
	unsigned int	memory;
	int				capacity;

	public:
	Brain();
	std::string		identifier();
};

# endif
