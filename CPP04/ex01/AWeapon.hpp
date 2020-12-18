/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 17:58:27 by lmoulin           #+#    #+#             */
/*   Updated: 2020/12/15 11:50:00 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		AWeapon();
		std::string		name;
		int				damage;
		int				apcost;

	public:
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &w);
		~AWeapon();
		AWeapon			&operator=(const AWeapon &w);
		
		std::string		getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
