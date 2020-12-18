#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string _type);
		std::string const	&getType();
		void				setType(std::string new_type);

	private:
		std::string		type;
};

#endif
