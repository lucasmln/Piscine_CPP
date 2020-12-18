#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type)
{
}

Enemy::Enemy(const Enemy &e): hp(e.getHP()), type(e.getType())
{
}

Enemy::~Enemy()
{
}

Enemy			&Enemy::operator=(const Enemy &e)
{
	type = e.getType();
	hp = getHP();
	return (*this);
}

void			Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	hp -= damage;
}

std::string		Enemy::getType() const
{
	return (type);
}

int				Enemy::getHP() const
{
	return (hp);
}
