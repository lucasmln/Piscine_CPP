/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:22:28 by lmoulin           #+#    #+#             */
/*   Updated: 2020/02/26 18:06:50 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP
#include <iostream>

class	User
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	public:
	void	ft_print_research(std::string s);
	int		ft_find(User book, std::string buf);
	void	ft_print_user(User book);
	void	ft_add();
	void	ft_search(User book[], int i);

	std::string		getLogin();
	std::string		getFirstName();
	std::string		getLastName();
};
#endif
