/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:29:50 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 18:55:38 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	protected:
		PowerFist(std::string name, int apcost, int damage);

	public:
		PowerFist();
		PowerFist(const PowerFist &p);
		~PowerFist();
		PowerFist		&operator=(const PowerFist &p);
		std::string		getName() const;
		int				getDamage() const;
		int				getAPCost() const;
		virtual void	attack() const;
};

#endif
