#include "GiantSpider.hpp"

GiantSpider::GiantSpider(): Enemy(130, "GiantSpider")
{
	std::cout << "* thic thic thic *\n";
}

GiantSpider::GiantSpider(const GiantSpider &rs): Enemy(rs.getHP(), rs.getType())
{
	std::cout << "* thic thic thic *\n";
}

GiantSpider::~GiantSpider()
{
	std::cout << "* SPLATCH *\n";
}

GiantSpider		&GiantSpider::operator=(const GiantSpider &rs)
{
	type = rs.getType();
	hp = rs.getHP();
	std::cout << "* thic thic thic *\n";
	return (*this);
}

void			GiantSpider::takeDamage(int damage)
{
	Enemy::takeDamage(damage > 2 ? damage - 2 : 0);
}
