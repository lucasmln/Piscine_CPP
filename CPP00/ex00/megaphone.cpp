/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:32:04 by lmoulin           #+#    #+#             */
/*   Updated: 2020/02/25 16:55:17 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int		i;
	int		k;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (i < ac)
	{
		k = -1;
		while (av[i][++k])
			std::cout << (char)toupper(av[i][k]);
		i++;
	}
	std::cout << std::endl;
  return 0;
}
