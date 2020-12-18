#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string _name) : ClapTrap(_name, 100, 100, 5, 30, 20, 1)
{
	std::cout << "FragTrap creat" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Unamed", 100, 100, 5, 30, 20, 1)
{
	std::cout << "FragTrap creat without name" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy): ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const &frag)
{
    if (this != &frag)
    {
        this->hit = frag.hit;
        this->max_hit = frag.max_hit;
        this->energie = frag.energie;
        this->max_energie = frag.max_energie;
        this->level = frag.level;
        this->name = frag.name;
        this->mele_damage = frag.mele_damage;
        this->ranged_damage = frag.ranged_damage;
        this->armor = frag.armor;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

int		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		nb;
	static const std::string attack[] = {" donne un coup de babouche a", " sort son ak-47 et tire sa meilleur rafale dans les genoux de ", " etrangle ", " lance un jet de poussiere ", " mord comme un lion "};

	nb = rand() % 4;
	if (getEnergie() >= 25)
	{
		std::cout << getName() << attack[nb] << target << std::endl;
		setEnergie(getEnergie() - 25);
		return ((nb + 1) * 6);
	}
	else
		std::cout << getName() << "n'a pas assez d'energie desole pour toi\n";
	return (0);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap die" << std::endl;
}
