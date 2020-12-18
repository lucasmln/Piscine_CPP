#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &i);
		virtual ~Cure();
		Cure		&operator=(const Cure &i);

		virtual AMateria			*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
