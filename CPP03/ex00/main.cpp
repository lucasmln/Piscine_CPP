#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	toto("Toto");
	FragTrap	cible("Nicolas");

	toto.rangedAttack(cible.getName());
	cible.takeDamage(20);
	cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
	cible.print_stat();
	cible.beRepaire(34);
	cible.print_stat();
	cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
	cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
	cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
	cible.print_stat();
	cible.beRepaire(150);
	cible.print_stat();
	cible.takeDamage(toto.vaulthunter_dot_exe(cible.getName()));
	toto.print_stat();
}
