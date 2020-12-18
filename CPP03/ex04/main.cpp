# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"
# include "SuperTrap.hpp"

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

	std::cout << std::endl << std::endl << "NinjaTrap action :\n" << std::endl;

	{
		NinjaTrap	toto("Toto");
		FragTrap	cible("Nathan");
		ScavTrap	scav("Hugo");

		toto.rangedAttack(cible.getName());
		cible.takeDamage(20);
		toto.ninjaShoebox(cible);
		cible.print_stat();
		cible.beRepaired(34);
		cible.print_stat();
		toto.ninjaShoebox(toto);
		toto.ninjaShoebox(scav);
		cible.print_stat();
		cible.beRepaired(150);
		cible.print_stat();
	}

	std::cout << std::endl << std::endl << "SuperTrap action :\n" << std::endl;

	{
		SuperTrap toto("PerfectSon");
		NinjaTrap	ninja("Toto");
		FragTrap	cible("Nathan");
		ScavTrap	scav("Hugo");
    	
		toto.rangedAttack(cible.getName());
		cible.takeDamage(20);
		toto.ninjaShoebox(cible);
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
		cible.print_stat();
		cible.beRepaired(34);
		cible.print_stat();
		toto.ninjaShoebox(ninja);
		toto.ninjaShoebox(scav);
		cible.print_stat();
		cible.beRepaired(150);
		cible.print_stat();
		toto.print_stat();
	}
}