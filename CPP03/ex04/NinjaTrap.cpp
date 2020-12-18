#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string _name): ClapTrap(_name, 60, 120, 0, 60, 5, 1)
{
	std::cout << "NinjaTrap create" << std::endl;
}

NinjaTrap::NinjaTrap(): ClapTrap("Unamed", 60, 120, 0, 60, 5, 1)
{
	std::cout << "NinjaTrap create without name" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &scav)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap died" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (getEnergie() > 25)
	{
		setEnergie(getEnergie() - 25);
		std::cout << name << " chante avec fragTrap " << target.getName()
		<< std::endl;
		return ;
	}
	std::cout << name << " n'a pas assez d'energie\n";
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (getEnergie() > 25)
	{
		setEnergie(getEnergie() - 25);
		std::cout << name << " mange scavTrap " << target.getName()
		<< std::endl;
		return ;
	}
	std::cout << name << " n'a pas assez d'energie\n";
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (getEnergie() > 25)
	{
		setEnergie(getEnergie() - 25);
		std::cout << name << " danse avec ninjaTrap " << target.getName()
		<< std::endl;
		return ;
	}
	std::cout << name << " n'a pas assez d'energie\n";
}