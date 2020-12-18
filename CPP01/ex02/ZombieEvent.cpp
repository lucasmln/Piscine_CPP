#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
	setZombieType = "Infecte du corona";
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zomb;
	zomb = new Zombie(name, this->setZombieType);
	return zomb;
}

Zombie		*ZombieEvent::randomChump()
{
	Zombie				*zomb;
	int					nb;
	const std::string	name[12] = {"Josette", "Daniel", "Vanessa", "Paul", "Huguette", "David", "Donovan", "Louise", "Leo", "Reynold", "Didier", "Nathali"};
	
	nb = rand() % 12;
	zomb = new Zombie(name[nb], setZombieType);
	zomb->advert();
	return zomb;
}

ZombieEvent::~ZombieEvent()
{
}