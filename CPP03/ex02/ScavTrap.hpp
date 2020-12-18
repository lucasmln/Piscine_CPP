#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string _name);
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

	    ScavTrap &operator=(ScavTrap const &scav);

		int		challengeNewcomer(std::string const & target);
};

#endif
