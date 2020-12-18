#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	std::cout << "FragTrap action :\n" << std::endl;
	{
		FragTrap	toto("Toto");
		FragTrap	cible("Nicolas");

		toto.rangedAttack(cible.getName());
		cible.takeDamage(20);
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.print_stat();
		cible.beRepaired(34);
		cible.print_stat();
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.print_stat();
		cible.beRepaired(150);
		cible.print_stat();
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		toto.print_stat();
	}

	std::cout << std::endl << std::endl << "ScavTrap action :\n" << std::endl;

	{
		ScavTrap	toto("Toto");
		ScavTrap	cible("Nathan");

		toto.rangedAttack(cible.getName());
		cible.takeDamage(20);
		toto.challengeNewcomer(cible.getName());
		cible.print_stat();
		cible.beRepaired(34);
		cible.print_stat();
		toto.challengeNewcomer(cible.getName());
		toto.challengeNewcomer(cible.getName());
		toto.challengeNewcomer(cible.getName());
		cible.print_stat();
		cible.beRepaired(150);
		cible.print_stat();
		toto.challengeNewcomer(cible.getName());
		toto.print_stat();
	}
	
}