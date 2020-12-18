#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap creat" << std::endl;
	name = _name;
	hit = 100;
	max_hit = 100;
	energie = 100;
	max_energie = 100;
	level = 1;
	mele_damage = 30;
	ranged_damage = 20;
	armor = 5;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap creat without name" << std::endl;
	name = "Unamed";
	hit = 100;
	max_hit = 100;
	energie = 100;
	max_energie = 100;
	level = 1;
	mele_damage = 30;
	ranged_damage = 20;
	armor = 5;
}

FragTrap::FragTrap(FragTrap const & copy)
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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " ranged attack " << target << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " melee attack " << target << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage;

	damage = amount > (unsigned int)armor ? amount - armor : 0;
	std::cout << name << " take " << damage << " damage\n";
	hit = amount - armor > hit ? 0 : hit + armor - amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " be repaire " << amount << " energie points\n";
	hit = hit + amount > max_hit ? max_hit : hit + amount;
}

int		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		nb;

	nb = rand() % 5;
	if ( this->energie >= 25)
	{
		if (nb == 0)
		{
			std::cout << name << " donne un coup de babouche a " << target << std::endl;
			this->energie -= 25;
			return (23);
		}
		else if (nb == 1)
		{
			std::cout << name << " sort son ak-47 et tire sa meilleur rafale dans les genoux de " << target;
			this->energie -= 25;
			return (35);
		}
		else if (nb == 2)
		{
			std::cout << name << " etrangle " << target << std::endl;
			this->energie -= 25;
			return (28);
		}
		else if (nb == 3)
		{
			std::cout << name << " pose une mine anti personnel sous les pied de " << target << " qui subit une castration douloureuse\n";
			this->energie -= 25;
			return (46);
		}
		else if (nb == 4)
		{
			std::cout << name << " croque dans une gousse d'ail et s'approche de " << target << " lui soufflant un gaz soporifique destructeur\n";
			this->energie -= 25;
			return (63);
		}
	}
	else
		std::cout << name << "n'a pas assez d'energie desole pour toi\n";
	return (0);
}

void	FragTrap::print_stat()
{
	std::cout << "name " << this->name << std::endl;
	std::cout << "hp " << this->hit << std::endl;
	std::cout << "energie " << this->energie << std::endl;
}

std::string		FragTrap::getName()
{
	return (name);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap die" << std::endl;
}
