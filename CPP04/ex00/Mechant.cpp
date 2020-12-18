/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mechant.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:59:27 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:46:26 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mechant.hpp"

Mechant::Mechant()
{
}

Mechant::Mechant(std::string _name): Victim(_name)
{
	std::cout << "Mouahahahahahaha!\n";
}

Mechant::Mechant(const Mechant &p): Victim(p.getName())
{
	std::cout << "Mouahahahahahaha!\n";
}

Mechant	&Mechant::operator=(const Mechant &p)
{
	name = p.getName();
	std::cout << "Mouahahahahahaha!\n";
	return (*this);
}

Mechant::~Mechant()
{
	std::cout << "Vous me le paierez bande de M... * Sombre dans les trefonds *\n";
}

void	Mechant::getPolymorphed() const
{
	std::cout << getName() << " was just polymorphed into a weak cat!\n";
}
