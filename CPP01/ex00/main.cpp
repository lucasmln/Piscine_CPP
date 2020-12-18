#include "Pony.hpp"

void	PonyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony(7, "Mathieu", "beige orange", "Coréen, Allemand, Colombien");
	pony->print_stats();
	pony->lvl_up();
	pony->print_stats();
	pony->print_infos();
	delete pony;
}

void	PonyOnTheStack()
{
	Pony	pony(87, "Jean-David", "gris fade", "Français, Anglais, Breton");
	pony.print_stats();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.lvl_up();
	pony.print_stats();
	pony.print_infos();
}

int		main()
{
	std::cout << "Stack : \n";
	PonyOnTheStack();
	std::cout << "\nHeap : \n";
	PonyOnTheHeap();
}
