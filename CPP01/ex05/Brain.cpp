#include "Brain.hpp"

Brain::Brain()
{
	capacity = 100;
	memory = rand();
}

std::string		Brain::identifier()
{
	std::stringstream	ss;

	ss << std::hex << std::showbase << this->memory;
	return (ss.str());
}
