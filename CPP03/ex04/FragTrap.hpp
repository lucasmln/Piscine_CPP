#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public :
		FragTrap(std::string _name);
		FragTrap();
		FragTrap(FragTrap const & copy);
		~FragTrap();

	    FragTrap &operator=(FragTrap const &ope);

		int		vaulthunter_dot_exe(std::string const & target);
		
	private :
};

#endif
