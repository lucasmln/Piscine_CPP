#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		unsigned int	_xp;
		std::string		_type;
	private:
		AMateria();

	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &am);
		virtual ~AMateria();
		AMateria			&operator=(const AMateria &am);

		std::string			const &getType() const;
		unsigned int		getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
