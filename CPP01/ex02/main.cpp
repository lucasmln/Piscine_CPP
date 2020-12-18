#include "Zombie.hpp"

int		main(void)
{
	Zombie		zombie("Paul", "vilain");
	ZombieEvent	zombie_event;
	Zombie		*zombie1;
	Zombie		*zombie2;

	zombie.advert();
	zombie1 = zombie_event.newZombie("Nathan");
	zombie1->advert();
	zombie2 = zombie_event.randomChump();
	zombie2->advert();
	delete zombie1;
	delete zombie2;
	return (0);
}
