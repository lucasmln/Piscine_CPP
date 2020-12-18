#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name, 100, 50, 3, 20, 15, 3)
{
	std::cout << "ScavTrap create" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap("Unamed", 100, 50, 3, 20, 15, 3)
{
	std::cout << "ScavTrap create without name" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &scav)
{
    if (this != &scav)
    {
        this->hit = scav.hit;
        this->max_hit = scav.max_hit;
        this->energie = scav.energie;
        this->max_energie = scav.max_energie;
        this->level = scav.level;
        this->name = scav.name;
        this->mele_damage = scav.mele_damage;
        this->ranged_damage = scav.ranged_damage;
        this->armor = scav.armor;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

int		ScavTrap::challengeNewcomer(std::string const &target)
{
	int		nb;
	static const std::string chall[] = {" fight a lion", " do 100 push up", " sing a song", " louche", " eat 100 donuts"};

	nb = rand() % 4;
	std::cout << target << chall[nb] << std::endl;
	return (0);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap die" << std::endl;
}