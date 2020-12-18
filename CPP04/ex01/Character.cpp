#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name): name(name), ap_points(40), weapon(NULL)
{
}

Character::Character(const Character &c): name(c.getName()), ap_points(40), weapon(NULL)
{
}

Character::~Character()
{
	std::cout << name << " dies in horrible suffering\n";
}

Character		&Character::operator=(const Character &c)
{
	name = c.getName();
	ap_points = 40;
	std::cout << "The hero " << name << " was born\n";
	return (*this);
}

void			Character::recoverAP()
{
	ap_points += 10;
	if (ap_points > 40)
		ap_points = 40;
	std::cout << "AP is now " << ap_points << std::endl;
}

void			Character::attack(Enemy *enemy)
{
	if (weapon == NULL)
	{
		std::cout << "Sorry, you can attack because you don't have weapon.\n";
		return;
	}
	if (ap_points < weapon->getAPCost())
	{
		std::cout << "Sorry, you don't have enough AP\n.";
		return;
	}
	std::cout << getName() << " attack " << enemy->getType() << " with a "
				<< weapon->getName() << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	ap_points -= weapon->getAPCost();
	if (enemy->getHP() <= 0)
		enemy->~Enemy();
}

void			Character::equip(AWeapon *equip_weap)
{
	weapon = equip_weap;
}

std::ostream	&operator<<(std::ostream &out, const Character &c)
{
	if (c.getWeapon() == NULL)
		return (out << c.getName() << " has " << c.getAP() << " AP and is unarmed\n");
	return (out << c.getName() << " has " << c.getAP() << " AP and carries a " <<
						c.getWeapon()->getName() << std::endl);
}

std::string		Character::getName() const
{
	return (name);
}

int				Character::getAP() const
{
	return (ap_points);
}

AWeapon		*Character::getWeapon() const
{
	return (weapon);
}
