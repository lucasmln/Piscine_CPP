/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:57:12 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/10 11:16:55 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <istream>
#include "phonebook.hpp"


int		ft_find(User book, std::string buf)
{
	size_t		len;

	len = 0;
	while (len++ < book.getFirstName().length())
		if (book.getFirstName().compare(len, buf.size(), buf) == 0)
			return (1);
	len = 0;
	while (len++ < book.getLastName().length())
		if (book.getLastName().compare(len, buf.size(), buf) == 0)
			return (1);
	len = 0;
	while (len++ < book.getLogin().length())
		if (book.getLogin().compare(len, buf.size(), buf) == 0)
			return (1);
	return (0);
}

int		main()
{
	std::string buf;
	User	book[8];
	int		i;

	i = 0;
	std::cout << "Hello my friend, welcome in your phonebook" << std::endl;
	std::cout << "Please enter :\n";
	while (buf.compare("EXIT"))
	{
		std::cout << "SEARCH to find someone\nEXIT to leave" << std::endl;
		std::cout << "ADD to add a user" << std::endl;
		getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
		{
			if (i <= 7)
				book[i++].ft_add();
			else
				std::cout << "Sorry you're book is full.\n";
		}
		else if (buf.compare("SEARCH") == 0)
			book[i].ft_search(book, i);
		else if (buf.compare("EXIT") != 0)
			std::cout << "Sorry this command doesn't exist\n";
	}
	return (0);
}
