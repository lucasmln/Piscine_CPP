#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human : public Brain
{
	public:
		Human();
		Brain			getBrain();
		std::string		identifier();

	private:
		Brain	brain;
};

#endif
