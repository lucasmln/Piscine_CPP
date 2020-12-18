/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:35:38 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:56:27 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(std::string name, int apcost, int damage): AWeapon(name, apcost, damage)
{
}

PowerFist::PowerFist(const PowerFist &p): AWeapon(p.getName(), p.getAPCost(), p.getDamage())
{
}

PowerFist::~PowerFist()
{
}

PowerFist		&PowerFist::operator=(const PowerFist &p)
{
	name = p.getName();
	damage = p.getDamage();
	apcost = p.getAPCost();
	return (*this);
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *\n";
}

std::string		PowerFist::getName() const
{
	return (name);
}

int				PowerFist::getAPCost() const
{
	return (apcost);
}

int				PowerFist::getDamage() const
{
	return (damage);
}

