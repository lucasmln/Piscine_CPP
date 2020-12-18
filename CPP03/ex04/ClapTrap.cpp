#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name, int _hit, int _energie, int _armor, int _mele, int _ranged, int _level):
	hit(_hit), energie(_energie), level(_level), mele_damage(_mele), ranged_damage(_ranged), armor(_armor), name(_name)
{
	max_energie = energie;
	max_hit = hit;
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap():
	hit(100), energie(100), level(1), mele_damage(30), ranged_damage(20), armor(5), name("Unamed")
{
	max_energie = 100;
	max_hit = 100;
	std::cout << "ClapTrap created without name" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "Copy constructor" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &clap)
{
    if (this != &clap)
    {
        this->hit = clap.hit;
        this->max_hit = clap.max_hit;
        this->energie = clap.energie;
        this->max_energie = clap.max_energie;
        this->level = clap.level;
        this->name = clap.name;
        this->mele_damage = clap.mele_damage;
        this->ranged_damage = clap.ranged_damage;
        this->armor = clap.armor;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " ranged attack " << target << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " melee attack " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " take " << (amount - armor > 0 ? amount - armor : 0) << " damage\n";
	hit = amount - armor > hit ? 0 : hit + armor - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " be repaire " << amount << " energie points\n";
	hit = hit + amount > max_hit ? max_hit : hit + amount;
}

void	ClapTrap::print_stat()
{
	std::cout << "name " << this->name << std::endl;
	std::cout << "hp " << this->hit << std::endl;
	std::cout << "energie " << this->energie << std::endl;
}

std::string		ClapTrap::getName()
{
	return (name);
}

unsigned int	ClapTrap::getHit()
{
	return (hit);
}

unsigned int	ClapTrap::getMax_hit()
{
	return (max_hit);
}

unsigned int	ClapTrap::getEnergie()
{
	return (energie);
}

unsigned int	ClapTrap::getMax_energie()
{
	return (max_energie);
}

int				ClapTrap::getArmor()
{
	return (armor);
}

int				ClapTrap::getMeleDamage()
{
	return (mele_damage);
}

int				ClapTrap::getRangedDamage()
{
	return (ranged_damage);
}

void			ClapTrap::setHit(unsigned int _hit)
{
	hit = _hit;
}

void			ClapTrap::setEnergie(unsigned int _energie)
{
	energie = _energie;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Delete\n";
}