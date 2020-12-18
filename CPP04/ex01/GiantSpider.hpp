#ifndef GIANTSPIDER_HPP
# define GIANTSPIDER_HPP

# include "Enemy.hpp"

class GiantSpider: public Enemy
{
	public:
		GiantSpider();
		GiantSpider(const GiantSpider &sm);
		~GiantSpider();
		GiantSpider		&operator=(const GiantSpider &rs);

		virtual void	takeDamage(int damage);

};

#endif
