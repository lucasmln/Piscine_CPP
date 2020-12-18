#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &sm);
		~RadScorpion();
		RadScorpion		&operator=(const RadScorpion &rs);

		virtual void	takeDamage(int damage);

};

#endif
