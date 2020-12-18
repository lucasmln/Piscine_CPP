#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	private:

	public:
		SuperTrap(std::string _name);
		SuperTrap();
		SuperTrap(SuperTrap const &copy);
		~SuperTrap();

		SuperTrap	&operator=(SuperTrap const &super);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		int		energyPoints();
		int		maxEnergyPoints();
		int		hitPoints();
		int		maxHitPoints();
		int		meleeAttack();
		int		rangedAttack();
		int		armorReduction();
};

#endif
