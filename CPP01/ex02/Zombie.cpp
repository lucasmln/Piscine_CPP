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