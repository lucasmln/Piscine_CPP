#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character: public ICharacter
{
	private:
		std::string		_name;
		AMateria*		_inv[4];
		int				count;

		Character();

	public:
		Character(const std::string name);
		Character(const Character &c);
		virtual ~Character();
		Character	&operator=(const Character &c);

		virtual std::string const	&getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);

};


#endif
