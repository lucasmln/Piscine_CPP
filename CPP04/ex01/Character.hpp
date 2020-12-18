#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <ostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string		name;
		int				ap_points;
		AWeapon			*weapon;
	protected:
		Character();

	public:
		Character(std::string const &name);
		Character(const Character &c);
		~Character();

		Character		&operator=(const Character &c);
		void			recoverAP();
		void			equip(AWeapon *equip_weap);
		void			attack(Enemy *enemy);

		std::string		getName() const;
		int				getAP() const;
		AWeapon		*getWeapon() const;
};

std::ostream	&operator<<(std::ostream &out, const Character &c);

#endif
