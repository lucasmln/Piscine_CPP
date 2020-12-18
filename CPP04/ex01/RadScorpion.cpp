#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &rs): Enemy(rs.getHP(), rs.getType())
{
	std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion		&RadScorpion::operator=(const RadScorpion &rs)
{
	type = rs.getType();
	hp = rs.getHP();
	std::cout << "* click click click *\n";
	return (*this);
}

void			RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
