/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:09:03 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/15 11:48:33 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Villageois.hpp"
#include "Mechant.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		
		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	{
		Sorcerer Nathan("Nathanan", "the unbreakable");
		Sorcerer Hugo(Nathan);

		Villageois Vanessa("Vanessa");
		Mechant Igor("Igor");

		std::cout << Nathan << Vanessa << Igor;

		Nathan.polymorph(Vanessa);
		Nathan.polymorph(Igor);
	}
	return 0;
}
