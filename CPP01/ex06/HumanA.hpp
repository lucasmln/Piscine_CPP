#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &arme);
		void	attack();

	private:
		Weapon			&arme;
		std::string		name;
};

#endif
