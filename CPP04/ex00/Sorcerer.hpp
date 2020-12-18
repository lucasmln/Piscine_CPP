/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:11:54 by lmoulin           #+#    #+#             */
/*   Updated: 2020/06/15 16:41:12 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <ostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string		name;
		std::string		title;
		Sorcerer();

	public:
		Sorcerer(std::string _name, std::string _title);
		~Sorcerer(void);
		Sorcerer &operator=(const Sorcerer &s);
		Sorcerer(const Sorcerer &s);

		void polymorph(Victim const &v) const;
		const std::string		getName() const;
		const std::string		getTitle() const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif
