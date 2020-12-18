#include "Zombie.hpp"

std::string		rand_name(void)
{
	const std::string	name[12] = {"Josette", "Daniel", "Vanessa", "Huguette",
									"Paul", "David", "Donovan", "Louise", "Leo",
									"Reynold", "Didier", "Nathali"};
	return (name[rand() % 12]);
}

ZombieHorde::ZombieHorde(int n)
{
	horde = (Zombie *)malloc(sizeof(Zombie) * (n + 1));
	horde[n].setType("");
	n--;
	while (n >= 0)
	{
		horde[n].setName(rand_name());
		horde[n].setType("Coronarien");
		n--;
	}
}

void		ZombieHorde::annouce(void)
{
	int		i;

	i = 0;
	while (this->horde[i].getType()[0] != '\0')
	{
		horde[i].advert();
		i++;
	}
}

void		ZombieHorde::del(void)
{
	free(this->horde);
	std::cout << "Horde was delete\n";
}
