/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:19:00 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:29:32 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): name(name),
											damage(damage), apcost(apcost)
{
}

AWeapon::AWeapon(const AWeapon &w): name(w.getName()), damage(w.getDamage()), apcost(w.getAPCost())
{
}

AWeapon::~AWeapon()
{
}

AWeapon		&AWeapon::operator=(const AWeapon &w)
{
	name = w.getName();
	damage = w.getDamage();
	apcost = w.getAPCost();
	return (*this);
}

void			AWeapon::attack() const
{
	std::cout << "Ratatata !!!!\n";
}

std::string		AWeapon::getName() const
{
	return (name);
}

int				AWeapon::getDamage() const
{
	return (damage);
}

int				AWeapon::getAPCost() const
{
	return (apcost);
}
