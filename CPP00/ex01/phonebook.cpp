/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:06:16 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/10 10:46:38 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		User::ft_find(User book, std::string buf)
{
	size_t		len;

	len = -1;
	while (++len < book.first_name.length())
		if (book.first_name.compare(len, buf.size(), buf) == 0)
			return (1);
	len = -1;
	while (++len < book.last_name.length())
		if (book.last_name.compare(len, buf.size(), buf) == 0)
			return (1);
	len = -1;
	while (++len < book.login.length())
		if (book.login.compare(len, buf.size(), buf) == 0)
			return (1);
	return (0);
}

void	User::ft_print_user(User book)
{
	std::cout << "first name : " <<  book.first_name << std::endl;
	std::cout << "last name : " <<  book.last_name << std::endl;
	std::cout << "nick name : " <<  book.nick_name << std::endl;
	std::cout << "login : " <<  book.login << std::endl;
	std::cout << "postal address : " <<  book.postal_address << std::endl;
	std::cout << "email : " <<  book.email << std::endl;
	std::cout << "phone number : " <<  book.phone << std::endl;
	std::cout << "birthday date : " <<  book.birthday << std::endl;
	std::cout << "favorite meal : " <<  book.favorite_meal << std::endl;
	std::cout << "underwear color : " <<  book.underwear_color << std::endl;
	std::cout << "darkest secret : " <<  book.darkest_secret << std::endl;
}

void	User::ft_add()
{
	std::cout << "First name ?" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "Last name ?" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "Nick name ?" << std::endl;
	getline(std::cin, this->nick_name);
	std::cout << "Login ?" << std::endl;
	getline(std::cin, this->login);
	std::cout << "Postal address ?" << std::endl;
	getline(std::cin, this->postal_address);
	std::cout << "Email address ?" << std::endl;
	getline(std::cin, this->email);
	std::cout << "Phone number ?" << std::endl;
	getline(std::cin, this->phone);
	std::cout << "Birthday date ?" << std::endl;
	getline(std::cin, this->birthday);
	std::cout << "Favorite meal ?" << std::endl;
	getline(std::cin, this->favorite_meal);
	std::cout << "Underwear_color ?" << std::endl;
	getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret ?" << std::endl;
	getline(std::cin, this->darkest_secret);
}

void	User::ft_print_research(std::string s)
{
	int		j;

	if (s.length() > 10)
	{
		j = -1;
		while (++j < 9)
			std::cout << s[j];
		std::cout << '.' << "|";
	}
	else
	{
		j = 10 - s.size();
		while (j-- > 0)
			std::cout << " ";
		std::cout << s << "|";
	}
}

void	User::ft_search(User book[], int i)
{
	int				k;
	int				index;
	User			temp[8];
	std::string		buf;
	std::string		buf2;
	//std::cout << "Who do you want find ?\n";
	//getline(std::cin, buf);
	k = -1;
	index = 0;
	while (++k < i)
		if (ft_find(book[k], buf) == 1)
		{
			std::cout << index << "|";
			ft_print_research(book[k].first_name);
			ft_print_research(book[k].last_name);
			ft_print_research(book[k].login);
			std::cout << book[k].login << std::endl;
			temp[index] = book[k];
			index++;
		}
	if (index-- > 0)
	{
		while (buf2.size() != 1 || buf2[0] > index + '0' || buf2[0] < '0')
		{
			std::cout << "Select one number please.\n";
			getline(std::cin, buf2);
			if (buf2.size() == 1 && buf2[0] <= index + '0' && buf2[0] >= '0')
				ft_print_user(temp[buf2[0] - '0']);
			else
				std::cout << "Please enter a right index\n";
		}
	}
}

std::string		User::getLogin()
{
	return (login);
}

std::string		User::getLastName()
{
	return (last_name);
}

std::string		User::getFirstName()
{
	return (first_name);
}
