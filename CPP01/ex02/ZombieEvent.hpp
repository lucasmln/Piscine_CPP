#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string		setZombieType;

	public:
	ZombieEvent();
	~ZombieEvent();
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();

};

#endif
