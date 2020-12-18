/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SabreLaser.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:35:38 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:54:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SabreLaser.hpp"

SabreLaser::SabreLaser(): AWeapon("Sabre Laser", 7, 26)
{
}

SabreLaser::SabreLaser(std::string name, int apcost, int damage): AWeapon(name, apcost, damage)
{
}

SabreLaser::SabreLaser(const SabreLaser &sl): AWeapon(sl.getName(), sl.getAPCost(), sl.getDamage())
{
}

SabreLaser::~SabreLaser()
{
}

SabreLaser		&SabreLaser::operator=(const SabreLaser &sl)
{
	name = sl.getName();
	damage = sl.getDamage();
	apcost = sl.getAPCost();
	return (*this);
}

void			SabreLaser::attack() const
{
	std::cout << "* zviiouuuuu *\n";
}

std::string		SabreLaser::getName() const
{
	return (name);
}

int				SabreLaser::getAPCost() const
{
	return (apcost);
}

int				SabreLaser::getDamage() const
{
	return (damage);
}
