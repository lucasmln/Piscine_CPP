#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public virtual ClapTrap
{
	public:
		NinjaTrap(std::string _name);
		NinjaTrap();
		NinjaTrap(NinjaTrap const &copy);
		~NinjaTrap();

		NinjaTrap	&operator=(NinjaTrap const &ninja);

		void	ninjaShoebox(ScavTrap &target);
		void	ninjaShoebox(FragTrap &target);
		void	ninjaShoebox(NinjaTrap &target);
};

#endif
