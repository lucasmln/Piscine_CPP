/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:29:50 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/15 12:27:28 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	protected:
		PlasmaRifle(std::string name, int apcost, int damage);

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &p);
		~PlasmaRifle();
		PlasmaRifle		&operator=(const PlasmaRifle &p);
		std::string		getName() const;
		int				getDamage() const;
		int				getAPCost() const;
		virtual void	attack() const;
};

#endif
