/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:13:42 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 16:51:34 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(const Victim &v): name(v.name)
{
	std::cout << "A random victim called " << getName() << " just appeared\n";
}

Victim::Victim(std::string _name): name(_name)
{
	std::cout << "A random victim called " << getName() << " just appeared\n";
}

Victim	&Victim::operator=(const Victim &v)
{
	name = v.getName();
	std::cout << "A random victim called " << getName() << " just appeared\n";
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Victim &v)
{
	return (out << "I'm " << v.getName() << " and I like otters!\n");
}

void			Victim::getPolymorphed() const
{
	std::cout << getName() << " was just polymorphed in a cute little sheep!\n";
}

Victim::~Victim()
{
	std::cout << "The victim " << getName() << " died for no apparent reasons!\n";
}

const std::string		Victim::getName() const
{
	return (name);
}
