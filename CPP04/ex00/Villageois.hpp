/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Villageois.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:54:49 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:42:40 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VILLAGEOIS_HPP
# define VILLAGEOIS_HPP

# include "Victim.hpp"

class Villageois: public Victim
{
	private:
		Villageois();

	public:
		Villageois(std::string _name);
		Villageois(const Villageois &p);
		Villageois &operator=(const Villageois &p);
		~Villageois();
		virtual void	getPolymorphed() const;
};

#endif
