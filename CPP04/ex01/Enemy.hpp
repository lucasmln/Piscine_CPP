/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 19:00:12 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/15 12:16:04 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		Enemy();

	protected:
		int				hp;
		std::string		type;

	public:
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &e);
		virtual ~Enemy();
		Enemy			&operator=(const Enemy &e);
		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int damage);
};

#endif
