/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mechant.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:54:49 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:42:01 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MECHANT_HPP
# define MECHANT_HPP

# include "Victim.hpp"

class Mechant: public Victim
{
	private:
		Mechant();

	public:
		Mechant(std::string _name);
		Mechant(const Mechant &p);
		Mechant &operator=(const Mechant &p);
		~Mechant();
		virtual void	getPolymorphed() const;
};

#endif
