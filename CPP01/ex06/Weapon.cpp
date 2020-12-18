#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

const std::string		&Weapon::getType()
{
	return type;
}

void		Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
