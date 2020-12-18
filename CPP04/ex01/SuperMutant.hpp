#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &sm);
		~SuperMutant();
		SuperMutant		&operator=(const SuperMutant &superM);

		virtual void	takeDamage(int damage);
};


#endif
