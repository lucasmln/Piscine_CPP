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

		void		setName(std::string _name);
		void		setType(std::string _type);
		std::string	getType(void);
};

#include "ZombieHorde.hpp"

# endif
