/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:10:43 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:27:56 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <ostream>

class Victim
{
	protected:
		Victim();
		std::string		name;

	public:
		Victim(std::string _name);
		Victim(const Victim &v);
		Victim &operator=(const Victim &v);
		~Victim();

		virtual void getPolymorphed() const;
		const std::string		getName() const;
};
 
std::ostream &operator<<(std::ostream &out, Victim &v);

#endif
