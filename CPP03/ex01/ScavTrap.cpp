#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "ScavTrap create" << std::endl;
	name = _name;
	hit = 100;
	max_hit = 100;
	energie = 50;
	max_energie = 50;
	level = 1;
	mele_damage = 20;
	ranged_damage = 15;
	armor = 3;
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap create without name" << std::endl;
	name = "Unamed";
	hit = 100;
	max_hit = 100;
	energie = 50;
	max_energie = 50;
	level = 1;
	mele_damage = 20;
	ranged_damage = 15;
	armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " ScavTrap ranged attack " << target << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " ScavTrap melee attack " << target << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	damage = amount > (unsigned int)armor ? amount - armor : 0;
	std::cout << name << " take " << damage << " damage\n";
	hit = amount - armor > hit ? 0 : hit + armor - amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " be repaire " << amount << " energie points\n";
	hit = hit + amount > max_hit ? max_hit : hit + amount;
}

void	ScavTrap::print_stat()
{
	std::cout << "name " << this->name << std::endl;
	std::cout << "hp " << this->hit << std::endl;
	std::cout << "energie " << this->energie << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap die" << std::endl;
}

int		ScavTrap::hitPoints()
{
	return (60);
}

int		ScavTrap::maxHitPoints()
{
	return (60);
}

int		ScavTrap::energyPoints()
{
	return (120);
}

int		ScavTrap::maxEnergyPoints()
{
	return (120);
}

int		ScavTrap::meleeAttack()
{
	return (60);
}

int		ScavTrap::rangedAttack()
{
	return (5);
}

std::string		ScavTrap::getName()
{
	return (name);
}

int		ScavTrap::armorReduction()
{
	return (0);
}
