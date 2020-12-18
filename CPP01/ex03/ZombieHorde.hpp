#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie	*horde;

	public:
		ZombieHorde(int n);
		void	annouce();
		void	del();
};

#endif
