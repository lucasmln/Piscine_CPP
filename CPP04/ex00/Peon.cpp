/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:59:27 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:29:32 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string _name): Victim(_name)
{
	std::cout << "Zog zog\n";
}

Peon::Peon(const Peon &p): Victim(p.getName())
{
	std::cout << "Zog zog\n";
}

Peon	&Peon::operator=(const Peon &p)
{
	name = p.getName();
	std::cout << "Zog zog\n";
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

void	Peon::getPolymorphed() const
{
	std::cout << getName() << " was just polymorphed into a pink pony!\n";
}
