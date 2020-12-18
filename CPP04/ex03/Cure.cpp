#include "Cure.hpp"

Cure::Cure(): AMateria("Cure")
{
}

Cure::Cure(const Cure &i): AMateria("Cure")
{
	(void)i;
}

Cure::~Cure()
{
}

Cure		&Cure::operator=(const Cure &i)
{
	(void)i;
	return (*this);
}

AMateria		*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
