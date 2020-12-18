#include "HumanB.hpp"

HumanB::HumanB(std::string name): arme(NULL), name(name)
{
}

void		HumanB::setWeapon(Weapon &_arme)
{
	this->arme = &_arme;
}

void		HumanB::attack()
{
	std::cout << this->name << " attacks with this " << this->arme->getType() << std::endl;
}
