#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	public :
		ScavTrap(std::string _name);
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

	    ScavTrap &operator=(ScavTrap const &scav);

		int		challengeNewcomer(std::string const & target);

		virtual void	rangedAttack(std::string const &target);
		virtual void	meleeAttack(std::string const &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
		virtual void	print_stat();
		virtual int		energyPoints();
		virtual int		maxEnergyPoints();
		virtual int		hitPoints();
		virtual int		maxHitPoints();
		virtual int		meleeAttack();
		virtual int		rangedAttack();
		virtual int		armorReduction();

		std::string		getName();

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
