#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected :
		unsigned int	hit;
		unsigned int	max_hit;
		unsigned int	energie;
		unsigned int	max_energie;
		unsigned int	level;
		int				mele_damage;
		int				ranged_damage;
		int				armor;
		std::string		name;

	public :
		ClapTrap(std::string _name, int _hit, int _energie, int _armor, int _mele, int _ranged, int _level);
		ClapTrap();
		ClapTrap(ClapTrap const &copy);
		virtual ~ClapTrap();

		ClapTrap & operator=(ClapTrap const &clap);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	beRepaired(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	print_stat();

		virtual std::string		getName();
		unsigned int	getHit();
		unsigned int	getMax_hit();
		unsigned int	getEnergie();
		unsigned int	getMax_energie();
		int				getMeleDamage();
		int				getRangedDamage();
		int				getArmor();

		void			setHit(unsigned int _hit);
		void			setEnergie(unsigned int _energie);

};

#endif
