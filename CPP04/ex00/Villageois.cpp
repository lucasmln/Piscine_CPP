/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Villageois.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:59:27 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:45:34 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Villageois.hpp"

Villageois::Villageois()
{
}

Villageois::Villageois(std::string _name): Victim(_name)
{
	std::cout << "Bla bla bla\n";
}

Villageois::Villageois(const Villageois &p): Victim(p.getName())
{
	std::cout << "Bla bla bla\n";
}

Villageois	&Villageois::operator=(const Villageois &p)
{
	name = p.getName();
	std::cout << "Bla bla bla\n";
	return (*this);
}

Villageois::~Villageois()
{
	std::cout << "Zut et flute !\n";
}

void	Villageois::getPolymorphed() const
{
	std::cout << getName() << " was just polymorphed into a super soldier!\n";
}
