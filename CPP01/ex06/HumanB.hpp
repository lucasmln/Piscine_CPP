#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &_arme);

	private:
		Weapon			*arme;
		std::string		name;
};

#endif