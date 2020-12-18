#include "Ice.hpp"

Ice::Ice(): AMateria("Ice")
{
}

Ice::Ice(const Ice &i): AMateria("Ice")
{
	(void)i;
}

Ice::~Ice()
{
}

Ice		&Ice::operator=(const Ice &i)
{
	(void)i;
	return (*this);
}

Ice		*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice boltat " << target.getName() << " *\n";
}
