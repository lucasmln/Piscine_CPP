#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string		name;
		std::string		type;

	public:
		Zombie(std::string _name, std::string _type);
		void	advert();
};

#include "ZombieEvent.hpp"

# endif
