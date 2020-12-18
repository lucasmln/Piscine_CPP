#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme): arme(arme), name(name)
{
}

void		HumanA::attack()
{
	std::cout << this->name << " attacks with this " << this->arme.getType() << std::endl;
}
