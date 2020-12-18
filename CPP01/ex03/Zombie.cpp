#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type)
{
	this->name = _name;
	this->type = _type;
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Corooonaaaa\n";
}

void		Zombie::setName(std::string _name)
{
	this->name = _name;
}

void		Zombie::setType(std::string _type)
{
	this->type = _type;
}

std::string		Zombie::getType(void)
{
	return (this->type);
}