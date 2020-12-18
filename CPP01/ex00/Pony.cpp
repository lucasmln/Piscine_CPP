#include "Pony.hpp"

Pony::Pony(int _age, std::string _name, std::string _color, std::string _language)
{
	age = _age;
	name = _name;
	color = _color;
	language = _language;
	lvl = 1;
	hp = 100;
	att = 25;
	def = 6;
	std::cout << "Object created with succes\n";
}

void	Pony::lvl_up()
{
	lvl += 1;
	hp += 15;
	att += 7;
	def += 3;
	std::cout << "Your Pony level up\n";
}

void		Pony::print_stats()
{
	std::cout << "lvl : " << this->lvl << ".\n";
	std::cout << "hp : " << this->hp << ".\n";
	std::cout << "attack : " << this->att << ".\n";
	std::cout << "defense : " << this->def << ".\n";
}

void		Pony::print_infos()
{
	std::cout << "name : " << this->name << ".\n";
	std::cout << "age : " << this->age << ".\n";
	std::cout << "color : " << this->color << ".\n";
}

Pony::~Pony()
{
	std::cout << "Pony died.\n";
}
