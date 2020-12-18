/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:35:38 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:54:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(std::string name, int apcost, int damage): AWeapon(name, apcost, damage)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &p): AWeapon(p.getName(), p.getAPCost(), p.getDamage())
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &p)
{
	name = p.getName();
	damage = p.getDamage();
	apcost = p.getAPCost();
	return (*this);
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}

std::string		PlasmaRifle::getName() const
{
	return (name);
}

int				PlasmaRifle::getAPCost() const
{
	return (apcost);
}

int				PlasmaRifle::getDamage() const
{
	return (damage);
}
