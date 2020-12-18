/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SabreLaser.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:29:50 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:53:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SABRELASER_HPP
# define SABRELASER_HPP

#include "AWeapon.hpp"

class SabreLaser: public AWeapon
{
	protected:
		SabreLaser(std::string name, int apcost, int damage);

	public:
		SabreLaser();
		SabreLaser(const SabreLaser &p);
		~SabreLaser();
		SabreLaser		&operator=(const SabreLaser &p);
		std::string		getName() const;
		int				getDamage() const;
		int				getAPCost() const;
		virtual void	attack() const;
};

#endif
