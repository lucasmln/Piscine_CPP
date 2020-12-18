#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string _name):
	ClapTrap(_name, 100, 120, 20, 60, 20, 1), NinjaTrap(_name), FragTrap(_name)
{
	std::cout << "SuperTrap " << _name << " created" << std::endl;
}

SuperTrap::SuperTrap():
	ClapTrap("Unamed", 100, 120, 20, 60, 20, 1), NinjaTrap("Unamed"), FragTrap("Unamed")
{
	std::cout << "SuperTrap " << "Unamed" << " created" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &copy): NinjaTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "copy creation" << std::endl;
	return ;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &super)
{
	if (this != &super)
    {
        this->hit = super.hit;
        this->max_hit = super.max_hit;
        this->energie = super.energie;
        this->max_energie = super.max_energie;
        this->level = super.level;
        this->name = super.name;
        this->mele_damage = super.mele_damage;
        this->ranged_damage = super.ranged_damage;
        this->armor = super.armor;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap died" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::rangedAttack(target);
}
int		SuperTrap::hitPoints()
{
	return (60);
}

int		SuperTrap::maxHitPoints()
{
	return (60);
}

int		SuperTrap::energyPoints()
{
	return (120);
}

int		SuperTrap::maxEnergyPoints()
{
	return (120);
}

int		SuperTrap::meleeAttack()
{
	return (60);
}

int		SuperTrap::rangedAttack()
{
	return (5);
}

int		SuperTrap::armorReduction()
{
	return (0);
}
