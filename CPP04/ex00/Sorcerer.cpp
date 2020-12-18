/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:19:00 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/15 11:47:46 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string _name, std::string _title): name(_name), title(_title)
{
	std::cout << getName() << ", " << getTitle() << ", is born !\n";
}

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(const Sorcerer &s): name(s.name), title(s.title)
{
	std::cout << getName() << ", " << getTitle() << ", is born !\n";
}

Sorcerer &Sorcerer::operator=(const Sorcerer &s)
{
	name = s.getName();
	title = s.getTitle();
	std::cout << getName() << ", " << getTitle() << ", is born !\n";
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << getName() << ", " << getTitle() <<
						", is dead. Consequences will never be the same !\n";
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

const std::string		Sorcerer::getName() const
{
	return (name);
}

const std::string		Sorcerer::getTitle() const
{
	return (title);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &s)
{
	return (out << "I am " << s.getName() << ", " << s.getTitle()
			<< ", and I like ponies!\n");
}
