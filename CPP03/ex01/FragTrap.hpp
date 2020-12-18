#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public :
		FragTrap(std::string _name);
		FragTrap();
		FragTrap(FragTrap const & copy);
		~FragTrap();

	    FragTrap &operator=(FragTrap const &ope);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		vaulthunter_dot_exe(std::string const & target);
		void	print_stat();
		
		std::string		getName(void);

	private :
		std::string		name;
		unsigned int	hit;
		unsigned int	max_hit;
		unsigned int	energie;
		unsigned int	max_energie;
		unsigned int	level;
		int				mele_damage;
		int				ranged_damage;
		int				armor;
};

#endif
