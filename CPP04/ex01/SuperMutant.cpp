#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::SuperMutant(const SuperMutant &sm): Enemy(sm.getHP(), sm.getType())
{
	std::cout << "Gaaah. Break everything !\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ...\n";
}

SuperMutant		&SuperMutant::operator=(const SuperMutant &sm)
{
	type = sm.getType();
	hp = sm.getHP();
	std::cout << "Gaaah. Break everything !\n";
	return (*this);
}

void			SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage > 3 ? damage - 3: 0);
}
