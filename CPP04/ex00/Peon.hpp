/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 16:54:49 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 17:29:12 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
	private:
		Peon();

	public:
		Peon(std::string _name);
		Peon(const Peon &p);
		Peon &operator=(const Peon &p);
		~Peon();
		virtual void	getPolymorphed() const;
};

#endif
