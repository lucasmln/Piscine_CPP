#include "AMateria.hpp"

AMateria::AMateria(): _xp(0), _type("")
{
}

AMateria::AMateria(std::string const &type): _xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &am): _xp(am._xp), _type(am._type)
{
	*this = am;
	return ;
}

AMateria		&AMateria::operator=(const AMateria &am)
{
	_type = am.getType();
	_xp = am.getXP();
	return (*this);
}

AMateria::~AMateria()
{
}

unsigned int		AMateria::getXP() const
{
	return (_xp);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void				AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
